#include<stdio.h>
#define IN 1
#define OUT 0

void practice();      //��������

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