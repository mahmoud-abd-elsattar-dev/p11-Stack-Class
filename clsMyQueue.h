#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

template <class T>
class clsMyQueue
{
protected:

	clsDblLinkedList<T> _MyList;

public:

	void Push(T Item)
	{
		_MyList.InsertAtEnd(Item);
	}

	void Pop()
	{
		_MyList.DeleteFirstNode();
	}

	int Size()
	{
		return _MyList.Size();
	}

	T Front()
	{
		return _MyList.GetItem(0);
	}

	T Back()
	{
		return _MyList.GetItem(Size() - 1);
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	void Clear()
	{
		_MyList.Clear();
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	void UpdateItem(int Item, T NewValue)
	{
		_MyList.UpdateItem(Item, NewValue);
	}

	void InsertAfter(int Item, T Value)
	{
		_MyList.InsertAfter(Item, Value);
	}

	void InsertAtFront(T Value)
	{
		_MyList.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value)
	{
		_MyList.InsertAtEnd(Value);
	}

	void Print()
	{
		_MyList.PrintList();
	}

	T GetItem(int Item)
	{
		return _MyList.GetItem(Item);
	}











};

