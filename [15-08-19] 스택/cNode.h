#pragma once
class cNode
{
public:
	cNode(void);

	cNode(int n);
	~cNode(void);
	
	//������
	cNode*	m_pNext;	//����� ���� ��带 ����Ű�� ������
	int		m_nValue;	//�ڷ�

	void Insert(int n);

	//���������ͷ� ���ڰ� ����
	void Delete(int n, cNode** ppThis);
	void Print();
	void Reverse(cNode* pPrev);
	cNode* GetTail();

};

