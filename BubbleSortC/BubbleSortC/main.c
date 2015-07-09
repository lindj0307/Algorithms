//
//  main.c
//  BubbleSortC
//  冒泡排序算法
//
//  Created by 林东杰 on 15/7/8.
//  Copyright (c) 2015年 Anta. All rights reserved.
//

#include <stdio.h>

struct student
{
    char name[21];
    int score;
};

int main(int argc, const char * argv[]) {
    struct student a[100],t;
    int i,j,n;
    printf("Please enter number of student:");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        printf("Please enter number %d:",i);
        scanf("%s %d",a[i].name,&a[i].score);
    }
    
    printf("The result is :\n ");
    for (i=1; i<=n-1; i++) {
        for (j=1; j<=n-i; j++) {
            if(a[j].score<a[j+1].score) {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    
    for (i=1; i<=n; i++) {
        printf("%s\n ",a[i].name);
    }
    /*
    int a[100],i,j,t,n;
    printf("Please enter number Count:");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        printf("Please enter number %d:",i);
        scanf("%d",&a[i]);
    }
    
    printf("The result is :");
    for (i=1; i<=n-1; i++) {
        for (j=1; j<=n-i; j++) {
            if(a[j]<a[j+1]) {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    
    for (i=1; i<=n; i++) {
        printf("%d ",a[i]);
    }
    */
    
    getchar();
    return 0;
}
