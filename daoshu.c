#include<stdio.h>
int main()
{
    char num[6];
    int len=0
    ;
    scanf("%s",num);
    while(num[len]!='\0'){len++;}//反斜杠
    if (len>5){printf("error");}
    int i;
    for(i=len-1;i>=0;i--){
        printf("%c",num[i]);//打印单个字符用c
    }
    return 0;

}