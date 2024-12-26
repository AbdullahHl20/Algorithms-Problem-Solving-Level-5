// Algorithms-Problem-Solving-Level-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsDblLinkedList.h"

int main()
{
	clsDblLinkedList<int> MydblLinkedList;

	if (MydblLinkedList.IsEmpty())
		cout << "\n List Is Empty\n";
	else
		cout << "\nList Is not Empty\n";
	
	MydblLinkedList.InsertAtBeginning(5);
	MydblLinkedList.InsertAtBeginning(2);
	MydblLinkedList.InsertAtBeginning(3);
	MydblLinkedList.InsertAtBeginning(4);
	MydblLinkedList.InsertAtBeginning(2);
	MydblLinkedList.InsertAtBeginning(10);
	MydblLinkedList.PrintList();

	clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);

	if (N1 != NULL)
		cout << "\nNode with value 2 is Found :-)\n";
	else
		cout << "\nNode Is not found :-(\n";

	MydblLinkedList.InsertAfter(N1, 500);
	cout << "\nAfter Inserting 500 after 2:\n";
	MydblLinkedList.PrintList();

	clsDblLinkedList<int>::Node* N2 = MydblLinkedList.GetNode(2);
	cout << N2->value;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
