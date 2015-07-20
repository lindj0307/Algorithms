//
//  main.c
//  Pointer
//
//  Created by 林东杰 on 15/7/14.
//  Copyright (c) 2015年 Anta. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    /* p1
    int a=10;
    int *p;
    p=&a;
    printf("%d",*p);
     */
    int *p; //定义一个指针p
    p = (int *)malloc(sizeof(int));//指针p获取动态分配的内存空间地址
    *p=10;//向指针p所指向的内存空间存入10
    printf("%d",*p);//输出指针p所指向的内存中的值
    getchar();
    return 0;
}
