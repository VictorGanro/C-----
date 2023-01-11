#include<stdio.h>
#include<stdlib.h>
int check(char s[]){
    if(!((s[0]<='z'&&s[0]>='a')||(s[0]<='Z'&&s[0]>='A')||s[0]=='_')){
        return 0;
    }
    int p  =1;
    while (s[p]!='\0'&&s[p]!='\n')
    {
        if(((s[p]<='z'&&s[p]>='a')||(s[p]<='Z'&&s[p]>='A')||s[p]=='_'||(s[p]<='9'&&s[p]>='0'))){
            p++;
        }else{
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,i;
    scanf("%d",&n);
    getchar();
    for(i = 1;i<=n;i++){
        char tmp[999];
        fgets(tmp,999,stdin);
        if(check(tmp)){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}