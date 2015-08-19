#include "stdafx.h"
#include "Queue.h"


Queue::Queue(int size)
	: QUEUE_SIZE(size)
	, _head(0)
	, _rear(0)
{
	_queue = (int*)malloc(sizeof(int) * QUEUE_SIZE);
}

Queue::Queue()
	: QUEUE_SIZE(10)
	, _head(0)
	, _rear(0)
{
	_queue = (int*)malloc(sizeof(int) * QUEUE_SIZE);
}

Queue::~Queue()
{
	delete[] _queue;
}

void Queue::enqueue(int n)
{
	if (isFull()) return;

	_queue[_rear] = n;

	if (++_rear > QUEUE_SIZE - 1) _rear = 0;
}
int Queue::dequeue()
{
	int result = 0;

	if (isEmpty()) return 0;

	result = _queue[_head];

	if (++_head > QUEUE_SIZE - 1) _head = 0;
}

void Queue::print()
{
	int index = _head;
	while (index != _rear)
	{
		printf("%d\n", _queue[index]);
		if (++index > QUEUE_SIZE - 1) index = 0;
	}
}

void Queue::clear()
{
	_head = _rear = 0;
}

bool Queue::isEmpty()
{
	return _head == _rear;
}
bool Queue::isFull()
{
	return (_rear + 1) % QUEUE_SIZE == _head;
}