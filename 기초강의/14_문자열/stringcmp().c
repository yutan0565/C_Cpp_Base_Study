#include <stdio.h>
#include <string.h>

int main(void){
	
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));
	// 사전 적으로 왼쪽게 앞이면은 -1,  같으면 0, 아니면 1 
	
	
	return 0;
}
