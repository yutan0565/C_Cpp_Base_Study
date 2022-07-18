#include <stdio.h>

int main(void){
	
	FILE *fp = NULL;
	fp = fopen("output.txt", "w"); // w - 쓰기모드, r - 읽기 모드
	if(fp == NULL){
		printf("파일 열기에 실패했습니다.\n");
	}else{
		printf("파일 열기에 성공 했습니다.\n");
	}
	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fclose(fp);
	
	return 0;
} 
