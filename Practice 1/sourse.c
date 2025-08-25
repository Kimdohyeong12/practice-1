#include <stdio.h>

int main()
{
#pragma region 서식 지정자
    
    // char alphabet = 'A';
    // 
    // int integer = 100;
    // 
    // float decimal = 36.5f;
    // 
    // printf("alphabet : %c\n", alphabet);
    // printf("integer : %d\n", integer);
    // printf("decimal : %f\n", decimal);

#pragma endregion

#pragma region 변수

    // int experience = 100;
    // 
    // experience = 200;
    // 
    // printf("experience : %d\n", experience);

#pragma endregion

#pragma region 상수

    // const float pi = 3.141592f;

    // pi = 6.125f;

    // printf("pi의 값 : %f\n", pi);

#pragma endregion

#pragma region 산술 연산자

    // 1. 변수 =  변수 + 변수

    int x1 = 20;
    int x2 = 30;

    int xo1 = x1 + x2;

    printf("xo1 = %d\n", xo1);

    // 2. 변수 = 변수 - 리터럴 상수

    int y1 = 12;

    int xo2 = y1 - 5;

    printf("xo2 : %d\n", xo2);

    // 3. 변수 =  변수 * 심볼릭 상수

    int y2 = 10;

    const int y3 = 12;

    int xo3 = y2 * y3;

    printf("xo3 : %d\n", xo3);

    // 4. 변수 =  리터럴 상수 / 리터럴 상수

    int xo4 = 12 / 6;

    printf("xo4 : %d\n", xo4);

    // 5. 변수 = 심볼릭 상수 % 리터럴 상수

    const int y4 = 18;

    int xo5 = y4 % 9;

    printf("xo5 : %d\n", xo5);

#pragma endregion





    return 0;
}
