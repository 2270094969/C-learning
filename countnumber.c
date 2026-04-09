#include <stdio.h>

int main()
{
    int n[10];
    int x, i = 0;
    
    // 初始化数组为 0
    for(i = 0; i < 10; i++){
        n[i] = 0;
    }

    // 关键：必须先读取 x，再判断！
    scanf("%d", &x);
    while(x != -1){
        if(x >= 0 && x < 10)
        {
            n[x]++;
        }
        // 循环内继续读取
        scanf("%d", &x);
    }

    // 输出结果
    for(i = 0; i < 10; i++){
        printf("%d\n", n[i]);
    }
    
    return 0;
}
