#include<stdio.h>
#include<math.h>
int gcd(int a,int b){
    int md = a%b;
    if(md>0){
        return gcd(b,md);
    }
    return b;
}
int bs(int a,int b){
    return a*b/gcd(a,b);
}
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d %d\n",gcd(a,b),bs(a,b));
    }
    return 0;
}