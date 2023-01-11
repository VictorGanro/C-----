#include<stdio.h>
#include<math.h>
int main(){
    int n,i,res=1;
    scanf("%d",&n);
    for(i  = 1;i<=n;i++){
        res*=i;
    }
    printf("%d\n",res);
    return 0;
}