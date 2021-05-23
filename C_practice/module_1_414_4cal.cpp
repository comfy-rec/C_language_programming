#include <stdio.h>

int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main()
{
	int a;
	int b;

	scanf_s("%d %d", &a, &b);

	int result;

	result = sum(a, b);
	printf("result : %d\n", result);
	result = sub(a, b);
	printf("result : %d\n", result);
	result = mul(a, b);
	printf("result : %d\n", result);
	result = div(a, b);
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y)
{
	int temp;
	temp = x + y;
	return temp;
}
int sub(int x, int y)
{
	int temp;
	temp = x - y;
	return temp;
}
int mul(int x, int y)
{
	int temp;
	temp = x * y;
	return temp;
}
int div(int x, int y)
{
	if (y == 0)
		printf("0으로 나눌 수 없습니다.");
	int temp;
	temp = x / y;
	return temp;
}



