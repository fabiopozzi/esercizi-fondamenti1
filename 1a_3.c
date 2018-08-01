#include <stdio.h>

int main(void)
{
    int importo;
    do {
        printf("inserire importo da prelevare: ");
        scanf("%d", &importo);
        if ((importo % 10) != 0) {
            printf("Importo inserito non erogabile (non multiplo di 10)\n");
        }
    } while ((importo % 10) != 0);

    int banconote_50, banconote_20, banconote_10;
    banconote_50 = (importo / 50);
    importo = importo - (banconote_50 * 50);
    banconote_20 = (importo / 20);
    importo = importo - (banconote_20 * 20);
    banconote_10 = (importo / 10);

    printf("banconote da emettere:\n");
    printf("* %d banconote 50e\n * %d banconote 20e\n * %d banconote 10e\n",
            banconote_50, banconote_20, banconote_10);
    return 0;
}

