#include<iostream>
using namespace std;

int recursiveATOI(char const* string, int length) 
{
	if (length == 1)
		return *string - '0';
	return (10 * recursiveATOI(string, length - 1) + string[length - 1] - '0');
}
template <class T>
class Node
{
public:
	T data;
	Node<T>* next;

	Node() 
	{
		data = 0;
		next = NULL;
	}
	Node(T val) 
	{
		data = val;
		next = 0;
	}
};
template <class T>
class List
{
	Node<T>* head;
	Node<T>* tail;
public:
	List<T>() {
		head = 0;
		tail = 0;
	}
	void insertAtStart(T const element) 
	{
		if (head == 0) 
		{
			head = new Node<T>(element);
			tail = head;
		}
		else
		{
			Node<T>* node = new Node<T>(element);
			node->next = head;
			head = node;
		}
	}
	void insertAtEnd(T const element)
	{
		if (tail == 0) {
			tail = new Node<T>(element);
			tail->next = 0;
			head = tail;
		}
		else {
			tail->next = new Node<T>(element);
			tail = tail->next;
			tail->next = 0;
		}
	}

	Node<T>* reverse(Node<T>* node)
	{
		if (node == NULL)
			cout << "Reverse not possible List is empty." << endl;
		if (node->next == NULL)
		{
			head = node;
			return node;
		}
		Node<T>* node1 = reverse(node->next);
		node1->next = node;
		node->next = NULL;
		return node;
	}
	void reverse()
	{
		reverse(head);
	}

	void construct(Node<T>*& head, string& s1, string& s2)
	{
		if (head == nullptr);
		else {
			s1 += head->data;
			construct(head->next, s1, s2);
			s2 += head->data;
		}
	}
	bool isPalindrome(Node<T>* head)
	{
		string s1, s2;
		construct(head, s1, s2);
		return s1 == s2;
	}
	void isPalindrome()
	{
		if (isPalindrome(head) == true)
			cout << "List is palindrome" << endl;
		else
			cout << "List is not palindrome" << endl;
	}
	void print()
	{
		Node<T>* tmp;
		cout << "List is: " << endl;
		for (tmp = head; tmp != tail->next; tmp = tmp->next)
			cout << tmp->data << " ";
		cout << endl;
	}
	bool isEmpty(){
		if (head == nullptr)
			return true;
		else
			return false;
	}
	~List() {
		Node<T>* p = head;
		while (!isEmpty()) {
			p = head->next;
			delete head;
			head = p;
		}
	}
};