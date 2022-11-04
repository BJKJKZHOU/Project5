#include<stdio.h>
#define IN 1
#define OUT 0

void practice();      //函数声明
void diamod();
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


void diamod()//函数diamond打印一个菱形。num为奇数
{   
    int num, graph;
    scanf_s("%d %c",&num,&graph, sizeof(num));
    if (!(num & 1)) {          // &与运算,将num的二进制数最后一位与1,0与1等于0,1与1等于1。判断num是否是偶数。
        printf("wrong\n");   
        return;
    }
    int i, j, count;
    count = -1;
    for (i = num / 2; i >= 0; --i) {
        count += 2;                    // count = count + 2
        for (j = i; j > 0; --j)
            printf("\t");
        for (j = count; j > 0; --j)
            printf("%c\t", graph);
        printf("\n");
    }
    for (i = num / 2 + 1; i < num; ++i) {
        for (j = i - num / 2; j > 0; --j)
            printf("\t");
        for (j = count - 2; j > 0; --j)
            printf("%c\t", graph);
        printf("\n");
        count -= 2;
    }
}






