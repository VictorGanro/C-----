#include<stdio.h>
#include<math.h>
int main(){
    double Pi  = 3.1415927,r,s;
    scanf("%lf",&r);
    s = 4.0/3.0*Pi*pow(r,3);
    printf("%.3f\n",s);
    return 0;
}