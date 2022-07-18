#include <stdio.h>

int main(void){
	
	char input[1001];
	gets(input); // input 배열 안에, 엔터 칠때 까지 모든 문자가 들어감
	int count = 0;
	 // '\n이거는 null하고 똑같은 의미임,  글자가 안들어간 부분은 모두 null 상태임 
	while(input[count] != '\0'){    
		count++;
	}
	
	printf("입력한 문자열의 길이는 %d입니다.\n",count);
	printf("입력한 문자열 : %s",input);
	return 0;
}
