#include <stdio.h>

int main(void){
	int score[5][2];
	int total[2] = {0, } ;  // 1차원 배열의 모든 값들을 다 0으로 만들어 주 기
	int i;
	
	
	for(i = 0; i < 5 ; i++){
		printf("d번 학생의 수학, 영어 점수 : ", i+1);
		scanf("%d %d", &score[i][0], &score[i][1]);
	} 
	
	for(i = 0 ; i < 5 ; i++){
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	
	printf("\n\n5명의 수학 점수 합계  %d\n", total[0]);
	printf("5명의 영어  점수 합계  %d\n", total[1]);	
	return 0;
}
