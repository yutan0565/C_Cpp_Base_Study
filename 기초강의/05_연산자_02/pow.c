#include <stdio.h>
#include <math.h> // pow(), abs() 등 

int main(void){
	double x = pow(2.0, 20.0);
	printf("2의 20제곱은 %.0f입니다.\n", x);   // double 형태인데, 0번째 까지만 표기해서 정수처럼 표현 
	return 0;
}
