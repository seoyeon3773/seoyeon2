#include <stdio.h>

int calc(int n, int s) {
    int result = 0;
    
    if (s == 1) {
        for (int i=1; i<=n; i++) {
            result += i; // 더하기
        }

    } 
else if (s == 2) {
        result = 1;
        for (int i=1; i<= n; i++) {
            result *= i; // 곱하기
        }
    } else {
        printf("잘못된 s값입니다. 1또는2를 사용하세요.\n");
        return-1;
    }
   
    return result;
}

int main() {
    int n,s;
    
    printf (" n값을 입력하세요 :  ");
    scanf (" %d ", &n);
    
    printf("s 값을 입력하세요 (1또는2): ");
    scanf("%d", &s);
    
    int result= calc(n,s);
    
    if (result!= -1) {
        if (s==1) {
            printf("1부터 %d까지 덧셈 결과: %d\n", n, result);
        }
else if (s==2) {
            printf("1부터 %d까지 곱셈결과: %d\n", n,result);
        } 
}
    return 0;
}

