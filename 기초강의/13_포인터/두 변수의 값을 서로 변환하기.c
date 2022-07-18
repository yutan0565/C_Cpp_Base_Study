#include <stdio.h>

// *은 그 주소에 들어가 있는 값을 의미 함
//  & 그냥 주소 자체를 말 
void swap(int *x, int *y){
	int temp;
	temp = *x;  // 해당 주소에 있는 값을 불러와주기 
	*x = *y;
	*y = temp;
	
	/*
	temp에  x의 주소에 있는 값을 넣어줌
	x의 주소를 y의 주소로 바꿔줌 -- 값도 같이 바 
	y 주소에 있는 값을 temp로 바꿔줌 함 
	*/뀜 
	
} 

int main(void){
	int x = 1;
	int y = 2;
	swap(&x, &y); // 각각의 주소를 넣어주게 됨 
	printf("x = %d\ny = %d\n",x, y); 
	return 0;
}
