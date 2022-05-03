#include <stdio.h>
#include <limits.h>  // INT_MAX 와 같은 범위들을 포함한 library 

int main(void){
	int x = INT_MAX;
	int y = INT_MIN;
	printf("int형의 최댓값 x는 %d 입니다.\n", x);
	printf("int형의 최솟값 Y는 %d 입니다.", y);
	return 0;
} 
