#include<stdio.h>
#include<math.h>
int Pmap[9999];//构建素数表(桶的flg)
int num[9999];//储存素数数组
int check(int n){
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,i; // 数值不会超过2000
    int gs = 0;
    for(i = 1;i<=2000;i++){
        if(check(i)){
            Pmap[i] = 1;
            num[i] = i;
            gs++;
        }
    }
    while (scanf("%d",&n)!=EOF,n)
    {
        int ps = 1;
        int res = 0;
        while (num[ps]<n/2)
        {
            if(Pmap[num[ps]]&&Pmap[n-num[ps]]){
                //printf("%d  %d\n",num[ps],n-num[ps]);
                res++;
            }
            ps++;
        }
        printf("%d\n",res);
    }
    return 0;
}