#include <stdio.h>

int main(void){
	
	int x = -50, y = 30;
	int absoluteX = (x > 0) ? x : -x ;   // 참이면 왼쪽, 거짓이면 오른쪽이 변환되는 방식  -> 절대값 만들어줌  
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;
	
	printf("x의 절댓값은 %d 입니다.\n", absoluteX);
	printf("x와 y 중에서 최댓값은 %d 입니다.\n", max);
	printf("x와 y 중에서 최솟값은 %d 입니다.\n", min);	
	
	return 0;
} 
