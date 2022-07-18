#include <stdio.h>  
 
int main(void){
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt", "r");
	
	if(fp == NULL){
		printf("파일열시에 싶패 했습ㄴ디ㅏ.\n");	
	}else{
		printf("파일 열기에 성공 했습니다.\n");
	}
	
	while( (c = fgetc(fp)) != EOF){
		putchar(c); 
	} 
	fclose(fp);
	
	return 0;
}
