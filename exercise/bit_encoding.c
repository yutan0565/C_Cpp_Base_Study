#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    // �ִ� �κ�
    int i, j;
    unsigned char temp = 0b00000000;
    int count = 0;
    unsigned char cut = 0b10000000;
    char *input;
    for(i =0 ; i < 3 ; i++){
        if(i == 0){
            input =  "000011";
        }else if(i == 1){
            input =  "11";
        }else if(i == 2){
            input =  "1001111100";
        }

        int len_c= strlen(input);
        for(j = 0 ; j < len_c ; j ++){
            if (count == 8){
                fwrite(&temp, sizeof(char), 1, fp);
                
                temp = 0b00000000;
                count = 0;
            }
            // printf("%c ", input[i][j]);
            if (input[j] == '1'){
                temp = temp | (cut >> count);
                Printf_char_as_binary(temp);
            }else{
                temp = temp << 1;
                Printf_char_as_binary(temp);
            }
            count ++;
        }
        
        printf("\n");
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
Huffman Encoding �ó�����
1. ���ڰ� ����
2. ������ �ڵ�� ����
3. ���ۿ� �� ���ʴ�� �־��ֱ� (bit ������ �־������) - ������ ũ��� huffman�� ���� ū �� * 8 bit
4. �� �־��ָ� (����� bit ��������   8bit ������ �־��ְ�, �������� ��� ��� 
5. ���� ���ڿ� ���ؼ��� ���������� ���ۿ� �־��ְ� / �ݺ� ���� 

Decoding �ó����� 
1. �ִ� ���� ��ŭ ���۸� ������
2. binany ���Ͽ��� bit ������ �о����
3. �ش� bit�� table�� ���ԵǾ� ������ �� ��ȯ 
    3-1 ���ٸ���, ���� ��Ʈ���� �̾Ƴ��� �ش� ���̸� ���� �͵� �߿� �� (table ��ü�� di)
   
*/
