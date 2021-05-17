#include <stdio.h>



typedef struct student
{
	char name[20];
	int age;
}Student;


int main(void) 
{
	//FILE* fp = NULL;
	//if (0 == fopen_s(&fp, "C:\\Users\\KBCI\\Desktop\\ssif\\Seoul_list.csv", "r"))
	// 
	//	fclose(fp);

	char str[20] = "a,bcd,efgh,ij,klmop.";
	char* ptr = strtok(str, ",");

	Student st;

	strcpy(st.co, ptr);
	printf("%s\n", st.co);
	ptr = strtok(NULL, ",");


	return 0;
}