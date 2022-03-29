#include <iostream>
using namespace std;

template<class T>
struct Node
{
public:
	Node* next;
	T value;
public:
	Node() {}
	Node(T t, Node* next) {
		this->value = t;
		this->next = next;
	}
};

template<typename T>
void tarval(Node<T>* node) {
	cout << node->value << endl;
	if (node->next == nullptr) {
		cout << "over" << endl;
		return;
	}
	tarval(node->next);
}

template <class T>
struct BSNode {
public:
	BSNode<T>* left;
	BSNode<T>* right;
	T value;
	BSNode(BSNode<T>* left, BSNode<T>* right, T t) : left(left), right(right), value(t) {};
};

template <class T>
class BSTree
{
private:
	BSNode<T> value;
public:
};