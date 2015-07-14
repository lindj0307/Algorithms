//
//  main.c
//  QueueQQNumberC
//
//  Created by 林东杰 on 15/7/14.
//  Copyright (c) 2015年 Anta. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int q[102] = { 0,6,3,1,7,5,8,9,2,4 },head,tail;
    head = 1;
    tail = 10;
    while (head<tail) {
        printf("%d",q[head]);
        head++;
        q[tail] = q[head];
        tail++;
        head++;
    }    
    getchar();
    return 0;
}
