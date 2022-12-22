#include<stdio.h>
#include<stdlib.h>
int StudentNum  = 0 ;
char StudentStute[7][50] = {"在校","退学","休学","毕业","转专业"};
typedef struct StudentInf
{
    //的学号、姓名、性别、年龄、籍贯、系别、专业、班级，修改已知学号的学生信息
    char xuehao[999]; //学号
    char Name[999]; //姓名
    int Sex; 
    char Xi[999];
    int Age;
    int nianji;
    char JiGuan[999];
    char Zhaun[999];
    char class[999];  
    
    /* data */
}Data[999];

//、如人学、转专业、退学、降级、休学、毕业。
void AdminPrintSelect(){  //管理员的操作面板信息
    printf("输入0:退出程序");
    printf("输入1:写入学生学籍信息");
    printf("输入2:删除学生学籍信息");
    printf("输入3:修改学生学籍信息");
    printf("输入4:查找已知学号学生信息");
    printf("输入5:按班级输出学生籍贯表");
    printf("输入6:查看学籍异动情况");
}
void StudentPrintSelect(){ // 打印学生客户端的操作信息
    printf("输入0:退出程序");
    printf("输入1:转专业");
    printf("输入2:退学");
    printf("输入3:降级");
    printf("输入4:休学");
    printf("输入5:毕业");
}

void Exit(){ //退出程序
    exit(0);
}

void  InputData(){
    printf("输入该生的基本信息:%5s %5s %5s %5s ")
}
int main(){


}