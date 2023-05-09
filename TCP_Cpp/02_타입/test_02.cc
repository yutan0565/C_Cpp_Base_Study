#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << "숫자 10을 10진수로 표현하면 " << a << "이며, " << endl;
    cout << oct;
    cout << "숫자 10을 8진수로 표현하면 " << a << "이며, " << endl;
    cout << hex;
    cout << "숫자 10을 16진수로 표현하면 " << a << " 입니다."<<endl;

    cout << dec;
    int num = 2147483647;
    cout << "변수 num에 저장된 값은 " << num << "입니다." << endl;  

    num = 2147483648;
    cout << "변수 num에 저장된 값은 " << num << "입니다." << endl;
    cout.precision(20);
    float num01 = 3.1415926535897932;  // float 타입의 유효 자릿수는 소수점 6자리
    cout << "변수 num01에 저장된 값은 " << num01 << "입니다." << endl;  
    
    double num02 = 3.1415926535897932; // double 타입의 유효 자릿수는 소수점 15자리
    cout << "변수 num02에 저장된 값은 " << num02 << "입니다." << endl;

    // 자동 타입 변환
    int num5 = 3.1415;
    int num6 = 8.3E12;
    double num7 = 5;

    cout << "num1에 저장된 값은 " << num5 << "입니다." << endl;
    cout << "num2에 저장된 값은 " << num6 << "입니다." << endl;
    cout << "num3에 저장된 값은 " << num7 << "입니다." << endl;


    cout.precision(3);
    double result1 = 5 + 3.14;
    double result2 = 5.0f + 3.14;
    cout << "result1에 저장된 값은 " << result1 << "입니다." << endl;
    cout << "result2에 저장된 값은 " << result2 << "입니다." << endl;


    int num8 = 1;
    int num9 = 4;

    double result3 = num8 / num9;
    double result4 = (double) num8 / num9;
    double result5 = double (num8) / num9;

    cout << "result1에 저장된 값은 " << result3 << "입니다." << endl;
    cout << "result2에 저장된 값은 " << result4 << "입니다." << endl;
    cout << "result3에 저장된 값은 " << result5 << "입니다.";
    return 0;

}