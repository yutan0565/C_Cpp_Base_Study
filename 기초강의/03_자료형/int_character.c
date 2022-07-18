#include <stdio.h>

int main(void){
	char x = 'A'; // 내부적으로는 숫자로 운여된다 ( 아스키 코드 )  
	char y = 65 ;
	int z = 65;
	printf("%c \n", x);  // printf 를 뭘로 해주는가에 따라, 출력되는 값이 달라진다는거 알아두기 ! 
	printf("%d \n", x);
	printf("%c \n", y);
	printf("%c", z);
	return 0;
}
