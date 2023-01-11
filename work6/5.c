#include<stdio.h>
int GetSum(int n){
    int res  = 0;
    while(n>0){
        res+=n%10;
        n/=10;
    }
    return res;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",GetSum(n));
    return 0;
}