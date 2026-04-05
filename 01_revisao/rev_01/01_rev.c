#include <stdio.h>
#include <math.h>

int main(){
    
    float x1,y1,x2;
    float y2,r1,r2;
    float dist;
    
    scanf("%f%f%f", &x1, &y1, &r1);

    scanf("%f%f%f", &x2,&y2,&r2);

    dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    if (dist > r1+ r2){
        printf("ERROU\n");
    }else 
        printf("ACERTOU\n");

    return 0;
}