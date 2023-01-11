#include<stdio.h>
#include<stdlib.h>
char findMax(char str[]){
    int i  = 1;
    char max  =  str[0];
    while(str[i] !='\0' && str[i]!='\n'){
        if(max < str[i]){
            max = str[i];
        }
        i++;
    }
    return max;
}
int main(){
    char data[999];
    while (scanf("%[^\n]",data)!=EOF)
    {
        getchar();
        char max  = findMax(data);
        int i = 0;
        while (data[i] !='\0' && data[i]!='\n')
        {
            if(data[i] == max){
                printf("%c(max)",data[i]);
            }else{
                printf("%c",data[i]);
            }
            i++;
        }
        printf("\n");
    }
    return 0;
}