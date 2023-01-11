#include<stdio.h>
#include<math.h>
int check(int n){
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i== 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int tmp;
        scanf("%d",&tmp);
        if(check(tmp)){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}