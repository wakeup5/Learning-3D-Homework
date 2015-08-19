// console_001LinkedList.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "cLinkedList.h"

void Insert(cLinkedList &ll, int n);
void Delete(cLinkedList &ll, int n);
void Print(cLinkedList &ll);
void Reverse(cLinkedList &ll);

int _tmain(int argc, _TCHAR* argv[])
{
	cLinkedList ll;
	//���� �����.
	FILE *file;

	char strTemp[255];
	char *pStr, *value;


	if (fopen_s(&file, "data.txt", "r") != 0)
	{
		printf("���� ȣ�� ����\n");
		exit(0);
	}

	while (!feof(file))
	{
		pStr = fgets(strTemp, sizeof(strTemp), file);

		if (pStr == NULL) continue;

		value = strstr(strTemp, ":") + 2;

		switch (strTemp[0])
		{
		case 'i': case 'I':
			if (value[0] == '\n' || value[0] == ' ') continue; // or //if (strlen(value) < 2) continue;
			Insert(ll, atoi(value));
			break;
		case 'd': case 'D':
			if (value[0] == '\n' || value[0] == ' ') continue; // or //if (strlen(value) < 2) continue;
			Delete(ll, atoi(value));
			break;
		case 'r': case 'R':
			Reverse(ll);
			break;
		case 'p': case 'P':
			Print(ll);
			break;
		default:
			break;
		}
	}

	fclose(file);

	return 0;
}

void Insert(cLinkedList &ll, int n)
{
	ll.Insert(n);
}
void Delete(cLinkedList &ll, int n)
{
	ll.Delete(n);
}
void Print(cLinkedList &ll)
{
	ll.Print();
}
void Reverse(cLinkedList &ll)
{
	ll.Reverse();
}