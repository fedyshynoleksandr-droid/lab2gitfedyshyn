#include <stdio.h>
#include <conio.h>

int main() {
    int m, n, z;

    scanf("%d %d", &m, &n);

    z = (m-n)*(n+1/(n+m+1)-(n*n)+5);
    printf("z = %d", z);
    return 0;
}