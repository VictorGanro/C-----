#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    char res;
    scanf("%d%d",&a,&b);
    if(a>b){
        res = '>';
    }else if(a==b){
        res = '=';
    }else{
        res = '<';
    }
    printf("%c\n",res);
    return 0;
}