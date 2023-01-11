#include<stdio.h>
#include<iostream>
#include<cstring>
#include<math.h>
#include<vector>
using namespace std;
int res = 0;
int map[999];
int k,n;
vector<int> data;
bool isp(int num){
    for(int i =2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
bool cf(int  num){
    for(int i  = 0;i<data.size();i++){
        if(data[i] == num){
            return false;
        }
    }
    return true;
}
void dfs(int start,int geshu,int sum){
    if(geshu == k){
        if(isp(sum)&&cf(sum)){
            //cout << sum<<endl;
           res++;
        }
         return;
    }
    for(int i  = start;i<n;i++){
        dfs(i+1,geshu+1,sum+map[i]);
    }
}
int main(){
    scanf("%d%d",&n,&k);
    for(int i  = 0;i<n;i++){
        cin >> map[i];
    }
    dfs(0,0,0);
    cout << res<<endl;
    return 0;
}