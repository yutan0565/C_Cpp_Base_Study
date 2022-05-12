#include <stdio.h>
#include <stdlib.h>

struct student{
	int number;
	char name[10];
	double grade;
};

int main(void){
	struct student s;
	
	printf("학번을 입력 하세요 : ");
	scanf("%d", &s.number);
	printf("이름을 입력 하세요 : ");
	scanf("%s", s.name);  // 배열은 그 자체로 포인트 의미를 가 짐  
	printf("학점을 입력 하세요 : ");
	scanf("%1f", &s.grade);
	
	printf("학번 : %d\n",s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade);
	
	return 0;
}
