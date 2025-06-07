/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Ordenação de dados               *
* Data - 16/05/2025                                      * 
* Autor:Wallaccy vinicius;         *
*--------------------------------------------------------*/
#include <stdio.h>

//Função bubblesort

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

//função imprimir vetor

void arr(int *vetor, int tamanho){
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int tamanho = 5;
    int numeros[tamanho];
    
    //dados
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
     printf("\nArray desordenado:\n");
    arr(numeros, tamanho);
    
    
    bubbleSort(numeros, tamanho);
    
     printf("\narray ordenado:\n");
    arr(numeros, tamanho);
}
