#include <stdio.h>

int main() {
    int num, i;
    printf("Nhap v�o mot so nguy�n duong: ");
    scanf("%d", &num);
    printf("C�c uoc cua %d l�: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
