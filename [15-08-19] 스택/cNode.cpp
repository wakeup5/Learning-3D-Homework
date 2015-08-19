#include "StdAfx.h"
#include "cNode.h"


cNode::cNode(void)
	: m_nValue(0)
	, m_pNext(NULL)
{
}

cNode::cNode( int n )
	: m_nValue(n)
	, m_pNext(NULL)
{
}


cNode::~cNode(void)
{
}

void cNode::Insert( int n )
{
	if (m_pNext)
	{
		m_pNext->Insert(n);
	}
	else
	{
		m_pNext = new cNode(n);
	}
}

void cNode::Print()
{
// 	if(m_nValue == -32)
// 	{
// 		int a = 0;
// 	}

	if(m_pNext == this)
	{
		return;
	}
	
	printf("%d\n", m_nValue);
	m_pNext->Print();
}

void cNode::Delete( int n, cNode** ppThis )
{
	if (m_nValue == n)
	{
		*ppThis = m_pNext;
		delete this;
	}
	else if(m_pNext)
	{
		m_pNext->Delete(n, &m_pNext);
	}
}

void cNode::Reverse(cNode* pPrev)
{
	if (m_pNext != this)
	{
		m_pNext->Reverse(this);
	}

	m_pNext = pPrev;
}

cNode* cNode::GetTail()
{
	if (m_pNext)
	{
		return m_pNext->GetTail();
	}
	return this;
}
