#include <stdio.h>

int main(void){
	
	int x = 50 , y = 30;
	
	printf("x가 y와 같은가 ?   %d \n", x == y);
	printf("x가 y와 다른가 ?   %d \n", x != y);
	
	printf("x가 y보다 큰가 ?   %d \n", x > y);
	printf("x가 y보다 작은가 ?   %d \n", x < y);
	
	printf("x에 y값을 넣은면 ? %d \n", x = y);  // x에  y( 30 ) 값이 들어, 결국 출력 되는 x 라, 수식 해결하고 출력  
	
	
	return 0;
}
