#include <stdio.h>
int main(){

    int n, i, j, cont=1;

    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for(j = 1; j <= i; j ++){
            printf("%d ", cont);
            cont ++;
        }    
        printf("\n");
    }

    return 0;
}