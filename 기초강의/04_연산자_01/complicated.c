#include <stdio.h>

int main(void){
	int x = 100;
	printf("현재 x의 값은 %d 입니다. \n", x);
	
	x += 50;
	printf("현재 x의 값은 %d 입니다. \n", x);

	x /= 50;
	printf("현재 x의 값은 %d 입니다. \n", x);	
	
	x *= 10;
	printf("현재 x의 값은 %d 입니다. \n", x);	
		
	x %= 4;
	printf("현재 x의 값은 %d 입니다. \n", x);	
	
	return 0;
} 
