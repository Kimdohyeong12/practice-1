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

   // int x1 = 20;
   // int x2 = 30;
   // 
   // int xo1 = x1 + x2;
   // 
   // printf("xo1 = %d\n", xo1);

    // 2. 변수 = 변수 - 리터럴 상수

    // int y1 = 12;
    // 
    // int xo2 = y1 - 5;
    // 
    // printf("xo2 : %d\n", xo2);

    // 3. 변수 =  변수 * 심볼릭 상수

    // int y2 = 10;
    // 
    // const int y3 = 12;
    // 
    // int xo3 = y2 * y3;
    // 
    // printf("xo3 : %d\n", xo3);

    // 4. 변수 =  리터럴 상수 / 리터럴 상수

    // int xo4 = 12 / 6;
    // 
    // printf("xo4 : %d\n", xo4);

    // 5. 변수 = 심볼릭 상수 % 리터럴 상수

    // const int y4 = 18;
    // 
    // int xo5 = y4 % 9;
    // 
    // printf("xo5 : %d\n", xo5);



#pragma endregion

#pragma region 비트 연산자

   //  int x1 = 20;
   //  int x2 = 22;
   // 
   //  int star1 = 20;   // 0001 0100
   //  int star2 = 22;  // 0001 0110 
   //           // 값: // 0001 0100
   //  printf("star1 & star2 = %d\n", star1 & star2);
   // 
   //  int star3 = 15;   // 0000 1111
   //  int star4 = 12;  //  0000 1100
   //           // 값: //   0000 1111 = 15
   // 
   //  printf("star3 | star4 = %d\n", star3 | star4);
   // 
   //  int star5 = 7;  // 0000 0111
   //  int star6 = 5; //  0000 0101
   //         // 값: //   0000 0010 = 2
   // 
   //  printf("star5 ^ star6 = %d\n", star5^ star6);
   // 
   //  int star7 = 10; // 0000 1010
   //          // 값: //  1111 0101
   // 
   //  printf("~star7 = %d\n", ~star7);

#pragma endregion

#pragma region 시프트 연산자

   // int sam = 8; // 0000 1000
   // int shift = sam << 4; // 1000 0000
   // 
   // printf("shift 1 변수의 값 : %d\n", shift);
   // 
   // shift = sam >> 1; // 0000 0100
   // 
   // printf("shift 2 변수의 값 : %d\n", shift);
   // 
   // int sam2 = 10;
   // int shift2 = sam2 << 2; // 0010 1000
   // 
   // printf("shift 3 변수의 값 : %d\n", shift2);
   // 
   // shift2 = sam2 >> 1; // 0000 0101
   // 
   // printf("shift 4 변수의 값 : %d\n", shift2);
#pragma endregion

#pragma region 연습 1

// int x1 = 25;
// int x2 = 5;
// 
// int status = x1 + x2;
// 
// status = x1 * x2 *(x1 + x2);
// 
// int status2 = x1 * x2 * (x1 + x2) * (x1 - x2);
// 
// int star1 = 30;
// int star2 = 70;
// int star3 = 100;
// int star4 = 200;
// 
// int stars = star1 / star2;
// 
// stars = star2 / star1 * star4 / star3;
// 
// int stars2 = star1 * star2 * star3 * star4;
// 
// printf("status : %d\n", status);
// printf("status & status2 : %d\n", status& status2);
// printf("stars : %d\n", stars);
// printf("stars | stars2 : %d\n", stars | stars2);
// printf("status & stars, status2 | stars2, status ^ stars2, status2 & stars, ~status, ~status2, ~stars, ~stars2 : %d\n", status& stars, status2 | stars2, status^ stars2, status2& stars, ~status, ~status2, ~stars, ~stars2);
// 
// int st1 = 10;
// int shift = st1 << 4;
// 
// printf("st1 변수의 값 : %d\n", shift);
// 
// shift = st1 >> 2;
// 
// printf("st1 변수의 값 : %d\n", shift);
// 
// int st2 = 5;
// int shift = st2 << 2;
// 
// printf("st2 변수의 값 : %d\n", shift);
// 
// shift = st2 >> 10;
// 
// printf("st2 변수의 값 : %d\n", shift);
#pragma endregion

#pragma region 오버플로우 & 언더플로우

// char s = 127 + 1;
// printf("s의 값 : %d\n", s);
// 
// char i = -128 - 1;
// printf("i의 값 : %d\n", i);
#pragma endregion

#pragma region 부호 없는 자료형 & 실수를 표현하는 방법

// unsigned int count = 237429334;
// 
// printf("signed out 변수의 값 : %d\n", count);
// printf("unsigned out 변수의 값 : %u\n", count);
// 
// float epd = 8.15f;
// double e = 8.5;
// 
// printf("epd 변수의 값 : %.7f\n", epd);
// printf("e 변수의 값 : %f\n", e);

#pragma endregion

#pragma region if문, else if 문, else 문, swich문

int health = 0;

if (health <= 0)
{
    printf("Destroy\n");
}

int ammo = 30;

if (ammo >= 30)
{
    printf("재장전 완료!\n");
}
else if (ammo <= 0)
{
    printf("재장전하세요!\n");
}
else
{
    printf("교전을 계속하세요!\n");
}

int fuel = 100;

if (fuel <= 0)
{
    printf("주유하세요!");
}
else if (fuel >= 100)
{
    printf("주유 완료! 주행하세요!\n");
}
else
{
    printf("계속 주행하세요\n");
}

char grade = 'A';

switch (grade)
{
case 'A': printf("90점 ~ 100점입니다.\n");
    break;
case 'B': printf("80점 ~ 89점입니다.\n");
    break;
case 'C': printf("70점 ~ 79점입니다.\n");
    break;
case 'D': printf("60점 ~ 69점입니다.\n");
    break;
case 'E': printf("50점 ~ 59점입니다.\n");
    break;
case 'F': printf("50점 이하입니다.\n");
    break;
default: printf("Exception\n");
    break;
}



#pragma endregion











    return 0;
}
