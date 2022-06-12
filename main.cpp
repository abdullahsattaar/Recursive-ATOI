#include<iostream>
#include"19L-1248.h"
using namespace std;

int main() 
{
	char data[50];
	cout << "Enter data to convert to integer." << endl;
	cin >> data;
	int length = strlen(data);
	int arr = recursiveATOI(data, length);
	cout << arr;
	cout << endl;

	List<int> L1;
	L1.insertAtStart(9);
	L1.insertAtStart(6);
	L1.insertAtStart(2);
	L1.insertAtStart(2);
	L1.insertAtStart(6);
	L1.insertAtStart(5);
	L1.insertAtStart(1);
	L1.print();
	//L1.reverse();
	L1.print();
	L1.isPalindrome();

	List<int> L2;
	L2.insertAtStart(1);
	L2.insertAtStart(2);
	L2.insertAtStart(4);
	L2.insertAtStart(2);
	L2.insertAtStart(1);
	L2.isPalindrome();
	
	system("pause");
	return 0;
}