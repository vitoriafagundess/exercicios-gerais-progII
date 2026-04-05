#include <stdio.h>
int main(){
    // qualquer base para decimal
    // (ALGARISMO) X (BASE) ^(POSIÇÃO)
    //decimal --> outra base --> divisão sucessiva 
    int dec, i = 0;
    int octal[100];

    scanf("%d", &dec);

    while (dec > 0){
        octal[i] = dec % 8;
        dec = dec / 8;
        i++;
    }
    
    for (int j = i-1; j >= 0; j--){
        printf("%d", octal[j]);
    }
    
    
    return 0;
}