//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "define.h"
//#include <stdlib.h>
//
//typedef int LIElemtype;
////����ͷ���ṹ��
//typedef struct _Node
//{
//	LIElemtype data;		//��ŵ����ڵ������
//	struct _Node* next;		//����¸��ڵ�ĵ�ַ
//}LNode, * LinkList;
//
//
//
//Status InitLL(LinkList* L) // L�Ǹ�����ָ��
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
//	LinkList r = L;	//βָ��rָ�������β��
//	printf("please input %d number\n:", n);
//	for (int i = 4; i > 0; i--)
//	{
//		printf("%d\n", i);
//		LinkList p = (LinkList)malloc(sizeof(LNode));//ָ�����Pָ����ڴ��һ��ռ�
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
