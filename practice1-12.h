#include<stdio.h>
#define IN 1
#define OUT 0

void practice();      //函数声明

void practice()      //编写一个程序，以每行一个单词的形式打印其输入。
{
    int c, state;        //state是布尔量，用于记录程序处理过程是否在单词内部。
    state = OUT;
    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                putchar('\n');
                state = OUT;
            }
        }
        else if (state == OUT){
                state = IN;
                putchar(c);
        }
        else{
                putchar(c);
        }
        
    }
    return 0;
}