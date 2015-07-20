//
//  main.c
//  StackC
//
//  Created by 林东杰 on 15/7/20.
//  Copyright (c) 2015年 Anta. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char a[101],s[101];
    int i,len,mid,next,top;
    //读入一行字符串
    gets(a);
    //获得字符串的长度
    len = strlen(a);
    //获得中间位置
    mid = len / 2 - 1;
    
    //初始化栈
    top =0;
    for (i=0; i<=mid; i++) {
        s[++top] = a[i];
    }
    
    if (len %2==0) {
        next = mid +1;
    } else {
        next = mid +2;
    }
    
    //开始匹配
    for (i = next; i<=len -1 ; i++) {
        if(a[i]!=s[top])break;
        top--;
    }
    
    if (top==0) {
        printf("yes");
    } else {
        printf("no");
    }
    
    getchar();
    return 0;
}
