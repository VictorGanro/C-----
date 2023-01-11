#include<stdio.h>
#include<math.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a,b;
        double res=0;
        scanf("%d",&b);
        for(a = 1;a<=b;a++){
            double tmp;
            scanf("%lf",&tmp);
            res+=tmp;
        }
        printf("%.2f\n",res/(double)b);
    }
    return 0;
}