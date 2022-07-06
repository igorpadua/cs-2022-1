#include "QuickSort.h"

void quickSort(int num[], int inicio, int tam) {
    int i, j, pivo;
    int aux;

    i = inicio;
    j = tam - 1;
    pivo = num[(inicio + tam) / 2];

    while (i <= j) {
        while (num[i] < pivo && i < tam) {
            i++;
        }
        while (num[j] > pivo && j > inicio) {
            j--;
        }
        if (i <= j) {
            aux = num[i];
            num[i] = num[j];
            num[j] = aux;
            i++;
            j--;
        }
    }
    if (j > inicio) {
        quickSort(num, inicio, j + 1);
    }
    if (i < tam) {
        quickSort(num, i, tam);
    }
}