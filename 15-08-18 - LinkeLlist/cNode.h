#pragma once
class cNode
{
public:
	cNode(void);

	cNode(int n);
	~cNode();

	//노드생성
	cNode* m_pNext;	//노드의 다음 노드를 가리키는 포인터
	int m_nValue;	//자료

	bool hasNext();
	cNode* next();
};

