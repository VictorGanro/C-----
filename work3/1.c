#include<stdio.h>
#include<math.h>
int check(int n){
    int res  =  pow(n/100,3)+pow(n/10%10,3)+pow(n%10,3);
    return res==n;
}
int main(){
    int i;
    for(i=100;i<=999;i++){
        if(check(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}