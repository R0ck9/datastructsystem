/*************************************************************************
	> File Name: mstrstr.c
	> Author: liqian
	> Mail: 971728754@qq.com
	> Created Time: 2018年12月29日 星期六 19时07分12秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

char mstr[]="How\0are\0you\0";

int main()
{
    int l = strlen(mstr);
    printf("l=%d",sizeof(mstr));
    while(mstr++ != '\0\0')
    {
        

    }
    return 0;
}
