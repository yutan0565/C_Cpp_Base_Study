#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << "���� 10�� 10������ ǥ���ϸ� " << a << "�̸�, " << endl;
    cout << oct;
    cout << "���� 10�� 8������ ǥ���ϸ� " << a << "�̸�, " << endl;
    cout << hex;
    cout << "���� 10�� 16������ ǥ���ϸ� " << a << " �Դϴ�."<<endl;

    cout << dec;
    int num = 2147483647;
    cout << "���� num�� ����� ���� " << num << "�Դϴ�." << endl;  

    num = 2147483648;
    cout << "���� num�� ����� ���� " << num << "�Դϴ�." << endl;
    cout.precision(20);
    float num01 = 3.1415926535897932;  // float Ÿ���� ��ȿ �ڸ����� �Ҽ��� 6�ڸ�
    cout << "���� num01�� ����� ���� " << num01 << "�Դϴ�." << endl;  
    
    double num02 = 3.1415926535897932; // double Ÿ���� ��ȿ �ڸ����� �Ҽ��� 15�ڸ�
    cout << "���� num02�� ����� ���� " << num02 << "�Դϴ�." << endl;

    // �ڵ� Ÿ�� ��ȯ
    int num5 = 3.1415;
    int num6 = 8.3E12;
    double num7 = 5;

    cout << "num1�� ����� ���� " << num5 << "�Դϴ�." << endl;
    cout << "num2�� ����� ���� " << num6 << "�Դϴ�." << endl;
    cout << "num3�� ����� ���� " << num7 << "�Դϴ�." << endl;


    cout.precision(3);
    double result1 = 5 + 3.14;
    double result2 = 5.0f + 3.14;
    cout << "result1�� ����� ���� " << result1 << "�Դϴ�." << endl;
    cout << "result2�� ����� ���� " << result2 << "�Դϴ�." << endl;


    int num8 = 1;
    int num9 = 4;

    double result3 = num8 / num9;
    double result4 = (double) num8 / num9;
    double result5 = double (num8) / num9;

    cout << "result1�� ����� ���� " << result3 << "�Դϴ�." << endl;
    cout << "result2�� ����� ���� " << result4 << "�Դϴ�." << endl;
    cout << "result3�� ����� ���� " << result5 << "�Դϴ�.";
    return 0;

}