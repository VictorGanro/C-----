#include<stdio.h>
#include<math.h>
struct k
{
    double x;
    double y;
}pos[5];
int main(){
    scanf("%lf %lf %lf %lf",&pos[0].x,&pos[0].y,&pos[1].x,&pos[1].y);
    double con  =   sqrt(pow(pos[0].x - pos[1].x,2)+pow(pos[0].y - pos[1].y,2));
    printf("%.2f\n",con);
    return 0;
}
