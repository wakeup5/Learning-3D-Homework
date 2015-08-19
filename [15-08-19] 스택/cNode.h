#pragma once
class cNode
{
public:
	cNode(void);

	cNode(int n);
	~cNode(void);
	
	//노드생성
	cNode*	m_pNext;	//노드의 다음 노드를 가리키는 포인터
	int		m_nValue;	//자료

	void Insert(int n);

	//더블포인터로 인자값 받음
	void Delete(int n, cNode** ppThis);
	void Print();
	void Reverse(cNode* pPrev);
	cNode* GetTail();

};

