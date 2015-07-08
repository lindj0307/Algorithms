//
//  main.c
//  BubbleSortC
//  冒泡排序算法
//
//  Created by 林东杰 on 15/7/8.
//  Copyright (c) 2015年 Anta. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[100],i,j,t,n;
    printf("Please enter number Count:");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        printf("Please enter number %d:",i);
        scanf("%d",&a[i]);
    }
    
    printf("The result is :");
    for (i=1; i<=n-1; i++) {
        for (j=1; j<=n-1; j++) {
            if(a[j]>a[i]) {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    
    for (i=1; i<=n; i++) {
        printf("%d ",a[i]);
    }
        
        getchar();
    return 0;
}
