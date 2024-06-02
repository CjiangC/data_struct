//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "define.h"
//#include <stdlib.h>
//
//
//typedef struct LNode {
//    int data;
//    struct LNode* next;
//} LNode,*LinkList ;
//
//LNode* createNode(int data) {
//    LNode* newNode = (LNode*)malloc(sizeof(LNode));
//    if (newNode == NULL) {
//        printf("Memory allocation failed!");
//        exit(1);
//    }
//    newNode->data = data;
//    newNode->next = NULL;
//    return newNode;
//}
//
//LNode* initializeList() {
//    LNode* head = createNode(1);
//    LNode* node2 = createNode(2);
//    LNode* node3 = createNode(3);
//    head->next = node2;
//    node2->next = node3;
//    return head;
//}
//
//void printList(LNode* head) {
//    LNode* curr = head;
//    while (curr != NULL) {
//        printf("%d ", curr->data);
//        curr = curr->next;
//    }
//    printf("");
//}
//
//
////获取元素
//Status getElem(LinkList L,int post,int *e)
//{
//    LinkList p = L->next;
//    int i = 1;  //使i和p的位置同步，既1代表着p在链表中的位置
//    if (post < 1 || !p)
//        return ERROR;
//    while (p && i < post)   //查找post序号的位置
//    {
//        p = p->next;
//        i++;
//    }
//    *e = p->data;
//
//    return OK;
//
//}
//
//
//int main() {
//    LNode* head = initializeList();
//    printList(head);
//    int* e = (int *)malloc(sizeof(int));
//    getElem(head, 2, e);
//    printf("%d\n", *e);
//    return 0;
//}