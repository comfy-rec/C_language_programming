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

	printf("평균 : %.1lf\n", result);

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

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));
	printf("입력 후 문자열 : %s\n", str);

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

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

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

	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));

	printf("char * 포인터의 크기 : %d\n", sizeof(pc));
	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
	printf("double * 포인터의 크기 : %d\n", sizeof(pd));

	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
	printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));

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