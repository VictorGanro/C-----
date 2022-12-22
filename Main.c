#include<stdio.h>
#include<stdlib.h>
int StudentNum  = 0 ;
char StudentStute[7][50] = {"在校","退学","休学","毕业","转专业"};
//                             0     1      2     3       4
void Exit();
void StudentPrintSelect(int StudentPos);
void AdminPrintSelect();
void  InputData();
int FindStuent(char xuehao[]);
void delete();
void SearchStudent();
void ChangeInf();
void PrintChangeList(int StudentPos);
void ChangeInf();
void printStudnetInf(int Postion);
void PrintYiDongStudet();
void DengLu();
void StuentZZY(int Pos);
void ChangeStute(int Pos ,int zt);
void ChangeThePassWordStuent(int Pos);
typedef struct
{
    //的学号、姓名、性别、年龄、籍贯、系别、专业、班级，修改已知学号的学生信息
    char xuehao[999]; //学号
    char Name[999]; //姓名
    int Sex;  //性别
    char Xi[999]; //系别
    int Age; //年龄
    int nianji; // 年级
    char JiGuan[999]; //籍贯
    char Zhaun[999]; //专业
    char Bclass[999];  //班级
    int Stute; //学生的状态 通过索引获取文字
    char PassWord[999]; //学生登陆时用的密码
    /* data */
}StudentInf;
StudentInf Data[999];
//、如人学、转专业、退学、降级、休学、毕业。
void AdminPrintSelect(){  //管理员的操作面板信息
    printf("输入0:退出程序\n");
    printf("输入1:写入学生学籍信息\n");
    printf("输入2:删除学生学籍信息\n");
    printf("输入3:修改学生学籍信息或学生登陆密码\n");
    printf("输入4:查找已知学号学生信息\n");
    printf("输入5:按班级输出学生信息表\n");
    printf("输入6:查看学籍异动情况\n");
    printf("输入7:登出（注销）\n");
    int gflg  = 1;
    do{
        printf("请输入菜单命令:");
        int command;
        scanf("%d",&command);
        switch (command)
        {
        case 0/* constant-expression */:
            Exit();
            /* code */
            break;
        case 1:
            InputData();
            break;
        case 2:
            delete();
            break;
        case 3:
            ChangeInf();
        case 4:
            SearchStudent();
            break;
        case 5:
            ShowStuentBnaji();
            break;
        case 6:
            PrintYiDongStudet();
            break;
        case 7:
            gflg =0;
            break;
        default:
            printf("不存在改命令!\n");
            break;
        }
    }while(1&&gflg);
}
void StudentPrintSelect(int StudentPos){ // 打印学生客户端的操作信息
    printf("输入0:退出程序\n");
    printf("输入1:转专业\n");
    printf("输入2:退学\n");
    printf("输入3:降级\n");
    printf("输入4:休学\n");
    printf("输入5:毕业\n");
    printf("输入6:修改登陆密码\n");
    printf("输入7:查看当前学籍信息\n");
    printf("输入8:登出（注销）\n");
    int lflg = 1;
    do
    {
        printf("请输入菜单命令:");
        int command;
        scanf("%d",&command);
        switch (command)
        {
        case 0:
            Exit();
            /* code */
            break;
        case 1:
            StuentZZY(StudentPos);
            break;
        case 2:
            ChangeStute(StudentPos ,1);
            break;
        case 3:
            ChangeStute(StudentPos ,2);
            break;
        case 4:
            ChangeStute(StudentPos ,3);
            break;
        case 5:
            ChangeStute(StudentPos ,4);
            break;
        case 6:
            ChangeThePassWordStuent(StudentPos);
            break;
        case 7:
            printf("%5s %5s %5s %5s %5s %5s %5s %5s %5s %5s %5s\n\n","学号","姓名","性别","系别","年龄","年级","籍贯","专业","班级","学生状态","该生登录密码");
            printStudnetInf(StudentPos);
        case 8:
            lflg = 0;
            break;
        default:
            printf("不存在改命令!\n");
            break;
        }

    } while (1&&lflg);
    
}

void Exit(){ //退出程序
    exit(0);
}

void  InputData(){ //管理员写入学生信息
    printf("输入该生的基本信息:%5s %5s %5s(0[女]/1[男]) %5s %5s %5s(输入数字) %5s %5s %5s\n","学号","姓名","性别","系别","年龄"," 年级","籍贯","专业","班级");
    printf(":");
    scanf("%s %s %d %s %d %d %s %s %s",Data[StudentNum].xuehao,Data[StudentNum].Name,&Data[StudentNum].Sex,Data[StudentNum].Xi,&Data[StudentNum].Age,&Data[StudentNum].nianji,Data[StudentNum].JiGuan,Data[StudentNum].Zhaun,Data[StudentNum].Bclass);
	Data[StudentNum].Stute = 0;
    strcpy(Data[StudentNum].PassWord,"123456"); // 默认密码为123456
    StudentNum++;//学生数加1; 数组从0开始
    printf("--------------添加完毕--------------\n\n");
}
int FindStuent(char xuehao[]){ //查找改学生的下标
	int i;
    for(i  = 0;i<StudentNum;i++){ 
        if(strcmp(Data[i].xuehao,xuehao)==0){
            return i; //返回找到的下标
        }
    }
    return -1;// -1为找不到该学生
}
void delete(){
    printf("输入删除学生的学号:");
    char xuehao[999];
    scanf("%s",xuehao);
    int StudentPos  =  FindStuent(xuehao);
    if(StudentPos){
        printf("未查到到该学号的信息!\n");
        printf("-------------结束请重新输入菜单命令加载----------\n\n");
    }else{
        int i ;
        for(i = StudentPos+1;i<StudentNum;i++){
            strcmp(Data[i-1],Data[i]);
        }
        StudentNum -- ;
        printf("-----------------删除成功!--------------------\n\n");
    }
}
void SearchStudent(){
    printf("请输入查找学生的学号:");
    char XueHao[999];
    scanf("%s",XueHao);
    int PosSutent  = FindStuent(XueHao);
    if(PosSutent == -1){
        printf("查找不到改学生!\n");
    }else{
        //char Sex[999] = Data[PosSutent].Age?"男":"女";
        printf("%5s %5s %5s %5s %5s %5s %5s %5s %5s %5s %5s\n\n","学号","姓名","性别","系别","年龄","年级","籍贯","专业","班级","学生状态","该生登录密码");
        printf("%5s %5s %5d %5s %5d 大%d %5s %5s %5s %5s %5s\n\n",Data[PosSutent].xuehao,Data[PosSutent].Name,Data[PosSutent].Sex,Data[PosSutent].Xi,Data[PosSutent].Age,Data[PosSutent].nianji,Data[PosSutent].JiGuan,Data[PosSutent].Zhaun,Data[PosSutent].Bclass,StudentStute[Data[PosSutent].Stute],Data[PosSutent].PassWord);
        printf("-----------------查找完毕------------------\n\n");
    }
}
void PrintChangeList(int StudentPos){
    printf("输入0:退出修改\n");
    printf("输入1:修改学号\n");
    printf("输入2:修改姓名\n");
    printf("输入3:修改性别\n");
    printf("输入4:修改系别\n");
    printf("输入5:修改年龄\n");
    printf("输入6:修改年级\n");
    printf("输入7:修改籍贯\n");
    printf("输入8:修改专业\n");
    printf("输入9:修改班级\n");
    printf("输入10:修改学生状态\n");
    printf("输入11:修改学生登陆密码\n");
    printf("输入12:完全覆盖\n");
    int flg  = 1;
    do{
        printf("请输入修改菜单命令:");
        int Command;
        scanf("%d",&Command);
        switch(Command){
            case 0:
                flg = 0;
                break;
            case 1:
                char xuhaos[999];
                printf("请输入学号:");
                scanf("%s",xuhaos);
                strcpy(Data[StudentPos].xuehao,xuhaos);
                printf("-------------修改成功------------\n");
                break;
            case 2:
                char Name[999];
                printf("请输入名字:");
                scanf("%s",Name);
                strcpy(Data[StudentPos].Name,Name);
                printf("-------------修改成功------------\n");
                break;
            case 3 :
                int sex;
                printf("请输入性别0[女]/1[男]:");
                scanf("%d",&sex);
                Data[StudentPos].Sex = sex;
                printf("-------------修改成功------------\n");
                break;
            case 4:
                char Xi[999];
                printf("请输入系别:");
                scanf("%s",Xi);
                strcpy(Data[StudentPos].Xi,Xi);
                printf("-------------修改成功------------\n");
                break;
            case 5:
                int Age;
                printf("请输入年龄:");
                scanf("%d",&Age);
                Data[StudentPos].Age = Age;
                printf("-------------修改成功------------\n");
                break;
            case 6:
                int nianji;
                printf("请输入年级:");
                scanf("%d",&nianji);
                Data[StudentPos].nianji =nianji;
                printf("-------------修改成功------------\n");
                break;
            case 7:
                char JiGuan[999];
                printf("请输入籍贯:");
                scanf("%s",JiGuan);
                strcpy(Data[StudentPos].JiGuan,JiGuan);
                printf("-------------修改成功------------\n");
                break;
            case 8:
                char Zhaun[999];
                printf("请输入专业:");
                scanf("%s",Zhaun);
                strcpy(Data[StudentPos].Zhaun,Zhaun);
                printf("-------------修改成功------------\n");
                break;
            case 9:
                char Bclass[999];
                printf("请输入班级:");
                scanf("%s",Bclass);
                strcpy(Data[StudentPos].Bclass,Bclass);
                printf("-------------修改成功------------\n");
                break;
            case 10:
                int Stute;
                printf("1.在校 2.退学 3.休学 4.毕业 5.转专业\n");
                printf("请输入学生状态(输入数字):");
                scanf("%d",&Stute);
                Data[StudentPos].Stute =Stute;
                printf("-------------修改成功------------\n");
                break;
            case 11:
                char PassWord[999];
                printf("请输入新密码:");
                scanf("%s",PassWord);
                strcpy(Data[StudentPos].PassWord,PassWord);
                printf("-------------修改成功------------\n");
                break;
            case 12:
                printf("输入该生的基本信息:%5s %5s %5s(0[女]/1[男]) %5s %5s %5s(输入数字) %5s %5s %5s\n","学号","姓名","性别","系别","年龄"," 年级","籍贯","专业","班级");
                printf(":");
                scanf("%s %s %d %s %d %d %s %s %s",Data[StudentPos].xuehao,Data[StudentPos].Name,&Data[StudentPos].Sex,Data[StudentPos].Xi,&Data[StudentPos].Age,&Data[StudentPos].nianji,Data[StudentPos].JiGuan,Data[StudentPos].Zhaun,Data[StudentPos].Bclass);
	            Data[StudentPos].Stute = 0;
                strcpy(Data[StudentPos].PassWord,"123456");
                printf("-------------修改成功------------\n");
                break;
            default:
                printf("未知命令!\n");
                break;
        }
    }while (1&&flg);
}
void ChangeInf(){
    printf("输入修改学生的学号:\n");
    char xuehao[999];
    scanf("%s",xuehao);
    int STPOS  =  FindStuent(xuehao);
    if(STPOS == -1){
        printf("未找到该学生\n");
        printf("-------------结束请重新输入菜单命令加载----------\n\n");
    }else{
        PrintChangeList(STPOS);
        printf("------------------修改结束--------------------\n\n");
    }
}
void printStudnetInf(int Postion){ //通过下标只有打印学生的信息
    printf("%5s %5s %5d %5s %5d 大%d %5s %5s %5s %5s %5s\n\n",Data[Postion].xuehao,Data[Postion].Name,Data[Postion].Sex,Data[Postion].Xi,Data[Postion].Age,Data[Postion].nianji,Data[Postion].JiGuan,Data[Postion].Zhaun,Data[Postion].Bclass,StudentStute[Data[Postion].Stute],Data[Postion].PassWord);
}
void ShowStuentBnaji(){ // 功能5  按班级输出学生信息表
    char banji[999];
    printf("输入要查找的班级:");
    scanf("%s",banji);
    int i;
    printf("%5s %5s %5s %5s %5s %5s %5s %5s %5s %5s %5s\n\n","学号","姓名","性别","系别","年龄","年级","籍贯","专业","班级","学生状态","该生登录密码");
    for(i=0;i<StudentNum;i++){
        if(strcmp(Data[i].Bclass,banji) == 0){
            printStudnetInf(i);
        }
    }
    printf("--------------------查询完毕！--------------------------\n\n");
}
void PrintYiDongStudet(){ // 用于打印学籍异动的学生
    int i;
    printf("%5s %5s %5s %5s %5s %5s %5s %5s %5s %5s %5s\n\n","学号","姓名","性别","系别","年龄","年级","籍贯","专业","班级","学生状态","该生登录密码");
    for(i=0;i<StudentNum;i++){
        if(Data[i].Stute != 0){
            printStudnetInf(i);
        }
    }
}


void DengLu(){
    printf("输入1:管理员登陆(默认账号密码 admin admin)\n");
    printf("输入2:学生登陆(默认账号密码 学号 123456)\n");
    printf("输入3:退出程序\n");
    while(1){
        printf("请输入登陆方式:");
        int choice;
        scanf("%d",&choice);
        char Zhanghao[999];
        char PassWord[999];
        scanf("%s%s",Zhanghao,PassWord);
        if(choice == 1){
            if(strcmp(Zhanghao,"admin")==0&&strcmp(PassWord,"admin")==0){
                AdminPrintSelect();
            }else{
                printf("账号或者密码错误，请重新输入\n\n");
            }
        }else if(choice == 2){
            int Pos  = FindStuent(Zhanghao);
            if(Pos != -1){
                if(strcmp(Data[Pos].PassWord,PassWord)==0){
                    //登陆成功菜单
                }else{
                    printf("密码错误！请重新输入。\n\n");
                }
            }else{
                printf("不存在该学生账号,请重新输入\n\n");
            }

        }else if(choice ==3){
            exit(0);
        }else{
            printf("未知命令！\n\n");
        }
    }
}
void StuentZZY(int Pos){ //学生专业
    printf("输入转到什么专业:\n\n");
    char zhuanyei[999];
    scanf("%s",zhuanyei);
    int flg;
    printf("确定转专业吗？[0/1]：");
    scanf("%d",&flg);
    if(flg){
        strcpy(Data[Pos].Zhaun,zhuanyei);
        Data[Pos].Stute = 4;
        printf("-------------转专业成功---------------");
    }
}
void ChangeStute(int Pos ,int zt){ // 单纯的改变状态
    printf("确定%s吗?[0/1]:",StudentStute[zt]);
    int flg;
    scanf("%d",&flg);
    if(flg == 1){
        Data[Pos].Stute = zt;
        printf("-------------%s成功---------------",StudentStute[zt]);
    }
}
void ChangeThePassWordStuent(int Pos){
    printf("输入新的密码:");
    char PassWords[999];
    scanf("%s",PassWords);
    printf("确定修改密码吗?[0/1]:");
    int flg;
    scanf("%d",&flg);
    if(flg){
        strcpy(Data[Pos].PassWord,PassWords);
        printf("---------------修改密码成功！------------------\n\n");
    }
}
int main(){
    while(1){
        DengLu();
    }
    return 0;
}
