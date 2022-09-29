#include <stdio.h>
int main(void)

{
    int n;
    scanf("%d", &n);
    int k = n % 2;
    if (k == 0) {
        printf("Even\n", k);
    }
    else {
        printf("Odd\n", k);
    }
    return 0;
}
