


#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    // answer l� bi?n l�u tr? k?t qu? c?a a m? b
    // L�u ?: b?n ph?i kh?i t?o gi� tr? cho answer = 1
    int answer = 1;
    while (b > 0) {
        // answer *= a t��ng ���ng v?i answer = answer * a
        answer *= a;
        b--;
    }
    printf("%d", answer);
    return 0;
}
