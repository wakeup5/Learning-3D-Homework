// [15-08-19] ���� ť.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Queue.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Queue queue(10);

	FILE* fp = NULL;//���ϱ���ü ������ ���� ����
	fopen_s(&fp, "data.txt", "r"); //fopen_s �Լ��� ���� ����//fopen_s(�ּҰ�,���ϰ��+�̸�,�������)
	
	//fp�� ���� �ƴϸ� ��� ���ƶ�.
	while (!feof(fp))
	{
		char szBuf[1024];
		fgets(szBuf, 1024, fp);	//fgets(�����  ���� ����� ��ġ,���� ������ �ִ��,FILE����ü�� ����Ű�� ������)

		if (strlen(szBuf) == 0)	//���� ���ϱ�.���̰� 0�̸� ��� ������
			continue;

		if (szBuf[0] == 'i')
		{
			char* pTemp = strstr(szBuf, ":");	//strstr : ���ڿ����� �˻� ���ڿ��� ù ��° �׸� ���� ������ ��ȯ
			pTemp++;							//�ּҰ� ����
			queue.enqueue(atoi(pTemp));				//atoi : ���ڿ����� ������ ��ȯ atoi(char *str) :atoi(��ȯ�� ���ڿ�)
		}
		else if (szBuf[0] == 'd')
		{
			queue.dequeue();
		}
		else if (szBuf[0] == 'p')
		{
			queue.print();
		}
	}

	fclose(fp);//���� ���� stream�� �ݴ´�.
	return 0;
}

