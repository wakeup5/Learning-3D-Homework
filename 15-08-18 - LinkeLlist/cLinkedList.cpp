#include "stdafx.h"
#include "cLinkedList.h"
#include "cNode.h"


cLinkedList::cLinkedList()
	:m_pHead(NULL)
{
	m_pHead = new cNode();
}


cLinkedList::~cLinkedList()
{
	cNode* temp = m_pHead;
	cNode* current = temp;

	while (temp != NULL)
	{
		current = temp;
		temp = temp->next();

		delete current;
	}
}

void cLinkedList::Insert(int n)
{
	cNode* current = new cNode(n);
	cNode* temp = NULL;
	
	temp = m_pHead;
	
	while (temp->hasNext())
	{
		temp = temp->next();
	}

	temp->m_pNext = current;
}
void cLinkedList::Delete(int n)
{
	cNode* temp = m_pHead;
	cNode* prev = NULL;

	if (!temp->hasNext()) return;

	do
	{
		prev = temp;
		temp = temp->next();

		if (temp->m_nValue == n)
		{
			prev->m_pNext = temp->m_pNext;

			delete temp;

			temp = prev;
		}

	} while (temp->hasNext());
}
void cLinkedList::Print()
{
	cNode* temp = m_pHead;

	while (temp->hasNext())
	{
		temp = temp->next();

		printf("%d\n", temp->m_nValue);
	}

}
void cLinkedList::Reverse()
{
	cNode* temp = m_pHead->next();
	cNode* nextTemp = NULL;
	cNode* prevTemp = NULL;

	if (temp == NULL) return;

	while (temp->hasNext())
	{
		nextTemp = temp->next();

		temp->m_pNext = prevTemp;
		prevTemp = temp;

		temp = nextTemp;
	}

	temp->m_pNext = prevTemp;
	m_pHead->m_pNext = temp;
}