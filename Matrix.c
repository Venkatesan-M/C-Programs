//Transpose of a Matrix
#include <stdio.h>
int main()
{
    int x,y,i,j;
    scanf("%d%d",&x,&y);
    int a[x][y],b[i][j];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}

