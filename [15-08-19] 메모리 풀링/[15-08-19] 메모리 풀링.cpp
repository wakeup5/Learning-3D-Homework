// [15-08-19] �޸� Ǯ��.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "CMemoryPool.h"

class Test : public CMemoryPool < Test >
{
public:
	int a[1024];
	int b[1024];
};

class Test2
{
public:
	int a[1024];
	int b[1024];
};

int _tmain(int argc, _TCHAR* argv[])
{
	DWORD start;
	start = GetTickCount();

	for (int i = 0; i < 1000000; i++)
	{
		Test* test = new Test;
		delete test;
	}

	cout << "�޸� Ǯ ��� - " << GetTickCount() - start << endl;

	start = GetTickCount();

	for (int i = 0; i < 1000000; i++)
	{
		Test2* test = new Test2;
		delete test;
	}

	cout << "�޸� Ǯ �� ��� - " << GetTickCount() - start << endl;

	return 0;
}

