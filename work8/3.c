#include<stdio.h>
#include<string.h>
struct kk
{
    char command[999];
    char id[999];
    char name[999];
    char sex;
    int year;
    int mon;
    int day;
    double a;
    double b;
    double c;
    double sum;
} datalist[999];
int main(){
    int s =  0;
    char command[999];
    while(scanf("%s",command)!=EOF){
        getchar();
        if(strcmp(command,"Quit")==0||strcmp(command,"Exit")==0){
            break;
        }
        strcpy(datalist[s].command,command);
        if(!strcmp(command,"Insert")){
            scanf("%s %s %c %d %d %d %lf %lf %lf",datalist[s].id,datalist[s].name,&datalist[s].sex,&datalist[s].year
            ,&datalist[s].mon,&datalist[s].day,&datalist[s].a,&datalist[s].b,&datalist[s].c);
            datalist[s].sum  = datalist[s].a+datalist[s].b+datalist[s].c;
        }
        getchar();
        s++;
    }
    int i = s;
    for(s = 0 ;s<i;s++){
        printf("%s:\n%s %s %c %d %d %d %.1f %.1f %.1f %.1f\n",datalist[s].command,datalist[s].id,datalist[s].name,
        datalist[s].sex,datalist[s].year,datalist[s].mon,datalist[s].day,datalist[s].a,datalist[s].b,datalist[s].c,datalist[s].sum
        );
    }
    printf("Good bye!\n");
    return 0;
}
