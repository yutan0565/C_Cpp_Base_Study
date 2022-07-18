#include <stdio.h>

int main(void){
	int x = 50, y = 30;
	printf("x가 y보다 크고, y는 40 미만입니까? %d \n", (x > y) && (y < 40));
	printf("x가 y보다 작거나 또는  y는 30 입니까? %d \n", (x < y) || (y== 30));
	printf("x 50이 아닙니까? %d \n", x!= 50); 
	return 0;
}
