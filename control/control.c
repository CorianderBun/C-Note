// C语言中的流程控制语句
// C语言中程序是从main函数的第一行开始，一条语句一条语句执行的
// 但是我们经常会需要重复执行某些语句，或者在特定条件下执行一些特殊语句
// 比如如果需要计算1到100的和可能会需要重复计算100次
// 或者计算除法的时候除数是0，需要输出一些信息告知用户输入错误

// C语言中循环有三种: for, while, do while
#ifdef WIN32
#include <windows.h>
#endif
#include <stdio.h>

int main()
{
#ifdef WIN32
    // SetConsoleOutputCP(65001);
#endif
    printf("使用for循环计算从1加到100的结果:\n");
    int sum = 0;
    int i;
    for (i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    printf("使用for循环计算从1加到100的结果是:%d\n", sum);
    printf("使用while循环计算从1加到100的结果:\n");
    sum = 0;
    i = 1;
    while (i <= 100)
    {
        sum = sum + i;
        i++;
    }
    printf("使用while循环计算从1加到100的结果是:%d\n", sum);

    printf("使用do while循环计算从1加到100的结果:\n");
    sum = 0;
    i = 1;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 100);
    printf("使用do while循环计算从1加到100的结果是:%d\n", sum);
}