
//
//  main.c
//  SimpleSortC
//
//  Created by 林东杰 on 15/7/3.
//  Copyright (c) 2015年 Anta. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[1001],i,j,t,n;
    for (i=0; i<=1000; i++) {
        a[i] =0;
    }
    printf("Please enter number Count:");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        printf("Please enter number %d:",i);
        scanf("%d",&t);
        a[t]++;
    }
    
    printf("The result is :");
    for (i=1000; i>=0; i--) {
        for (j=1; j<=a[i]; j++) {
            printf("%d ",i);
        }
    }
    getchar();
    return 0;
}