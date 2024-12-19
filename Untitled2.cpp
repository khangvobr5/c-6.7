#include <stdio.h>

int main() {
    int num, i;
    printf("Nhap vào mot so nguyên duong: ");
    scanf("%d", &num);
    printf("Các uoc cua %d là: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
