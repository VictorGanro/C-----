#include<stdio.h>
#include<math.h>
int main(){
    double a=0,b=0,c=0;
    scanf("%lf%lf%lf",&a,&b,&c);
    double d  =  b*b - 4*a*c;
    if(d <0){
        printf("no\n");
    }else if(d==0){
        double res  =  (-b+sqrt(d))/(2.0*a);
        printf("%.2lf\n",res);
    }else{
        double ar  =  (-b+sqrt(d))/(2.0*a);
        double br  =  (-b-sqrt(d))/(2.0*a);
        double max  =  ar>br?ar:br;
        printf("%.2lf %.2lf\n",max,ar+br-max);
    }
    return 0;
}