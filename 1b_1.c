#include <stdio.h>

void leggi_vettore(int vet[], int n);
void stampa_vettore(int vet[], int n);

int main(void)
{
    int vet[5];
    leggi_vettore(vet, 5);
    stampa_vettore(vet, 5);
}

void leggi_vettore(int vet[], int n)
{
    for (int i=0; i < n; i++) {
        printf("Inserisci valore posizione %d: ", i);
        scanf("%d", &vet[i]);
    }
    return;
}

void stampa_vettore(int vet[], int n)
{
    int i;
    printf("indici:\t");
    for (i=0; i < n; i++) {
        printf("%d\t", i);
    }
    printf("\nvalori:\t");
    for (i=0; i < n; i++) {
        printf("%d\t", vet[i]);
    }
    printf("\n");
    return;
}

