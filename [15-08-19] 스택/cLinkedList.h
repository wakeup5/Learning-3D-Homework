#pragma once

//전방선언
class cNode;

class cLinkedList
{
private:
	cNode* m_pHead;	//전방 선언된 class 를 사용할 때는 '포인터','참조변수'형태로만 사용가능하다.
					//컴파일러가 해당 class의 정의를 모르는 상태이기 때문에 해당 class 가 할당 해야하는
					//메모리의 크기를 모르기 때문이다.

public:
	cLinkedList(void);
	~cLinkedList(void);

	void Insert(int n);
	void Delete(int n);
	void Print();
	void Reverse();
};

