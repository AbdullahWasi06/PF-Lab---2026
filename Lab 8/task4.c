#include <stdio.h>

int main(){
    int i, j;
    int a[3][3], t[3][3];
    int co[3][3], adj[3][3];
    float inv[3][3];
    int det;

    printf("Enter 3x3 matrix:\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            t[j][i]=a[i][j];
        }
    }

    printf("\nTranspose:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }

    det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])
        - a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])
        + a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);

    printf("\nDeterminant = %d\n",det);

    co[0][0]=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
    co[0][1]=-(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
    co[0][2]=(a[1][0]*a[2][1]-a[1][1]*a[2][0]);

    co[1][0]=-(a[0][1]*a[2][2]-a[0][2]*a[2][1]);
    co[1][1]=(a[0][0]*a[2][2]-a[0][2]*a[2][0]);
    co[1][2]=-(a[0][0]*a[2][1]-a[0][1]*a[2][0]);

    co[2][0]=(a[0][1]*a[1][2]-a[0][2]*a[1][1]);
    co[2][1]=-(a[0][0]*a[1][2]-a[0][2]*a[1][0]);
    co[2][2]=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);

    printf("\nCofactor Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",co[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            adj[i][j]=co[j][i];
        }
    }

    printf("\nAdjoint Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }

    if(det!=0){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                inv[i][j]=(float)adj[i][j]/det;
            }
        }

        printf("\nInverse Matrix:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%.2f ",inv[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("\nInverse not possible\n");
    }

    return 0;
}
