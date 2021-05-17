/*paraless function
#include <stdio.h>

void print_line(void);

int main(void)
{
	print_line();
	printf("학번 이름 전공 학점\n");
	print_line();
		
	return 0;
}

void print_line(void)
{
	int i;
	
	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}
*/

/*recul func
#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if (count==3) return;
	fruit(count+1);
	printf("jam\n");
}
*/

/*
#include <stdio.h>

void recur(int i);

int main()
{
	recur(3);
	return 0;
}

void recur(int i)
{
	if (i <= 0)
	{
		return;
	}
	printf("recur call %d\n", i);
	recur(i - 1);
}
*/