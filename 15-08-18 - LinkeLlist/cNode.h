#pragma once
class cNode
{
public:
	cNode(void);

	cNode(int n);
	~cNode();

	//������
	cNode* m_pNext;	//����� ���� ��带 ����Ű�� ������
	int m_nValue;	//�ڷ�

	bool hasNext();
	cNode* next();
};

