#include<stdio.h>
#include<stdlib.h>
// -1 错误字符 0 数字组 1小写组 2大写组 3 奇怪字符组
int Check(char a){
    if('a'<=a&&a<='z'){
        return 1;
    }
    if('A'<=a&&a<='Z'){
        return 2;
    }
    if('0'<=a&&a<='9'){
        return 0;
    }
    if(a == '~' || a  == '!' || a== '@' || a == '#' || a == '$' || a == '%' || a == '^'){
        return 3;
    }
    return -1;
}
int main(){
    int n,i;
    scanf("%d",&n);
    getchar();
    for(i = 1 ;i<=n;i++){
        int num[5] = {0};
        char str[999];
        fgets(str,999,stdin);
        int u  = 0;
        int flg =  1;
        while (str[u]!='\0' && str[u]!='\n')
        {
            int group  =  Check(str[u]);
            if(group == -1){
                flg  = 0;
            }
            num[group] = 1;
            u++;
        }
        if(flg){
            if(num[0]+num[1]+num[2]+num[3] >= 3){
                flg = 1;
            }else{
                flg  =  0;
            }
        }
        if(flg){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}