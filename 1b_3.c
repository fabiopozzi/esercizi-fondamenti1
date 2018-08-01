#include <stdio.h>

void conta_pari(int vet[], int n);

int main(void)
{
    int vet[5] = {2, 3, 5, 3, 6};
    conta_pari(vet, 5);
}

void conta_pari(int vet[], int n)
{
    int pari = 0;
    for (int i=0; i < n; i++) {
        if ((vet[i] % 2) == 0) {
            pari++;
        }
    }
    printf("%d valori pari\n", pari);
    return;
}

