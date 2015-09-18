//
//  main.c
//  EnumerateMatchC
//
//  Created by 林东杰 on 9/18/15.
//  Copyright (c) 2015 anta. All rights reserved.
//

#include <stdio.h>

int fun(int x) {
    // 用来计数的变量
    int num = 0 ;
    int f[10] = {6,2,5,5,4,5,6,3,7,6};
    while (x/10 != 0) {
        num +=f[x%10];
        x = x/10;
    }
    num +=f[x];
    return num;
}

int main(int argc, const char * argv[]) {
    
    int a,b,c,m,sum=0;
    scanf("%d",&m);
    
    //开始枚举
    for (a=0; a<1111; a++) {
        for (a=b;b<11111; b++) {
            c = a+b;
            if(fun(a) + fun(b) ==m-4) {
                printf("%d+%d=%d\n",a,b,c);
                sum++;
            }
        }
    }
    printf("一共可以拼出%d个不同的等式",sum);
    getchar();getchar();
    return 0;
}
