#include<stdio.h>
#include<math.h>
int check(int n){
    int num = pow(n,2);
    while(n>0){
        if(n%10 != num%10){
            return 0;
        }
        n/=10;
        num/=10;
    }
    return 1;
}
int main(){
    int i;
    for(i =  1;i<=99;i++){
        if(check(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}