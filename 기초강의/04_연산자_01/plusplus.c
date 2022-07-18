#include <stdio.h>

int main(void){
	int x = 0;
	printf("현재 x의 값은 %d 입니다. \n", x);
	x++;
	printf("현재 x의 값은 %d 입니다. \n", x);
	printf("현재 x의 값은 %d 입니다. \n", x++);
	printf("현재 x의 값은 %d 입니다.", ++x); // 증감 연산자 순서에 따라서 출력되는게 변함 
	return 0;
}
