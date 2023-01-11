#include<stdio.h>
#include<math.h>
int SinNum(int n){
    int res  = 0;
    int DataMap[999] = {0};
    int i;
    int y = n;
    for(n= 1;n<=y;n++){
        double xline  =  pow(n,2);
        for( i  = 1 ;i<=n;i++){
            double s = sqrt(xline-pow(i,2));
            if(s<=n&&0<s){
                if(s == (int)s){
                    int p;
                    int flg = 1;
                    for(p = 0 ;p<res;p++){
                        if(DataMap[p] == (int)s){
                            flg = 0;
                            break;
                        }
                    }
                    if(flg){
                        DataMap[res] = i;
                        res++;
                    }
                }
            }
        }
    }
    return res;
}
int main(){
    int n,i;
    scanf("%d",&n);
    for(i  = 1;i<=n;i++){
        int tmp;
        scanf("%d",&tmp);
        printf("case#%d\n%d\n",i,SinNum(tmp));
    }
    return 0;
}