#include <stdio.h>

int calc(int n, int s) {
    int result = 0;
    
    if (s == 1) {
        for (int i=1; i<=n; i++) {
            result += i; // ���ϱ�
        }

    } 
else if (s == 2) {
        result = 1;
        for (int i=1; i<= n; i++) {
            result *= i; // ���ϱ�
        }
    } else {
        printf("�߸��� s���Դϴ�. 1�Ǵ�2�� ����ϼ���.\n");
        return-1;
    }
   
    return result;
}

int main() {
    int n,s;
    
    printf (" n���� �Է��ϼ��� :  ");
    scanf (" %d ", &n);
    
    printf("s ���� �Է��ϼ��� (1�Ǵ�2): ");
    scanf("%d", &s);
    
    int result= calc(n,s);
    
    if (result!= -1) {
        if (s==1) {
            printf("1���� %d���� ���� ���: %d\n", n, result);
        }
else if (s==2) {
            printf("1���� %d���� �������: %d\n", n,result);
        } 
}
    return 0;
}

