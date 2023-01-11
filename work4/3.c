#include<stdio.h>
#include<math.h>
int main(){
    int i,n=9;
    for(i=1;i<=n;i++){
        int a,b=i;
        for(a = 1;a<=b;a++){
            printf("%d*%d=%d ",a,i,a*i);
        }
        printf("\n");
    }
    return 0;
}