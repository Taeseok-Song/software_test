/*
��ǻ��C���α׷���-��������(2ȸ��)
1���� n���� ��� ���� ����� ���
*/

#include<stdio.h>
#include"coustom.h"

int main(void)
{
	int n, result; // �Է� ���� ����, ��� ���� ��

	printf("1�̻� 100������ ���� 1���� �Է��ϼ���!\n");
	scanf_s("%d", &n);

	result = sigma(n);  // sigma �Լ� ȣ��
	printf("1���� %d ������ ���� %d�̴�\n.", n, result);

	return 0;
}
int sigma(int n)
{
	int sum = 0; // ��� ��� ���� ��

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum; // main �Լ��� ��ȯ
}