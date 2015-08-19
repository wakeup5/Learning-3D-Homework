#pragma once

class Queue
{
private:
	const unsigned int QUEUE_SIZE;

	unsigned int _head;
	unsigned int _rear;

	int* _queue;
public:
	Queue();
	Queue(int size);
	~Queue();

	void enqueue(int n);
	int dequeue();

	void print();

	void clear();

private:
	bool isEmpty();
	bool isFull();
};

