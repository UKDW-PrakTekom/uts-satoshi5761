#include <stdio.h>
/*
SOAL NOMOR 1 (Konversi)
problem credit: Livya Susilo
*/

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    int ans;
    if (a == 0) {
        ans = b * 3;
    } else {
        ans = b * 5;
    }

    printf("%d", ans);

    return 0;
}