#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a +=b,b = a-b,a-=b;
    printf("%d %d\n",a,b);
    return 0;
}