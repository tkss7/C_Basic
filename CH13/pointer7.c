//pointer7.c
#include<stdio.h>
/*
	������ ������ ���� ���� ���̱� ��
	�迭������ ���� : �������迭�� ���
	(*p3)[2][3] : ���� ������� 2�� 5��¥�� �迭�� �����ּҰ� ���
*/

int main()
{
	int a, b[3], x1[3][5], x2[2][6], x3[2][5];
	int* p1; //������ ���� : ������ �����ּ� �̰ų� �Ǵ� 1���� �迭�� �����ּҰ� ���
	int (*p2)[5]; //2���� �迭������ ���� :2���� ������ �迭 �߿��� ���� ũ�Ⱑ 5���� �迭�� �����ּҰ� ���
	// �迭�����ʹ� ++�Ҷ����� �� �� ��ŭ �����Ѵ�.
	printf("%d, %d \n", sizeof(p1), sizeof(p2));

	p1 = &a;
	p1 = b;
	p1 = x1;
	p1 = x2;
	p1 = x3;

	p2 = &a;
	p2 = b;
	p2 = x1;
	p2 = x2;
	p2 = x3;

	printf("p2: %u \n", p2);
	p2++;
	printf("p2: %u \n", p2);
	p2++;
	printf("p2: %u \n", p2);

	return 0;
}