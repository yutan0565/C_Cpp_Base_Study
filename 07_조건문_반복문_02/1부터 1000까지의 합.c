#include <stdio.h>

int main(void){
	
	int i = 1, sum = 0;
	
	while(i <= 1000){ // 안에가 true 일떄 실행 함 
		sum = sum + i;
		i++;
	} 
	printf("1부터 1000까지의 합은 %d입니다.", sum);
	
	return 0;
} 
