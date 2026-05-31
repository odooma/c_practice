#include <stdio.h>

int main(){
    int lightLevel = -28; //普通变量，里面存着-28
    int *p; //声明一个指针变量p
    p = &lightLevel; // p 现在存着 lightLevle 的门牌号（地址）
    
    printf("光功率值：%d\n",lightLevel); //直接访问
    printf("光功率值：%d\n", *p); // 通过指针访问（*p 表示去 p 存的地址里取值）
    printf("lightLevel 的地址：%p\n", &lightLevel);
    printf("p 里存的门牌号：%p\n", p);

    // 通过指针修改变量的值
    *p = -30; // 去 lightLevel 的房子，把里面的数改成 -30
    printf("修改后光功率：%d\n", lightLevel);

    return 0;
}
