//
//  main.c
//  LinkListC
//
//  Created by 林东杰 on 15/7/20.
//  Copyright (c) 2015年 Anta. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(int argc, const char * argv[]) {
    struct node *head,*p,*q,*t;
    int i,n,a;
    scanf("%d",&n);
    //头指针初始化为空
    head = NULL;
    //循环输入N个数
    for (i=1; i<=n; i++) {
        scanf("%d",&a);
        //动态申请一个空间,用来存放一个结点,并用临时指针p指向这个结点
        p = (struct node *)malloc(sizeof(struct node));
        //将数据存储到当前结点的data域中
        p->data = a;
        //设置当前结点的后继指针指向空
        p->next = NULL;
        if (head == NULL) {
            head = p;
        } else {
            p -> next =p;
        }
        q=p;
    }
    
    scanf("%d", &a);
    t=head;
    while (t!=NULL) {
        //如果当前结点下一个结点的值大于待插入数,将数插入到中间
        if (t->next->data > a) {
            //申请一个空间用来存放新增结点
            p = (struct node *)malloc(sizeof(struct node));
            p -> data =a ;
            p ->next =t->next;
            t->next =p;
            break;
            
        }
        t=t->next;
    }
    t= head;
    while (t!=NULL) {
        printf("%d",t->data);
        t=t->next;
    }
    
    getchar();
    return 0;
}
