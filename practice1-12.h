#include<stdio.h>
#define IN 1
#define OUT 0

void practice();      //��������
void diamod();
void practice()      //��дһ��������ÿ��һ�����ʵ���ʽ��ӡ�����롣
{
    int c, state;        //state�ǲ����������ڼ�¼����������Ƿ��ڵ����ڲ���
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


void diamod()//����diamond��ӡһ�����Ρ�numΪ����
{   
    int num, graph;
    scanf_s("%d %c",&num,&graph, sizeof(num));
    if (!(num & 1)) {          // &������,��num�Ķ����������һλ��1,0��1����0,1��1����1���ж�num�Ƿ���ż����
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






