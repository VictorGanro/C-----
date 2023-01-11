#include<stdio.h>
#include<math.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a,b;
        int DataList[20] = {0};
        scanf("%d",&b);
        for(a=0;a<b;a++){
            scanf("%d",&DataList[a]);
        }
        int max  =  DataList[0];
        for(a=1;a<b;a++){
            if(max<DataList[a]){
                max = DataList[a];
            }
        }
        printf("%d\n",max);
    }
    return 0;
}