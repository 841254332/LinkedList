//
//  LinkList.c
//  LinkedList
//
//  Created by luojiahua on 16/9/11.
//  Copyright © 2016年 luojiahua. All rights reserved.
//

#include <stdio.h>
#include "stdio.h"
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int ElemType;

typedef struct Node{
    ElemType data;
    struct Node *next;
}Node;

typedef struct Node *LinkList;

