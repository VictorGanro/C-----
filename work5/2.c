#include<stdio.h>
#include<math.h>
int Map[999][999];
int main(){
        int k,j,a,b;
        scanf("%d%d",&a,&b);
        //写入矩阵
        for(k=0;k<a;k++){
            for(j=0;j<b;j++){
                scanf("%d",&Map[k][j]);
            }
        }
        for(k=0;k<b;k++){
            for(j=0;j<a;j++){
                printf("%d ",Map[j][k]);
            }
            printf("\n");
        }
    return 0;
}