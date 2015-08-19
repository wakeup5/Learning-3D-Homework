#include "stdafx.h"
#include "Queue.h"


Queue::Queue()
{
	_head = _rear = NULL;
}


Queue::~Queue()
{

}


void Queue::enqueue(int n)
{
	if (_head == NULL)
	{
		_head = new Node(n);
		_rear = _head;
	}
	else
	{
		_rear->next = new Node(n);
		_rear = _rear->next;
	}

}
int Queue::dequeue()
{
	Node* temp = _head->next;
	int result = 0;

	if (temp == NULL)
	{
		_head = _rear = NULL;
		return 0;
	}

	result = _head->v;

	delete _head;
	_head = temp;

	if (_head == NULL)
	{
		_rear = NULL;
	}
}

void Queue::print()
{
	Node* temp = _head;

	while (temp)
	{
		printf("%d\n", temp->v);
		temp = temp->next;
	}
}