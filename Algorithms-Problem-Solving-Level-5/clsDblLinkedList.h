#pragma once
#include <iostream>

using namespace std;
template <class T>

class clsDblLinkedList
{
protected:
	int _Size = 0;
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
		_Size++;
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
		Node* GetNode(int Index)
		{

			int Counter = 0;

			if (Index > _Size - 1 || Index < 0)
				return NULL;

			Node* Current = head;
			while (Current != NULL && (Current->next != NULL)) {

				if (Counter == Index)
					break;

				Current = Current->next;
				Counter++;

			}

			return Current;
		}

		T GetItem(int Index)
		{

			Node* ItemNode = GetNode(Index);

			if (ItemNode == NULL)
				return NULL;
			else
				return ItemNode->value;

		}

		bool UpdateItem(int Index, T NewValue)
		{
			Node* ItemNode = GetNode(Index);

			if (ItemNode != NULL)
			{
				ItemNode->value = NewValue;
				return true;
			}
			else
				return false;

		}

		bool InsertAfter(int Index, T value)
		{
			Node* ItemNode = GetNode(Index);
			if (ItemNode != NULL)
			{
				InsertAfter(ItemNode, value);
				return true;
			}
			else
				return false;
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
		_Size++;


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
		_Size--;


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
		_Size--;


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
		_Size--;

	}

	int Size() 
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return _Size == 0;
	}

	void Clear()
	{
		while (_Size > 0)
		{
			DeleteFirstNode();
		}
	}

	void  Reverse()
	{
		Node* current = head;
		Node* temp = nullptr;
		while (current != nullptr) {
			temp = current->prev;
			current->prev = current->next;
			current->next = temp;
			current = current->prev;
		}

		if (temp != nullptr) {
			head = temp->prev;
		}
	}

};
