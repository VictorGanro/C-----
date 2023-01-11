#include<stdio.h>
#include<stdlib.h>
int strlen(char str[]){
    int s = 0;
    while(str[s]!='\0'){
        s++;
    }
    return s-1;
}
int strrindex(char s[], char t[]){
    int i,o;
    int res   =  -1;
    for(i = 0 ;i<strlen(s)-strlen(t);i++){
        int flg  = 1;
        for(o = 0;o<strlen(t);o++){
            if(s[i+o] !=t[o]){
                flg = 0;
                break;
            }
        }
        if(flg){
            res  = i;
        }
    }
    return res;
}
int main(){
    char s[999];
    fgets(s,999,stdin);
    char t[999];
    fgets(t,999,stdin);
    printf("%d\n",strrindex(s,t));
    return 0;
}