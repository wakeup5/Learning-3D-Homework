#include "stdafx.h"
#include "cNode.h"


cNode::cNode()
	: m_nValue(0)
	, m_pNext(NULL)
{

}

cNode::cNode(int n) 
	: m_nValue(n)
	, m_pNext(NULL)
{

}

cNode::~cNode()
{

}

bool cNode::hasNext()
{
	return m_pNext != NULL;
}

cNode* cNode::next()
{
	return m_pNext;
}