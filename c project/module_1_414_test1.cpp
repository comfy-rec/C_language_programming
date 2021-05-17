#include <stdio.h>
#include <string.h>

int main()
{
	//askii test
	char ch = 65;
	char ch2 = 'A';

	printf("%d %c\n", ch, ch);
	printf("%d %c\n", ch2, ch2);

	//askii test name to number
	char n1 = 'T';
	char n2 = 'a';
	char n3 = 'e';
	char n4 = 'h';
	char n5 = 'y';
	char n6 = 'e';
	char n7 = 'o';
	char n8 = 'n';
	char n9 = ' ';
	char n10 = 'K';
	char n11 = 'i';
	char n12 = 'm';

	printf("%d %d %d %d %d %d %d %d %d %d %d %d \n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12);

	//askii test number to name
	char nn1 = 84;
	char nn2 = 97;
	char nn3 = 101;
	char nn4 = 104;
	char nn5 = 121;
	char nn6 = 101;
	char nn7 = 111;
	char nn8 = 110;
	char nn9 = 32;
	char nn10 = 75;
	char nn11 = 105;
	char nn12 = 109;

	printf("%c%c%c%c%c%c%c%c%c%c%c%c \n", nn1, nn2, nn3, nn4, nn5, nn6, nn7, nn8, nn9, nn10, nn11, nn12);

	//signed test debug memory
	char p = 15;
	char m = -15;

	//floating test debug memory
	int num = 3;
	float num2 = 3;
	float num3 = 3.5;
	float num4 = 3.14;

	//unsigned variable max value signed test
	unsigned int ab;
	ab = 4294967295;
	printf("%d\n", ab);
	ab = -1;
	printf("%u\n", ab);

	//string array test
	char fruit[20] = "strawberry";

	printf("딸기 : %s\n", fruit);
	printf("딸기쨈 : %s %s\n", fruit, "jam");

	//string copy
	//char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy_s(fruit, "banana");
	printf("%s\n", fruit);

	//예약어 식별자 keyword identifier
	int value = 10;
	
	//증감연산자 전위 후위 표기 증감연산자
	int c = 5, d = 5;
	int pre, post;

	pre = (++c) * 3;
	post = (d++) * 3;

	printf("초깃값 c = %d, d = %d\n", c, d);
	printf("전위형: (++c) * 3 = %d, 후위형:	(d++) * 3 = %d\n", pre, post);

	//논리연산자
	int y = 30;
	int res;

	res = (y > 10) && (y < 20);
	printf("(y > 10) && (y < 20) : %d\n", res);
	res = (y < 10) || (y > 20);
	printf("(y < 10) || (y > 20) : %d\n", res);
	res = !(y >= 30);
	printf("! (y >= 30) : %d\n", res);

	//형 변환 연산자
	int x = 20, z = 3;
	double resu;

	resu = ((double)x) / ((double)z);
	printf("x = %d, z = %d\n", x, z);
	printf("x / z의 결과 : %.1lf\n", resu);

	x = (int)resu;
	printf("(int) %.1lf의 결과 : %d\n", resu, x);

	return 0;
}