#pragma once
//#include "cLinkedList.h"

class cNode;
class Stack
{
private:
	cNode* _head;
	cNode* _tail;
	cNode* _top;

public:
	void push(int n);
	int pop();

	void reverse();
	void print();

	int top();

	Stack();
	~Stack();
};

