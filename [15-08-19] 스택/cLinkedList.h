#pragma once

//���漱��
class cNode;

class cLinkedList
{
private:
	cNode* m_pHead;	//���� ����� class �� ����� ���� '������','��������'���·θ� ��밡���ϴ�.
					//�����Ϸ��� �ش� class�� ���Ǹ� �𸣴� �����̱� ������ �ش� class �� �Ҵ� �ؾ��ϴ�
					//�޸��� ũ�⸦ �𸣱� �����̴�.

public:
	cLinkedList(void);
	~cLinkedList(void);

	void Insert(int n);
	void Delete(int n);
	void Print();
	void Reverse();
};

