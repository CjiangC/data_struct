//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "define.h"
//#include <stdlib.h>
//
//typedef int LIElemtype;
////创建头结点结构体
//typedef struct _Node
//{
//	LIElemtype data;		//存放单个节点的数据
//	struct _Node* next;		//存放下个节点的地址
//}LNode, * LinkList;
//
//
//
//Status InitLL(LinkList* L) // L是个二级指针
//{
//	(*L) = (LinkList)malloc(sizeof(LNode));
//	(*L)->data = 0;
//	(*L)->next = NULL;
//	return OK;
//}
//
//
//void creatList_R(LinkList L, int n)
//{
//	LinkList r = L;	//尾指针r指向链表的尾部
//	printf("please input %d number\n:", n);
//	for (int i = 4; i > 0; i--)
//	{
//		printf("%d\n", i);
//		LinkList p = (LinkList)malloc(sizeof(LNode));//指针变量P指向堆内存的一块空间
//		int data;
//		scanf("%d\n", &data);
//		p->data = data;
//		p->next = NULL;
//		r->next = p;
//		r = p;
//	}
//}
//
//void printList(LinkList L)
//{
//	if (!L || L->next == NULL)
//		exit(-1);
//	LinkList p = L->next;
//	while (p)
//	{
//		printf("%d\n", p->data);
//		p = p->next;
//	}
//
//}
//
//int main()
//{
//	LinkList L;
//	InitLL(&L);
//	creatList_R(L,4);
//	printList(L);
//	return 0;
//}
