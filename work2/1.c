#include<stdio.h>
#include<math.h>
int check(int n){
    int res  =  0;
    int i;
    for(i=0;n/(int)pow(10,i)>0;i++){
        res+=pow(n/(int)pow(10,i)%10,3);
    }
    return res==n;
}
int main(){
    int n;
    scanf("%d",&n);
    if(check(n)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}