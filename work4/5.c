#include<stdio.h>
#include<math.h>
int check(int n){
    int res =  pow(n/100,3)+pow(n/10%10,3)+pow(n%10,3);
    return res == n;
}
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        int flg  =  0;
        for(;a<=b;a++){
            if(check(a)){
                flg = 1;
                printf("%d ",a);
            }
        }
        if(flg == 1){
            printf("\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}