/*
	투포인터 알고리즘
	1. 현재 보고 있는 데이터와 다음 데이터가 같으면 진행 다르면, 다른 데이터로 포인터를 이동시킨다.
	2. 다음 위치에 같은 데이터가 없으면 left를 이동 시키고 right를 left+1로 다음위치로 이동시켜 검색한다,
	3. 같은 데이터가 있으면 해당 데이터를 카운트하고 없으면 1로 출력
	4. 같은 데이터가 있는 경우 가장 많이 저장된 숫자를 출력
*/
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int ret[11] = { 0, };
char str[9];

bool checkSequence(char* s, int strLen)
{
	int left, right;
	bool flag = false;

	for (left = 0; left < strLen - 1; left++)
	{
		for (right = left + 1; right < strLen; right++)
		{
			//같은 데이터가 없는 경우
			if (str[left] != str[right])
			{
				break;
			}
			flag = true;
		}
		//연속된 숫자가 있는 경우 문장내에 true를 통해 존재함을 확인
		if (flag == true)
			return true;
		//left는 right가 가르키는 곳을 가르킴
		left = right - 1;
	}

	return false;
}
void checkNum(int strLen)
{
	int left, right;
	

	for (left = 0; left < strLen - 1; left++)
	{
		for (right = left + 1; right < strLen; right++)
		{
			//같은 데이터가 없는 경우
			if (str[left] != str[right])
			{
				break;
			}
			ret[str[left] - '0']++;
		
		}
		
		//left는 right가 가르키는 곳을 가르킴
		left = right - 1;
	}

	
}
void cal(int* pRet)
{
	for (int i = 0; i < 10; i++)
	{
		if (*pRet < ret[i])
		{
			*pRet = ret[i];
		}
	}

}

int main()
{
	int cnt = 0;

	while (cnt++ < 3)
	{
		int maxRet = 0;
		int cur = 0, next = 0;
		int len = 0;

		memset(str, 0, sizeof(str));
		memset(ret, 0, sizeof(ret));

		scanf("%s", str);

		while (getchar() != '\n'); //버퍼 지움

		len = strlen(str);

		//입력한 문자중에같은 숫자가 연속해서 없는 경우
		if (checkSequence(str, len) == false)
		{
			printf("1\n");
			
		}
		else
		{
			checkNum(len);
			cal(&maxRet);
			printf("%d\n", maxRet+1);
		}
	}
	return 0;
}
