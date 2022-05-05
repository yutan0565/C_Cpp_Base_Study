#include <stdio.h>

int main(void){
	int i, j ;
	int gugudan[10][10];
	for(i = 1; i < 10 ; i ++){
		printf("\n[ %d´Ü ]\n\n", i);
		for(j = 1 ; j < 10 ; j ++){
			gugudan[i][j] = i * j;
			printf("%d x %d = %d\n", i,j,gugudan[i][j]);
		}
	} 
	
	return 0;
}
