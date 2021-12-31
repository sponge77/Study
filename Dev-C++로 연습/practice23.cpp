/*
	�������� �˰���
	1. ���� ���� �ִ� �����Ϳ� ���� �����Ͱ� ������ ���� �ٸ���, �ٸ� �����ͷ� �����͸� �̵���Ų��.
	2. ���� ��ġ�� ���� �����Ͱ� ������ left�� �̵� ��Ű�� right�� left+1�� ������ġ�� �̵����� �˻��Ѵ�,
	3. ���� �����Ͱ� ������ �ش� �����͸� ī��Ʈ�ϰ� ������ 1�� ���
	4. ���� �����Ͱ� �ִ� ��� ���� ���� ����� ���ڸ� ���
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
			//���� �����Ͱ� ���� ���
			if (str[left] != str[right])
			{
				break;
			}
			flag = true;
		}
		//���ӵ� ���ڰ� �ִ� ��� ���峻�� true�� ���� �������� Ȯ��
		if (flag == true)
			return true;
		//left�� right�� ����Ű�� ���� ����Ŵ
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
			//���� �����Ͱ� ���� ���
			if (str[left] != str[right])
			{
				break;
			}
			ret[str[left] - '0']++;
		
		}
		
		//left�� right�� ����Ű�� ���� ����Ŵ
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

		while (getchar() != '\n'); //���� ����

		len = strlen(str);

		//�Է��� �����߿����� ���ڰ� �����ؼ� ���� ���
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
