#pragma once
#include <iostream>

using namespace std;
template <class T>

class clsDblLinkedList
{

public:

	class Node
	{

	public:
		T value;
		Node* next;
		Node* prev;
	};

	Node* head = NULL;

	void InsertAtBeginning(T value)
	{

		/*
			1-Create a new node with the desired value.
			2-Set the next pointer of the new node to the current head of the list.
			3-Set the previous pointer of the current head to the new node.
			4-Set the new node as the new head of the list.
		*/

		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = head;
		newNode->prev = NULL;

		if (head != NULL) {
			head->prev = newNode;
		}
		head = newNode;
	}

	Node* Find(T value)
	{
		if (head == NULL) {
			return NULL;
		}
		Node* currntnode = head;

		while (currntnode != NULL)
		{
			if (currntnode->value == value)
				return currntnode;

			currntnode = currntnode->next;
		}
		return NULL;


	}

	// Print the linked list
	void PrintList()

	{
		Node* Current = head;

		while (Current != NULL) {
			cout << Current->value << " ";
			Current = Current->next;
		}
		cout << "\n";
		delete Current;

	}

	void InsertAfter(Node*& CurrentNode, T value)
	{

		/*
			1-Create a new node with the desired value.
			2-Set the next pointer of the new node to the current head of the list.
			3-Set the previous pointer of the current head to the new node.
			4-Set the new node as the new head of the list.
		*/

		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = CurrentNode->next;
		newNode->prev = CurrentNode;
		CurrentNode->next = newNode;


	}

	void DeleteFirstNode()
	{
		if (head == NULL)
			return;

		Node* temp = head;
		head = temp->next;
		/*if (head != NULL) {
			head->prev = NULL;
		}*/
		delete temp;


	}

	void DeleteNode(Node*& NodeToDelete) {

		/*
			1-Set the next pointer of the previous node to the next pointer of the current node.
			2-Set the previous pointer of the next node to the previous pointer of the current node.
			3-Delete the current node.
		*/
		if (head == NULL || NodeToDelete == NULL) {
			return;
		}
		if (head == NodeToDelete) {
			head = NodeToDelete->next;
		}
		if (NodeToDelete->next != NULL) {
			NodeToDelete->next->prev = NodeToDelete->prev;
		}
		if (NodeToDelete->prev != NULL) {
			NodeToDelete->prev->next = NodeToDelete->next;
		}
		delete NodeToDelete;


	}
	void DeleteLastNode()
	{

		if (head == NULL) {
			return;
		}

		if (head->next == NULL) {
			delete head;
			head = NULL;
			return;
		}

		Node* currentNode = head;
		while (currentNode->next->next != NULL)
		{
			currentNode = currentNode->next;
		}

		Node* temp = currentNode->next;
		currentNode->next = NULL;
		delete temp;



	}


};
