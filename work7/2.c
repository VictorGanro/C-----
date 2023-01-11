#include<stdio.h>
#include<stdlib.h>
int main(){
    char Map[999]; 
    char data[999];
    fgets(data,999,stdin);
    int i = 0,num=0,p;
    while(data[i]!='\0'){
        int flg = 1;
        if(data[i]>='A'&&data[i]<='Z'){
            for(p = 0 ;p<num;p++){
                if(data[i] == Map[p]){
                    flg = 0;
                    break;
                }
            }
            if(flg){
                Map[num] = data[i];
                num++;
            }
        }
        i++;
    }
    for(i =  0;i<num;i++){
        printf("%c ",Map[i]);
    }
    printf("\n");
    return 0;
}