/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	int val1 = 10;
	int val2 = 20;
	int val3 = 30;
	int val4 = 40;
	int val5 = 50;

	int Val[5];
	int* p_Val;
	p_Val = &Val[0];

	for (int i = 0; i < 5; i++)
	{
		Val[i] = i + 10;
		printf("%d\n", Val[i]);
	}

	return 0;
}
*/

/*
#include <stdio.h>

double avg(int sc[], int cnt);

int main(void)
{
	int score[5];
	int i;
	double result;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++)
	{
		scanf_s("%d", &score[i]);
	}

	result = avg(score, count);

	printf("��� : %.1lf\n", result);

	return 0;
}

double avg(int sc[], int cnt)
{
	int i;
	int total = 0;
	double con;

	for (i = 0; i < cnt; i++)
	{
		total += sc[i];
	}
	con = total / cnt;

	return con;
}
*/

/*
#include <stdio.h>

int main(void)
{
	char str[80] = "applejam";

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, sizeof(str));
	printf("�Է� �� ���ڿ� : %s\n", str);

	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;
	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);

	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));

	printf("char * �������� ũ�� : %d\n", sizeof(pc));
	printf("int * �������� ũ�� : %d\n", sizeof(pi));
	printf("double * �������� ũ�� : %d\n", sizeof(pd));

	printf("char * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
	printf("int * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
	printf("double * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));

	return 0;
}
*/

/*
#include <stdio.h>

void swap(int *pa, int *pb);

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int *pa, int *pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

}
*/