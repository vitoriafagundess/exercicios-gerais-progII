#include <stdio.h>
int main(){
    
    int i, qtd_lim;
    char rotulos[1000];
    int cont[256]= {0};
    int achou =0;

    scanf("%d", &qtd_lim);
    scanf("%s", rotulos);

    for (i =0; rotulos[i] != '\0'; i++){
        cont[rotulos[i]]++;
    }
    
    for (i = 0; i< 256; i++){
        if(cont[i] > qtd_lim){
            printf("%c: %d\n", i, cont[i]);
            achou = 1;
        }
    }

    if (achou == 0){
        printf("NENHUM\n");
    }
    return 0;
}