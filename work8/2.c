#include<stdio.h>
struct kk
{
    double a;
    double b;
    double c;
    double sum;
    char name[99];
}cj[8],tmp;
int main(){
    int i,p;
    for(i= 0;i<5;i++){
        scanf("%s %lf %lf %lf",cj[i].name,&cj[i].a,&cj[i].b,&cj[i].c);
        cj[i].sum = cj[i].a+cj[i].b+cj[i].c;
    }
    for(i= 0;i<4;i++){
        for(p = 4;p>i;p--){
            if(cj[p].sum>cj[p-1].sum){
                tmp  = cj[p];
                cj[p]  = cj[p-1];
                cj[p-1] = tmp; 
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%s %.1f %.1f %.1f %.1f\n",cj[i].name,cj[i].a,cj[i].b,cj[i].c,cj[i].sum);
    }
    return 0;
}
