//#define _CRT_SECURE_NO_WARNINGS
//
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
//}LNode,*LinkList;
//
//
//Status InitLL(LinkList* L) // L�Ǹ�����ָ��
//{
//	(*L) = (LinkList)malloc(sizeof(LNode));
//	(*L)->data = 0;
//	(*L)->next = NULL;
//	return OK;
//}
////ͷ�巨
//void creaLL_H(LinkList L, int n)
////n��ʾ��Ҫ���뼸��Ԫ��
//{
//	
//	printf("please input %d number\n:", n);
//	for (int i = n; i > 0; i--)
//	{
//		LinkList p = (LinkList)malloc(sizeof(LNode));//ָ�����Pָ����ڴ��һ��ռ�
//		int data;
//		scanf("%d", &data);		
//		p->data = data;
//		p->next = L->next;
//		L->next = p;
//	}
//}
//
////��ӡ
//void printLink(LinkList L)
//{
//	if (!L || L->next == NULL)
//		exit(-1);
//	LinkList p = L->next;
//	while (p)
//	{
//		printf("%d\n", p->data);
//		p = p->next;
//	}
//}
//
//int main()
//{
//	LinkList L;
//	InitLL(&L);
//	printf("%d\n", L->data);
//	creaLL_H(L, 5);
//	printLink(L);
//	return 0;
//}
