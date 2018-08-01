#include <stdio.h>

int main(void)
{
    int a1, a2;
    int i;

    printf("inserire il primo anno: ");
    scanf("%d", &a1);
    printf("inserire il secondo anno: ");
    scanf("%d", &a2);

    for(i = a1; i <= a2; i++) {
        if ( ((i%4 == 0) && (i%100 != 0)) || (i%400 == 0)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
