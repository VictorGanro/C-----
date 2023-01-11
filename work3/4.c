#include<stdio.h>
#include<math.h>
int main(){
    int i,res;
    for(i  = 0;i<=300;i+=20){
        res =  (5.0/9.0)*(i-32);
        printf("%d    %d\n",i,res);
    }
    return 0;
}