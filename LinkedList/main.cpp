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

void CreateList_F(LinkList &L, int n){
    L = new Node;
    L->next = NULL;
    for(int i = n; i>0; --i){
        Node *p = new Node;
        cin>>p->data;
        p->next = L->next;
        L->next = p;
    }
}

void CreateList_L(LinkList &L, int n){
    L = new Node;
    L->next = NULL;
    Node *r = new Node;
    r = L;
    for(int i = 0; i<n; i++){
        Node *p = new Node;
        cin>>p->data;
        p->next = NULL;
        r->next = p;
        r = p;
    }
}

void ShowList(LinkList L){
    Node *p = new Node;
    Node *r = new Node;
    r = L;
    while ((p = r->next)!= NULL) {
        cout<<p->data<<"->";
        r = r->next;
    }
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

int main(int argc, const char * argv[]) {
    // insert code here...
    Node *L = new Node;
    int n = 5;
    CreateList_L(L, n);
    ShowList(L);
}





