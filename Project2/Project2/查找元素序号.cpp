#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "define.h"
#include <stdlib.h>


typedef struct LNode {
    int data;
    struct LNode* next;
} LNode, * LinkList;

LNode* createNode(int data) {
    LNode* newNode = (LNode*)malloc(sizeof(LNode));
    if (newNode == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

LNode* initializeList() {
    LNode* head = createNode(1);
    LNode* node2 = createNode(2);
    LNode* node3 = createNode(3);
    head->next = node2;
    node2->next = node3;
    return head;
}

void printList(LNode* head) {
    LNode* curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("");
}


LinkList locateElem(LinkList L, int e)
{
    LinkList p = L->next;
    while (p && p->data != e)
    {
        p = p->next;
    }
    if (!p)
        return NULL;    //如果地址p为空，说明e不在链表中
    return p;

}


int main() {
    LNode* head = initializeList();
    printList(head);
    LinkList L = locateElem(head, 2);
    if (!L)
    {
        printf("没有这个数据\n");
    }else
        printf("%d\n", L->data);
    
    
    return 0;
}