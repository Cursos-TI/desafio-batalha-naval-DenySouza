#include <stdio.h>

int main(){

    int cone[3][5];
    int cruz[3][5];
    int octaedro[3][5];

    // ---------- CONE ----------
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cone[i][j] = 0;
            if(i == 0){
                if(j == 2)
                {
                    cone[i][j] = 3;
                }
            }

            if(i == 1){
                if(j >= 1){
                    if(j <= 3)
                    {
                        cone[i][j] = 3;
                    }
                }
            }

            if(i == 2){
                cone[i][j] = 3;
            }

        }
    }

    // ---------- CRUZ ----------
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cruz[i][j] = 0;
            if(i == 1)
            {
                cruz[i][j] = 3;
                }
                if(j == 2)
                {
                cruz[i][j] = 3;
            }

        }
    }

    // ---------- OCTAEDRO ----------
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            octaedro[i][j] = 0;
            if(i == 0)
            {
                if(j == 2)
                {
                    octaedro[i][j] = 3;
                }
            }
            if(i == 1){
                if(j >= 1){
                    if(j <= 3){
                        octaedro[i][j] = 3;
                    }
                }
            }
            if(i == 2){
                if(j == 2){
                    octaedro[i][j] = 3;
                }
            }

        }
    }

    // ---------- MOSTRAR CONE ----------
    printf("Cone:\n");

        for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d ",cone[i][j]);
        }
        printf("\n");    
    }

    // ---------- MOSTRAR CRUZ ----------
    printf("Cruz:\n");

        for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d ",cruz[i][j]);  
        }
        printf("\n");
        
    }

    // ---------- MOSTRAR OCTAEDRO ----------
    printf("Octaedro:\n");

        for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d ",octaedro[i][j]);   
        }
        printf("\n");  
    }

    return 0;
}