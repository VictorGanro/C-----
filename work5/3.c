#include<stdio.h>
#include<math.h>
int san[999][999];//杨辉三角
int main(){
    san[1][1] = 1;
    san[2][1] = 1;
    san[2][2] = 1;
    // BuildSans
    int n,i;
    scanf("%d",&n);
    for(i=3;i<=n;i++){//行
        int r;
        for(r=1;r<=i;r++){//列
            san[i][r] = san[i-1][r-1]+san[i-1][r];
        }
    }
    int l;
    for(i=1;i<=n;i++){
        for(l=1;l<=i;l++){
            printf("%d ",san[i][l]);
        }
        printf("\n");
    }
    return 0;
}