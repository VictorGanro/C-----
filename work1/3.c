#include<stdio.h>
#include<math.h>
int numLong(int n){
    int res =  0;
    while(n>0){
        res++;
        n/=10;
    }
    return res;
}
int main(){
    int num;
    scanf("%d",&num);
    while(num>=10){
        printf("%d---",num/(int)pow(10,numLong(num)-1));
        num = num%(int)pow(10,numLong(num)-1);
    }
    printf("%d\n",num);
    return 0;
}