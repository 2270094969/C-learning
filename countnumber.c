#include<stdio.h>
int main()
{
    int n[10];
    int x,i=0;
    for(i=0;i<10;i++){
        n[i]=0;
    }
while(x>=0&&x<10){
    scanf("%d",x);
    n[x]++;
}
for(i=0;i<10;i++){
    printf("%d/n",n[i]);
}
}