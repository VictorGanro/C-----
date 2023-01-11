#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    double res  =  0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        res+=1.0/(double)i;
    }
    printf("%.3lf\n",res);
    return 0;
}