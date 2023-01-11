#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int max = a>b?a:b;
    max = c>max?c:max;
    if(a+b+c-max>max){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}