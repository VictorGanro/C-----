#include<stdio.h>
#include<math.h>
int check(int n){
    while(n>0){
        int p =  n%10;
        if(p==4){
            return 0;
        }
        if(p==2){
            if(n/10%10==6){
                return 0;
            }
        }
        n/=10;
    }
    return 1;
}
int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF,!(!a&&!b)){
        int i;
        int n = 0;
        for(i=a;i<=b;i++){
            if(check(i)){
                n++;
            }
        }
        printf("%d\n",n);
    }
    return 0;
}