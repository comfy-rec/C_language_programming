/*
#include <stdio.h>

int main(void)
{
	int ary[5] = {10, 20, 30, 40, 50};
	int* pa = ary;
	int* pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);

	pa++;
	printf("pb - pa : %u\n", pb - pa);

	printf("�տ� �ִ� �迭 ����� �� ��� : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;
}
*/

/*
#include <stdio.h>

void print_ary(int *pa, int size);

int main(void)
{
	int ary1[5] = {10, 20, 30, 40, 50};
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary(ary1, 5);
	printf("\n");
	print_ary(ary2, 7);

	return 0;
}

void print_ary(int* pa, int size)
{
	int i;

	for(i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}
*/

/*
#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("�迭�� �ִ� : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size)
{
	int i;

	printf("%d���� �Ǽ��� �Է� : ", size);
	for (i = 0; i < size; i++)
	{
		scanf_s("%lf", pa + i);
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i];
	}

	return max;
}
*/

/*
#include <stdio.h>

void assign10(void);
void assign20(void);

int a;

int main(void)
{
	printf("�Լ� ȣ�� �� a �� : %d\n", a);

	assign10();
	assign20();

	printf("�Լ� ȣ�� �� a �� : %d\n", a);

	return 0;
}

void assign10(void)
{
	a = 10;
}

void assign20(void)
{
	int a;
	a = 20;
}
*/

/*
#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(void)
{
	int i;

	printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("���� ���� ����(static)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}
	return 0;
}

void auto_func(void)
{
	int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a;

	a++;
	printf("%d\n", a);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int size = 5;
	int count = 0;
	int num;
	int i;

	pi = (int *)calloc(size, sizeof(int));
	while (1)
	{
		printf("����� �Է��ϼ��� => ");
		scanf_s("%d", &num);
		if (num <= 0) break;
		if (count == size)
		{
			size += 5;
			pi = (int *)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);

	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;
};

int main(void)
{
	struct profile yuni;
	strcpy_s(yuni.name, 20, "������");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char *)malloc(80);
	printf("�ڱ�Ұ� : ");
	gets_s(yuni.intro, 80);

	printf("�̸� : %s\n", yuni.name);
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.1lf\n", yuni.height);
	printf("�ڱ�Ұ� : %s\n", yuni.intro);
	free(yuni.intro);

	return 0;
}
*/

/*
#include <stdio.h>

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;
	int id;
	double grade;
};

int main(void)
{
	struct student yuni;

	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("���� : %d\n", yuni.pf.age);
	printf("Ű : %.1lf\n", yuni.pf.height);
	printf("�й� : %d\n", yuni.id);
	printf("���� : %.1lf\n", yuni.grade);

	return 0;
}
*/

/*
#include <stdio.h>

struct student
{
	int id;
	char name[20];
	double grade;
	int number;
};

int main(void)
{
	struct student s1 = { 315, "ȫ�浿", 2.4, 2 },
				   s2 = { 316, "�̼���", 3.7, 1 },
				   s3 = { 317, "�������", 4.4, 3 };

	struct student max;

	max = s1;
	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("�й� : %d\n", max.id);
	printf("�̸� : %s\n", max.name);
	printf("���� : %.1lf\n", max.grade);
	printf("���� : %d\n", max.number);

	struct student min;

	min = s1;
	if (s2.number < min.number) min = s2;
	if (s3.number < min.number) min = s3;

	printf("�й� : %d\n", min.id);
	printf("�̸� : %s\n", min.name);
	printf("���� : %.1lf\n", min.grade);
	printf("���� : %d\n", min.number);

	return 0;
}
*/

/*
#include <stdio.h>

struct vision
{
	double left;
	double right;
};

sturct vision exchange(struct vision robot);

int main(void)
{
	struct vision robot;
	printf();
	scanf();
	robot = exchange();
	printf();

	return 0;
}
*/