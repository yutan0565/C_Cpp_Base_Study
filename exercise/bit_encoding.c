#include <stdio.h>
#include <stdlib.h>
#define IN_COUNT 10
void Printf_char_as_binary( unsigned char input ){
    int i;
    for( i = 0 ; i < 8 ; i++ ){
        char shift_byte = 0x01 << (7-i);
        if (shift_byte & input){
            printf("1");
        }else{
            printf("0");
        }
    }
    printf("\n");
}

void show_first_bit(unsigned char input ){
    int i;
    char cut = 0b10000000;
    char temp;
    for(i = 0 ; i < 8 ; i ++){
        if (cut & input){
            printf("%d", 1);
        }else{
            printf("%d", 0);
        }
        input = input << 1;
    }
}

int main(void){
    FILE * fp = NULL;
    fp = fopen("./test_b.bin", "wb");
    char input[3][16] = {
         "100011", "10", "1000111100"
    };
    // 넣는 부분
    int i, j;
    char temp = 0b00000000;
    int count = 0;
    char cut = 0b00000001;
    for(i =0 ; i < 3 ; i++){
        int len_c= sizeof(input[i]);
        for(j = 0 ; j < len_c ; j ++){
            if (count == 8){
                fwrite(&temp, sizeof(char), 1, fp);
                temp = 0b00000000;
                count = 0;
            }
            // printf("%c ", input[i][j]);
            if (input[i][j] == '1'){
                temp = temp | (cut << count);
            }else{
                temp = temp << 1;
            }
            count ++;
        }
    }
    fclose(fp);

    // for(i = 0; i < IN_COUNT ; i++){
    //     fwrite(&input_b, sizeof(char), 1, fp);
    //     // fprintf(fp, "%c",input_b);
    // }
    // fclose(fp);


    FILE *f = NULL;
    f = fopen("./test_b.bin", "rb");

    char buffer;

    while( (buffer = fgetc(f)) != EOF){
        printf("%c ", buffer);
        // Printf_char_as_binary(buffer);
        show_first_bit(buffer);

    }
    fclose(f);
}



/*
Huffman Encoding 시나리오
1. 문자가 들어옴
2. 허프만 코드로 변경
3. 버퍼에 에 차례대로 넣어주기 (bit 단위로 넣어줘야해) - 버퍼의 크기는 huffman중 가장 큰 것 * 8 bit
4. 다 넣어주면 (빈공간 bit 전까지는   8bit 단위로 넣어주고, 나머지는 잠시 대기 
5. 다음 문자에 대해서도 마찬가지로 버퍼에 넣어주고 / 반복 진행 

Decoding 시나리오 
1. 최대 깊이 만큼 버퍼를 만들어둠
2. binany 파일에서 bit 단위로 읽어오기
3. 해당 bit가 table에 포함되어 있으면 값 반환 
    3-1 없다면은, 다음 비트까지 뽑아내서 해당 길이를 가진 것들 중에 비교 (table 자체를 di)
   
*/
