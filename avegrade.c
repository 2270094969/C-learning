/*#include<stdio.h>
int main()
{
    double n[100];
    double x,sum=0;
    int i=0,j=0;
    scanf("%lf",&x);
    while(x!=-1){
n[i]=x;
i=i+1;
sum=sum+n[i];
    }
for(j=0;j<i;j++){
    if(n[j]<(sum/i)){printf("%f",n[j]);}
}
}*/
/*scanf("%lf",x); 少了取地址符 &，应该是 &x
while 循环里没有再次读取 x，会死循环
sum 没有初始化，会是随机垃圾值
求和顺序错了：先给 n[i] 赋值，再 i+1，然后加 n[i] 就加错了
*/

#include<stdio.h>
int main()
{
    double n[100];
    double x, sum = 0.0;  // sum 必须初始化
    int i = 0, j = 0;

    // 第一次读取 x
    scanf("%lf", &x);  // 必须加 & 取地址

    while (x != -1) {
        n[i] = x;
        sum = sum + n[i];  // 先累加
        i = i + 1;         // 再加下标
        scanf("%lf", &x);  // 循环内必须再次读取 x
    }

    // 防止 i=0 除 0 崩溃
    if (i > 0) {
        double avg = sum / i;  // 计算平均值
        printf("平均值：%f\n小于平均值的数：", avg);
        
        for (j = 0; j < i; j++) {
            if (n[j] < avg) {
                printf("%f ", n[j]);
            }
        }
    } else {
        printf("未输入任何数字\n");
    }

    return 0;
}