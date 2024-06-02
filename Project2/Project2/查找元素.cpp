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
////��ȡԪ��
//Status getElem(LinkList L,int post,int *e)
//{
//    LinkList p = L->next;
//    int i = 1;  //ʹi��p��λ��ͬ������1������p�������е�λ��
//    if (post < 1 || !p)
//        return ERROR;
//    while (p && i < post)   //����post��ŵ�λ��
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