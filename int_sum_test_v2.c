/*
컴퓨터C프로그래밍-최종과제(2회차)
1부터 k까지 모두 더한 결과를 출력
*/

#include<stdio.h>
#include"coustom.h"

int main(void)
{
	int k, result; // 입력 정수 변수, 결과 변수 명

	printf("1이상 100이하의 정수 1개를 입력하세요!\k");
	scanf_s("%d", &k);

	result = sigma(k);  // sigma 함수 호출
	printf("1부터 %d 까지의 합은 %d이다\k.", k, result);

	return 0;
}
int sigma(int k)
{
	int sum = 0; // 계산 결과 변수 명

	for (int i = 1; i <= k; i++)
	{
		sum += i;
	}
	return sum; // main 함수로 반환
}