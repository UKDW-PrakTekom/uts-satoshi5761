#include <stdio.h>
/*
SOAL NOMOR 3 (BILANGAN PRIMA)
*/

int main() {

    int n;
    scanf("%d", &n);

    int prime = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = 0;
        }
    }

    printf("%d", prime);
}