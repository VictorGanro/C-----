#include<stdio.h>
#include<math.h>
void ByteCode(char *pos,int n){
    while(n>0){
        *pos  = n%2+'0';
        pos++;
        n/=2;
    }
    *pos = '\0';
}
int strlen(char map[]){
    int i=0;
    while(map[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        char map[999];
        char *a = &map[0];
        ByteCode(a,n);
        int i;
        for(i=strlen(map)-1;i>=0;i--){
            printf("%c",map[i]);
        }
        printf("\n");
    }
    return 0;
}