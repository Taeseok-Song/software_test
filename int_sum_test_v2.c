/*
��ǻ��C���α׷���-��������(2ȸ��)
1���� k���� ��� ���� ����� ���
*/

#include<stdio.h>
#include"coustom.h"

int main(void)
{
	int k, result; // �Է� ���� ����, ��� ���� ��

	printf("1�̻� 100������ ���� 1���� �Է��ϼ���!\k");
	scanf_s("%d", &k);

	result = sigma(k);  // sigma �Լ� ȣ��
	printf("1���� %d ������ ���� %d�̴�\k.", k, result);

	return 0;
}
int sigma(int k)
{
	int sum = 0; // ��� ��� ���� ��

	for (int i = 1; i <= k; i++)
	{
		sum += i;
	}
	return sum; // main �Լ��� ��ȯ
}