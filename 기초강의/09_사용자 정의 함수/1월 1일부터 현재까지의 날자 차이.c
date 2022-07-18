#include <stdio.h>

int getDays(int month, int day){
	int i,sum = 0 ;
	for(i =1; i < month; i++){
		if(i==2){
			sum += 28;
		}else if(i %2 == 0){
			sum += 30;
		}else{
			sum += 31;
		}
	}
	return sum + day;
} 


int main(void){
	int month, day;
	scanf("%d %d", &month, &day);
	printf("1월 1일 부터 해당 날짜까지의 거리는 %d 입니다.", getDays(month, day));
	return 0;
}
