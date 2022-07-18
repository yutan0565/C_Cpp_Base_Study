#include <stdio.h>  // 표준 입출력 lib이 자동으로 들어 감 


int main(void){

	char o;
	int x,y;
	while(1){
		printf("수식을 입력하세요 : ");
		scanf("%d %c %d", &x, &o, &y); 
		if( o == '+'){
			printf("%d %c %d = %d\n", x, o, y, x+y);
		}else if( o == '-'){
			printf("%d %c %d = %d\n", x, o, y, x-y);
		}else if( o == '*'){
			printf("%d %c %d = %d\n", x, o, y, x*y);
		}else if( o == '/'){
			printf("%d %c %d = %d\n", x, o, y, x/y);
		}else if( o == '%'){
			printf("%d %c %d = %d\n", x, o, y, x%y);
		}else{
			printf("입력이 잘못되었습니다.\n");
		}
		
		getchar(); // enter를 처리하기 위한 장치 
		printf("프로그램을 종료하시겠습니까? (y/n)\n"); // buffer = 엔터를 처리해줘야 함 
		scanf("%c", &o);
		if ( o == 'n' || o == 'N'){
			continue;
		}else if ( o == 'y' || o == 'Y'){
			break; 
		}else{
			printf("입력이 잘못되었습니다.\n");
		}
		
		
		
	} 
	
	return 0;
}
