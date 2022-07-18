#include <stdio.h>
#include <string.h>

int main(void){
	
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("파일 이름을 입력하세요 : ");
	scanf("%s", fname);
	
	printf("탐색할 단어를 입력하세요 : ");
	scanf("%s", word);
	
	if( (fp = fopen(fname, "r")) == NULL){
		fprintf(stderr, "파일 %s를 열 수 없습니다. \n", fname);
		return 0;
	}
	
	while(fgets(buffer, 256, fp)){
		line++;
		if ( strstr(buffer, word)){
			printf("라인 %d : 단어 %s 를 발견했습니다. \n", line, word);
		}
	}
	
	
	
	return 0;
}
