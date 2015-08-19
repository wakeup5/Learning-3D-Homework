#pragma once
typedef struct tagNode
{
	int v;
	tagNode* next;

	tagNode(int n)
	{
		v = n;
		next = NULL;
	}
} Node;

class Queue
{
private:
	Node* _head;
	Node* _tail;

	Node* _rear;
public:
	Queue();
	~Queue();

	void enqueue(int n);
	int dequeue();

	void print();
};

