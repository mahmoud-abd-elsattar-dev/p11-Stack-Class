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
		T Value;
		Node* Next;
		Node* Prev;
	};

	Node* Head = NULL;

	void InsertAtBeginning(T Value)
	{
		Node* new_node = new Node();

		new_node->Value = Value;
		new_node->Next = Head;
		new_node->Prev = NULL;

		if (Head != NULL)
		{
			Head->Prev = new_node;
		}

		Head = new_node;
		_Size++;
	}

	Node* Find(T Value)
	{
		Node* Current = Head;

		while (Current != NULL)
		{
			if (Current->Value == Value)
			{
				return Current;
			}

			Current = Current->Next;
		}

		return NULL;
	}

	void InsertAfter(Node* Current, T Value)
	{
		Node* New_Node = new Node();
		New_Node->Value = Value;
		New_Node->Next = Current->Next;
		New_Node->Prev = Current;

		if (Current->Next != NULL)
		{
			Current->Next->Prev = New_Node;
		}

		Current->Next = New_Node;
		_Size++;
	}

	void InsertAtEnd(T Value)
	{
		Node* New_Node = new Node();

		New_Node->Value = Value;
		New_Node->Next = NULL;

		if (Head == NULL)
		{
			New_Node->Prev = NULL;
			Head = New_Node;
		}
		else
		{
			Node* Current = Head;

			while (Current->Next != NULL)
			{
				Current = Current->Next;
			}

			Current->Next = New_Node;
			New_Node->Prev = Current;
		}

		_Size++;
	}

	void DeleteNode(Node*& NodeToDelete)
	{
		if (Head == NULL || NodeToDelete == NULL) return;

		if (Head == NodeToDelete)
		{
			Head = NodeToDelete->Next;
		}

		if (NodeToDelete->Next != NULL)
		{
			NodeToDelete->Next->Prev = NodeToDelete->Prev;
		}

		if (NodeToDelete->Prev != NULL)
		{
			NodeToDelete->Prev->Next = NodeToDelete->Next;
		}

		delete NodeToDelete;
		_Size--;
	}

	void DeleteFirstNode()
	{
		if (Head == NULL) return;

		Node* Temp = Head;

		Head = Temp->Next;

		if (Head != NULL)
		{
			Head->Prev = NULL;
		}
		delete Temp;
		_Size--;
	}

	void DeleteLastNode()
	{
		if (Head == NULL) return;

		if (Head->Next == NULL)
		{
			delete Head;
			Head = NULL;
			return;
		}

		Node* Current = Head;

		while (Current->Next->Next != NULL)
		{
			Current = Current->Next;
		}

		Node* Temp = Current->Next;
		Current->Next = NULL;
		delete Temp;
		_Size--;
	}

	void PrintList()
	{
		Node* Current = Head;

		while (Current != NULL)
		{
			cout << Current->Value << " ";
			Current = Current->Next;
		}
		cout << endl;
	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return (_Size == 0);
	}

	void Clear()
	{
		while (_Size > 0)
		{
			DeleteFirstNode();
		}
	}

	void Reverse()
	{
		Node* Current = Head;
		Node* Temp = nullptr;

		while (Current != nullptr)
		{
			Temp = Current->Prev;
			Current->Prev = Current->Next;
			Current->Next = Temp;
			Current = Current->Prev;
		}

		if (Temp != nullptr)
		{
			Head = Temp->Prev;
		}

	}

	Node* GetNode(int Index)
	{
		if (Index > _Size - 1 || Index < 0)
			return NULL;

		int Count = 0;
		Node* Current = Head;

		while (Current != NULL && (Current->Next != NULL))
		{
			if (Count == Index) break;

			Current = Current->Next;
			Count++;
		}

		return Current;
	}

	T GetItem(int Index)
	{
		Node* ItemNode = GetNode(Index);

		if (ItemNode == NULL)
			return NULL;
		else
			return ItemNode->Value;
	}

	bool UpdateItem(int Index, T NewValue)
	{
		Node* ItemNode = GetNode(Index);
		
		if (ItemNode != NULL)
		{
			ItemNode->Value = NewValue;
			return true;
		}

		return false;
	}

	bool InsertAfter(int Index, T Value)
	{
		Node* ItemNode = GetNode(Index);

		if (ItemNode != NULL)
		{
			InsertAfter(ItemNode, Value);
			return true;
		}

		return false;
	}

};

