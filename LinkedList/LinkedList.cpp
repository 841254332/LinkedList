//
//  LinkedList.cpp
//  LinkedList
//
//  Created by luojiahua on 16/9/11.
//  Copyright © 2016年 luojiahua. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int ElemType;

typedef struct Node{
    int data;
    struct Node *next;
}Node, *LinkList;

Status init(LinkList &L){
    L = new Node;
    L->next = NULL;
    return OK;
}

Status GetElem_L(LinkList L, int i, ElemType e){
    Node *p;
    int j;
    p=L->next;
    while (p&&j<i) {
        p = p->next;
        j++;
    }
    if (!p||j>i) {
        return ERROR;
    }
    e = p->data;
    return OK;
}





