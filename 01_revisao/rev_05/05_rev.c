#include <stdio.h>
int main(){
    int m, n, i,j, mapa[100][100];
    int xi, xj, xf, yf;
    char movi[100];

    // 0 pode andar 
    // 1 bloqueado

    scanf("%d%d", &m, &n);

    for(i=0; i < m; i++){
        for(j = 0 ;j < n; j++){
            scanf("%d", &mapa[i][j]);
        }
    }

    scanf("%d%d", &xi, &xj);
    scanf("%d%d", &xf, &yf);

    xi--; xj--;
    xf--;yf--;

    scanf("%s", movi);

    int x = xi;
    int y = xj; // posição do jogador

    int javisitou[100][100] = {0};

    javisitou[x][y] = 1;
    printf("(%d,%d) ", x+1, y+1);

    int chegou = 0;

    while (1)
    {
        int andou = 0;

        for (int k = 0; k<4; k++){
            
            if (movi[k] == 'C'){
                //tenta subir 
                int nx = x -1;
                int ny= y;

                if (nx >= 0 && nx < m && ny >=0 && ny < n){
                    if (mapa[nx][ny] == 0 && javisitou[nx][ny] == 0){
                        x = nx;
                        y = ny;
                        javisitou[x][y] = 1;
                        printf("(%d,%d) ", x+1, y+1);

                        if (x == xf && y == yf){
                            chegou =1;
                            break;
                        }

                        andou = 1;
                        break;
                    }
                }
                
            }else if (movi[k] == 'B'){
                //tenta descer
                int nx = x + 1;
                int ny = y;
                
                if (nx >= 0 && nx < m && ny >= 0 && ny < n){
                    if (mapa[nx][ny] == 0 && javisitou[nx][ny] == 0){
                        x = nx;
                        y = ny;
                        javisitou[x][y] = 1;
                        printf("(%d,%d) ", x+1, y+1);

                        if (x == xf && y == yf){
                            chegou =1;
                            break;
                        }

                        andou = 1;
                        break;
                    }
                }
            }else if (movi[k] == 'D'){
                //direita
                int nx = x;
                int ny = y + 1;
                
                if (ny >= 0 && ny <n && nx >= 0 && nx < m){
                    if (mapa[nx][ny]==0 && javisitou [nx][ny] == 0){
                        x = nx;
                        y = ny;
                        javisitou[x][y] = 1;
                        printf("(%d,%d) ", x+1, y+1);

                        if (x == xf && y == yf){
                            chegou =1;
                            break;
                        }

                        andou = 1;
                        break;
                    }
                }

            }else if (movi[k] == 'E'){
                //esquerda
                int nx = x;
                int ny = y-1;
                if (ny >= 0 && ny < n &&nx >= 0 && nx < m){
                    if (mapa[nx][ny]==0 && javisitou[nx][ny] == 0){
                        x = nx;
                        y= ny;
                        javisitou[x][y] = 1;

                        printf("(%d,%d) ", x+1, y+1);

                        if (x == xf && y == yf){
                            chegou = 1;
                            break;
                        }

                        
                        andou = 1;
                        break;
                        }
                    }

                }
            }

            if (chegou == 1){
                break;
            }

            if (andou == 0){
                break;
            }
        }

    
        
    printf("\n");

    return 0;
}