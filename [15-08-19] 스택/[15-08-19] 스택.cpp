// [15-08-19] 스택.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Stack.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Stack stack;

	FILE* fp = NULL;//파일구조체 포인터 변수 선언
	fopen_s(&fp, "data.txt", "r"); //fopen_s 함수로 파일 열기//fopen_s(주소값,파일경로+이름,모드인자)
	//모드
	//	"r"
	//	읽기 위해 엽니다.파일이 없거나 찾을 수 없는 경우 fopen_s 호출이 실패합니다.
	//	"w"
	//	쓰기 위해 빈 파일을 엽니다.파일이 있으면 이 파일의 내용은 삭제됩니다.
	//	"a"
	//	파일에 새 데이터를 쓰기 전에 EOF 마커를 제거 하지 않고(추가) 파일의 끝에 쓰기 위해 엽니다.파일이 없는 경우 파일을 만듭니다.
	//	"r+"
	//	읽고 쓰기 위해 엽니다. (파일이 존재 해야 합니다.)
	//	"w+"
	//	읽고 쓰기 위해 빈 파일을 엽니다.파일이 있으면 이 파일의 내용은 삭제됩니다.
	//	"a+"
	//	읽고 추가하기 위해 엽니다.파일에 새로운 데이터가 쓰여지고 작성이 완료된 후 EOF 마커가 복원 되기 전에, 추가 작업은 EOF 마커 제거를 포함합니다.파일이 없는 경우 파일을 만듭니다.

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
			stack.push(atoi(pTemp));				//atoi : 문자열에서 정수로 변환 atoi(char *str) :atoi(변환할 문자열)
		}
		else if (szBuf[0] == 'd')
		{
			stack.pop();
		}
		else if (szBuf[0] == 'r')
		{
			stack.reverse();
		}
		else if (szBuf[0] == 'p')
		{
			stack.print();
		}
	}

	fclose(fp);//열린 파일 stream을 닫는다.

	return 0;
}

