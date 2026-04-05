#include <stdio.h>

int main(){

    int n, i, j, cont;
    scanf("%d", &n);
    
    int book[n];
    for (i = 0; i < n; i++){
        scanf("%d", &book[i]);
    }

    int sem_copia[n]; 
    int k = 0;
    int encontrou = 0;

    //encontrar os que aparece uma vez 
    for (i = 0; i < n; i++){
        cont = 0;

        for (j = 0; j < n; j++){
            if (book[i] == book[j]){
                cont++;
            }
        }

        if (cont == 1){
            sem_copia[k] = book[i];
            k++;
            encontrou = 1;
        }
    }

    // ordenar 
    for (i = 0; i < k-1; i++){
        for (j = 0; j < k-1-i; j++){
            if (sem_copia[j] > sem_copia[j+1]){
                int temp = sem_copia[j];
                sem_copia[j] = sem_copia[j+1];
                sem_copia[j+1] = temp;
            }
        }
    }


    if (encontrou == 0){
        printf("NENHUM");
    } else {
        for (i = 0; i < k; i++){
            printf("%d ", sem_copia[i]);
        }
    }

    printf("\n");
    return 0;
}