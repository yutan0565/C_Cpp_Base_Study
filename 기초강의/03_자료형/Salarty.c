#include <stdio.h>
#define MONTHS 12 //이미지 정해진 상수를 불러오기 

int main(void){
	double monthSalary = 1000.5 ;
	printf("$ %.2f", monthSalary * MONTHS); 
	return 0;
}
