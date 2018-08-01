#include<stdio.h>

int main(void)
{
    int q, k;

    printf("inserire quantita' q: ");
    scanf("%d", &q);
    printf("inserire quantita' k: ");
    scanf("%d", &k);

    int i;
    for (i=1; i <= q; i++) {
        printf("%d\t", 2*i);
        if ((i % k) == 0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
