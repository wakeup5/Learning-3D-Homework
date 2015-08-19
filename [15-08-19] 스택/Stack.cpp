#include "stdafx.h"
#include "Stack.h"
#include "cNode.h"

Stack::Stack()
{
	_head = new cNode;
	_tail = new cNode;
	_top = NULL;

	_head->m_pNext = _tail->m_pNext = _tail;
}


Stack::~Stack()
{

}

void Stack::push(int n)
{
	cNode* newNode = new cNode(n);
	cNode* next = _head->m_pNext;

	_head->m_pNext = newNode;
	newNode->m_pNext = next;

	_top = newNode;
}
int Stack::pop()
{
	cNode* popNode = _head->m_pNext;
	int result = 0;

	if (popNode == _tail) return 0;

	result = popNode->m_nValue;

	_head->m_pNext = popNode->m_pNext;

	delete popNode;

	_top = _head->m_pNext;

	if (_top == _tail)
	{
		_top = NULL;
	}
}

void Stack::reverse()
{
	//_head->m_pNext->Reverse(NULL);
	
	//_tail = _head;
}

void Stack::print()
{
	_head->m_pNext->Print();
}

int Stack::top()
{
	return _top->m_nValue;
}