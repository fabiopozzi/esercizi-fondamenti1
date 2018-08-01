#include <stdio.h>

void stampa_vettore(int vet[], int n);

int main(void)
{
    int vet[5] = {2, 3, 5, 3, 6};
    stampa_vettore(vet, 5);
}

void stampa_vettore(int vet[], int n)
{
    printf("indici:\t");
    for (int i=0; i < n; i++) {
        printf("%d\t", i);
    }
    printf("\nvalori:\t");
    for (int i=0; i < n; i++) {
        printf("%d\t", vet[i]);
    }
    printf("\n");
    return;
}

