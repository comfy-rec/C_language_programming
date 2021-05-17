#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "student.h"


int main(void)
{
	//학생들 배열 선언
	Student st[25];
	//검색번호 선택하기 변수 선언
	int option;
	//파일 포인터 선언
	FILE* fp;

	//파일 불러오기
	//fp = fopen("C:\\Users\\KBCI\\Desktop\\ssif\\stifdt.txt", "r");
	//csv 파일 불러오기
	fp = fopen("C:\\Users\\KBCI\\Desktop\\ssif\\Seoul_list.csv", "r");
	
	//파일 안 열림
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}

	//학생별로 정보 입력하기
	//for (int i = 0; i < 25; i++)
	//	fscanf(fp, "%s %s %s %s %s %d %s", &st[i].co, &st[i].name, &st[i].gen, &st[i].pnum, &st[i].em, &st[i].bd, &st[i].maj);

	//1줄씩 받기
	char *str;
	
	while (1)
	{
		str = fgets(str, sizeof(str), fp);

		if (str == NULL)
			break;
	}
		
	//,마다 짤라서 받기
	char* ptr = strtok(str, ",");

	strcpy(Student.co, ptr);
	printf("%s\n", Student.co);
	ptr = strtok(NULL, ",");




	//파일 닫기
	fclose(fp);

	//검색 모드 결정하기
	while (1) {

		screen();

		scanf_s("%d", &option);

		switch (option) {

		case 1:

			coscf(st, sizeof(st) / sizeof(Student));

			break;

		case 2:

			namescf(st, sizeof(st) / sizeof(Student));

			break;

		case 3:

			genscf(st, sizeof(st) / sizeof(Student));

			break;

		case 4:

			pnumscf(st, sizeof(st) / sizeof(Student));

			break;

		case 5:

			emscf(st, sizeof(st) / sizeof(Student));

			break;

		case 6:

			bdscf(st, sizeof(st) / sizeof(Student));

			break;

		case 7:

			majscf(st, sizeof(st) / sizeof(Student));

			break;
		default:

			break;

		}

		if (option == 8) {

			break;

		}

	}
	return 0;
}