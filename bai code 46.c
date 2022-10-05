


#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    // answer là bi?n lýu tr? k?t qu? c?a a m? b
    // Lýu ?: b?n ph?i kh?i t?o giá tr? cho answer = 1
    int answer = 1;
    while (b > 0) {
        // answer *= a týõng ðýõng v?i answer = answer * a
        answer *= a;
        b--;
    }
    printf("%d", answer);
    return 0;
}
