#include <stdio.h>

//전역 변수(프로그램 전체에서 접급이 가능한 변수)

int hour;
int minute;
int minuteAdd;

//반환 형태, 함수 이름, 매개 변수    void = 반환값이 없는 경우  
void counter(){
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;

} 

int main(void){
	printf("시를 입력하세요 : ");
	scanf("%d", &hour);
	printf("분을 입력하세요 : ");
	scanf("%d", &minute);
	printf("더할 분을 입력하세요 : ");
	scanf("%d", &minuteAdd);
	counter();
	printf("더해진 시간읜 %d시 %d분 입니다.\n", hour, minute);
	return 0;
}
