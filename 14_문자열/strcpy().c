#include <stdio.h>
#include <string.h>

int main(void){
	
	char input[10] = "ABCE";
	char result[5] = "Love";
	
	strcpy(result, input); // 오른쪽에 있는 값을, 왼쪽에 복사 해줌 
	printf("문자열 복사 : %s \n",result); 
	
	return 0;
}
