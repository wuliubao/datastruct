// struct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
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



int main()
{
    std::cout << "Hello World!\n";

    string my_string;

    while (cin >> my_string) {
        cout << "inner";
        string inner_string;
        cin >> inner_string;
    }

    //string my_string;
	//getline(cin, my_string);
	//cout << my_string;


	//string my;
	//while (cin >> my) {
	//	cout << my << endl;
	//}

    //for (char a : my_string) {
    //    cout << a << endl;
    //}

}

