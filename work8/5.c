#include<stdio.h>
struct k
{
    double value;
    double space;
}obj[999],tmp;
int main(){
    double pv;
    int n,i,p,num=0;
    scanf("%lf %d",&pv,&n);
    for(i=1;i<=n;i++){
        scanf("%lf %lf",&obj[num].space,&obj[num].value);
        num ++;
    }
    for(i  = 0;i<n-1;i++){
        for(p = n-1;p>i;p--){
            if(obj[p].value/obj[p].space>obj[p-1].value/obj[p-1].space){
                tmp = obj[p];
                obj[p] = obj[p-1];
                obj[p-1] = tmp;
            }
        }
    }
    double res= 0;
    for(i = 0;i<n;i++){
        if(obj[i].space < pv){
            res += obj[i].value;
            pv -= obj[i].space;
        }else{
            res += (obj[i].value/obj[i].space)*pv;
            break;
        }
    }
    printf("%.2f\n",res);
    return 0;
}
