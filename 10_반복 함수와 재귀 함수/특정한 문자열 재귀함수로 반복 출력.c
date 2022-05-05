#include <stdio.h>

void print(int count){
	if(count == 0){
		return;
	}else{
		printf("문자열을 출력합니다.\n");
		print(count -1); 
	}
} 

int main(void){
	int a;
	
	printf("문자열을 몇개  출력 할까요?");
	scanf("%d", &a);
	print(a);
	return 0;
}
