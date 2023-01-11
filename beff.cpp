#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
typedef string ss;
ss Map[9999];
ss add(ss a,ss b){
    int ad[999]= {0},bd[999]={0},res[999] = {0};
    for(int i = 0;i<a.length();i++){
        ad[i] = a.at(a.length()-i-1)-'0';
    }
    for(int i = 0;i<b.length();i++){
        bd[i] = b.at(b.length()-i-1)-'0';
    }
    int MaxLength  = a.length()>b.length()?a.length():b.length();
    for(int i = 0;i<MaxLength;i++){
        res[i] += ad[i] + bd[i] ;
        if(res[i]>=10){
            res[i+1] +=1;
            res[i] = res[i]%10;
        }
    }
    int lens = res[MaxLength]==0?MaxLength:MaxLength+1;
    ss outres  = "";
    for(int i = lens-1;i>=0;i--){
        outres+=to_string(res[i]);
    }
    return outres;
}
int main(){
    int m,n;
    //m->n
    scanf("%d%d",&m,&n);
    Map[m]  = "1";
    Map[m+1]  = "1";
    Map[m+2]  = "2";
    for(int i  = m+3;i<=n;i++){
        Map[i] = add(Map[i-1],Map[i-2]) ;
    }
    printf("%s",Map[n].c_str());
    return 0;
}