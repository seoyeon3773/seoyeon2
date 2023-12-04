#include <stdio.h>


void add_mul(int num1, int num2, int* add , int* mul );

int main() {
    int x, y, add, mul;

    printf("변수1 입력: ");
    scanf("%d", &x);

    printf("변수2 입력: ");
    scanf("%d", &y);


    add_mul(x, y, &add, &mul);


    printf("두수의 합: %d \n", add);
    printf("두수의 곱: %d \n", mul);

    return 0;
}
   void add_mul(int num1, int num2, int* add, int* mul){
    
   *add = num1 + num2;
    *mul  = num1 * num2;
}

