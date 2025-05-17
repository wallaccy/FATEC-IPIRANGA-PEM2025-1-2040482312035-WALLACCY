/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Ordenação de dados               *
* Data - 16/05/2025                                      * 
* Autor: wallaccy vinicius;             *
*--------------------------------------------------------*/
#include <stdio.h>

//Função Insertion

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int ponteiro = *(vetor + i);
        int j = i - 1;
        
      
        while (j >= 0 && *(vetor + j) > ponteiro) {
            *(vetor + j + 1) = *(vetor + j);
            j--;
        }
        *(vetor + j + 1) = ponteiro;
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
    
    
     insertion(numeros, tamanho);
    
     printf("\narray ordenado:\n");
    arr(numeros, tamanho);
}
