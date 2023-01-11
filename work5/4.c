#include<stdio.h>
#include<math.h>
double pos[999][3];
int len = 0;
int main(){
    int n,i;
    scanf("%d",&n);
    double max;
    for(i=1;i<=n;i++){
        double a,b;
        scanf("%lf%lf",&pos[len][0],&pos[len][1]);
        int r;
        for(r=len-1;r>0;r--){
            double o = sqrt(pow(pos[len][0]-pos[r][0],2)+pow(pos[len][1]-pos[r][1],2));
            if(len == 1){
                max =  o;
            }
            if(max < o){
                max = o;
            }
        }
        len++;
    }
    printf("%.4lf\n",max);
    return 0;
}