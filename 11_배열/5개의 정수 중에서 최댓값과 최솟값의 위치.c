#include <stdio.h>
#include <limits.h>
#define NUMBER 5 

// 배열에는 순서를 나타내주는 index 값이 존재함.  



int main(void){
	int i, max = INT_MIN, min=INT_MAX, index = 0;
	int array[NUMBER];  // 배열을 선언 해주기 
	// array[0]부터 array[4] 까지 총 5개의 데이터가 들어감
	for(i =0; i < NUMBER ; i++){
		scanf("%d", &array[i]);
		if(max < array[i]){
			max = array[i];
			index = i;
		}
	} 
	
	printf("가장 큰 값은 %d 입니다. 그리고 %d번재에 있습니다.\n", max, index+1);
	
	for(i =0; i < NUMBER ; i++){
		scanf("%d", &array[i]);
		if(min > array[i]){
			min = array[i];
			index = i;
		}
	} 
	
	printf("가장작은  값은 %d 입니다. 그리고 %d번재에 있습니다.\n", min, index+1);
	return 0;
} 
