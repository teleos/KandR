//
// Created by Administrator on 2019/1/24.
//

#include "word.h"
#include <stdio.h>

void countWord(void)
{
    int c,nl,nw,nc,state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c =='\n' || c == '\t'){
            state = OUT;
        } else if (state == OUT){
            state = IN ;
            ++ nw;
        }

    }

    printf("%d %d %d\n",nl,nw,nc);

}


/**
ͳ�Ƹ������֡��հ׷��������ַ����ֵĴ��� 
*/
void countWordTimes (void) 
{ 
	int c,i ,nwhite,nother;
	int ndigit[10];  //��������
	
	nwhite = nother = 0;
	for(i = 0;i<10 ; i++) 
		ndigit[i] = 0;   //��ʼ������
		
	while((c = getchar())!=EOF){
		if(c>='0' && c<='9')
			++ ndigit[c-'0'];
		else if(c=='\t' || c=='\n' || c==' ')
			++ nwhite;
		else
			++ nother;
	} 
	
	printf("digits =");
	for(i = 0;i < 10; i++)
	{
		printf("ndigit[%d]= %d\n",i, ndigit[i]);
	}
	printf(", white space = %d,other = %d\n",nwhite,nother);
}

