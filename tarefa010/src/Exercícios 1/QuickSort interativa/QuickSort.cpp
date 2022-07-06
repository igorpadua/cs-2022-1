#include "QuickSort.h"

void troca(int *num1, int *num2) {
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int dividir(int num[], int inicio, int tam) {

    int aux = num[tam];
    int i = (inicio - 1);

    for (int j = inicio; j <= tam -1; j++)
    {
        if (num[j] <= aux)
        {
            i++;
            troca(&num[i], &num[j]);
        }        
    }
    troca(&num[i + 1], &num[tam]);


    return (i + 1);
}

void quickSort(int num[], int inicio, int tam) {

    int aux[tam - inicio + 1];

    int i = -1;

    aux[++i] = inicio;
    aux[++i] = tam;

    while (i >= 0) {
        tam = aux[i--];
        inicio = aux[i--];

        int pivo = dividir(num, inicio, tam);

        if (pivo - 1 > inicio)
        {
            aux[++i] = inicio;
            aux[++i] = pivo - 1;
        }

        if (pivo + 1 < tam)
        {
            aux[++i] = pivo + 1;
            aux[++i] = tam;
        }
    }
}