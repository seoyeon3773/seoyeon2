#include <stdio.h>


void add_mul(int num1, int num2, int* add , int* mul );

int main() {
    int x, y, add, mul;

    printf("����1 �Է�: ");
    scanf("%d", &x);

    printf("����2 �Է�: ");
    scanf("%d", &y);


    add_mul(x, y, &add, &mul);


    printf("�μ��� ��: %d \n", add);
    printf("�μ��� ��: %d \n", mul);

    return 0;
}
   void add_mul(int num1, int num2, int* add, int* mul){
    
   *add = num1 + num2;
    *mul  = num1 * num2;
}

