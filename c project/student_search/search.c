#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "student.h"

#define LINE_PRN printf("------------------------------------------------------\n")

//함수 정의
void screen() {
	LINE_PRN;
	printf("%d. 기업으로 검색\n", 1);
	printf("%d. 이름으로 검색\n", 2);
	printf("%d. 성별로 검색\n", 3);
	printf("%d. 연락처로 검색\n", 4);
	printf("%d. 이메일로 검색\n", 5);
	printf("%d. 생년월일로 검색\n", 6);
	printf("%d. 전공으로 검색\n", 7);
	printf("%d. 종료\n",8);
	LINE_PRN;
}

void coscf(Student s[], int size) {
	//Student *p = s;
	char tmp[20];
	printf("기업을 입력하세요 : ");
	scanf("%s", tmp);
	for (int i =0; i<size; i++) {
		if (strcmp(s[i].co, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
	/*for (p = s; p != NULL; p++) {
		if (strcmp(p->co, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", p->co, p->name, p->gen, p->pnum, p->em, p->bd, p->maj);
		}
	}*/
}

void namescf(Student s[], int size) {
	char tmp[20];
	printf("이름을 입력하세요 : ");
	scanf("%s", tmp);
	for (int i = 0; i < size; i++) {
		if (strcmp(s[i].name, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
}

void genscf(Student s[], int size) {
	char tmp[20];
	printf("성별을 입력하세요 : ");
	scanf("%s", tmp);
	for (int i = 0; i < size; i++) {
		if (strcmp(s[i].gen, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
}

void pnumscf(Student s[], int size) {
	char tmp[20];
	printf("연락처를 입력하세요 : ");
	scanf("%s", tmp);
	for (int i = 0; i < size; i++) {
		if (strcmp(s[i].pnum, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
}

void emscf(Student s[], int size) {
	char tmp[80];
	printf("이메일을 입력하세요 : ");
	scanf("%s", tmp);
	for (int i = 0; i < size; i++) {
		if (strcmp(s[i].em, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
}

void bdscf(Student s[], int size) {
	int tmp;
	printf("생년월일을 입력하세요 : ");
	scanf("%d", &tmp);
	for (int i = 0; i < size; i++) {
		if (s[i].bd == tmp) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
}

void majscf(Student s[], int size) {
	char tmp[80];
	printf("전공을 입력하세요 : ");
	scanf("%s", tmp);
	for (int i = 0; i < size; i++) {
		if (strcmp(s[i].maj, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
}

