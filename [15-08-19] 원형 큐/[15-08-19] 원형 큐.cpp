// [15-08-19] 원형 큐.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Queue.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Queue queue(10);

	FILE* fp = NULL;//파일구조체 포인터 변수 선언
	fopen_s(&fp, "data.txt", "r"); //fopen_s 함수로 파일 열기//fopen_s(주소값,파일경로+이름,모드인자)
	
	//fp가 끝이 아니면 계속 돌아라.
	while (!feof(fp))
	{
		char szBuf[1024];
		fgets(szBuf, 1024, fp);	//fgets(출력을  위한 저장소 위치,읽을 문자의 최대수,FILE구조체를 가리키는 포인터)

		if (strlen(szBuf) == 0)	//길이 구하기.길이가 0이면 계속 돌려라
			continue;

		if (szBuf[0] == 'i')
		{
			char* pTemp = strstr(szBuf, ":");	//strstr : 문자열에서 검색 문자열의 첫 번째 항목에 대한 포인터 반환
			pTemp++;							//주소값 증가
			queue.enqueue(atoi(pTemp));				//atoi : 문자열에서 정수로 변환 atoi(char *str) :atoi(변환할 문자열)
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

	fclose(fp);//열린 파일 stream을 닫는다.
	return 0;
}

