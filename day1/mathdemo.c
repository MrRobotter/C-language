#include<math.h>
# include<stdio.h>
int main()
{
    float x,s;
    printf("请输入数字:\n");
           scanf("%1f",&x);
    s=sin(x);
    printf("sin of %1f is %1f\n",x,s);
    return 0;
}

 /* include 称为文件包含命令*/
 /* 扩展名为.h的文件称为头文件*/
 /* 定义两个实数变量，以被后面程序使用*/
 /* 显示提示信息*/
 /* 从键盘获得一个实数x*/
 /* 求X的正弦，并把它赋值给变量s*/
 /* 显示程序运算结果*/

