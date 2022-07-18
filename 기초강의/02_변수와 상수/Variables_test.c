#include <stdio.h>

int main(void){
	int x = 50;
	float y = 12345689.123456789;
	double z = 12345689.123456789;
	
	printf("x = %d\n", x);
	printf("y = %.2f\n", y); // 숫자를 모두 표현하기는 어려움  
	printf("z = %.2f\n", z);
	return 0;
}
