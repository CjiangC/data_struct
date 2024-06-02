#include "stdio.h"
#include "define.h"
#include <stdlib.h>
#define SQLMAXSIZE 100
/*
	initList()	
	�������������һ���յ����Ա�

	destoryList()
	��ʼ�����������Ա�L�Ѿ�����
	����������������Ա�

	clearList()
	��ʼ���������Ա�L�Ѿ�����
	��������������Ա�����Ϊ�ձ�

	listEmpty()
	��ʼ���������Ա��Ѵ���
	��������������Ա�LΪ�ձ��򷵻�Ture�����򷵻�FALSE

	listLength(L)
	��ʼ�������Ա�L�Ѿ�����
	����������������Ա�L �е�����Ԫ�ظ���

	getElem(L,i,&e);
	��ʼ���������Ա�L�Ѿ����ڣ�1<=i<=listLength(L)
	����������e�������Ա�L�е�i������Ԫ�ص�ֵ

	locateElem(L,e,compare());
	��ʼ���������Ա�L�Ѿ����ڣ�compare()�� ����Ԫ���жϺ���
	�������������L�е�1����e����compare()������Ԫ�ص�λ��
	������������Ԫ�ز������򷵻�ֵΪ0

	priorElem(L,cur_e,&pre_e);
	��ʼ���������Ա�L�Ѿ����ڡ�
	�����������cur_e��L������Ԫ�أ��Ҳ��ǵ�һ����
	����pre_e��������ǰ�����������ʧ�ܣ�pre_e������

	nextElem(L,cur_e,&next_e)
	��ʼ���������Ա�L�Ѿ����ڡ�
	�����������cur_e��L������Ԫ�أ��Ҳ������һ����
	����next_e�������ĺ�̣��������ʧ�ܣ�pre_e������

	listInsert(&L,i,e)
	��ʼ���������Ա�L�Ѿ�����, 1<= i <= listLength(L) + 1��
	�����������L�ĵ�i��λ��֮ǰ����������Ԫ��e��L�ĳ��ȼ�1

	listDelete(&L,i,&e)
	��ʼ���������Ա�L�Ѿ�����, 1<= i <= listLength(L)
	���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�һ
		ɾ��ǰ������Ϊn��
		ɾ���󣨳���n-1��
*/

typedef struct
{
	ElemType* data;		//int ����
	int length;
} Sqlist;	//˳�������

//initList()
//�������������һ���յ����Ա�
Status initList(Sqlist *L,int length)
{
	//��ʼ���ռ�
	L->data = (int *)malloc(sizeof(int) * SQLMAXSIZE);
	if (!L->data)
		return -1;
	L->length = length;
	return OK;
}

//destoryList()
//��ʼ�����������Ա�L�Ѿ�����
//����������������Ա�
Status SqlDestroy(Sqlist* L)
{
	if (!L->data)
		return ERROR;
	free(L->data);
	return OK;
}

//��ʼ���������Ա�L�Ѿ�����
//��������������Ա�����Ϊ�ձ�
void clearList(Sqlist* L)
{
		L->length = 0;
}

//��ʼ���������Ա��Ѵ���
//��������������Ա�LΪ�ձ��򷵻�Ture�����򷵻�FALSE
Status listEmpty(Sqlist* L)
{
	if (!L->data)
		return ERROR;
	else
	{
		if (L->length == 0)
			return TRUE;
		else
			return FALSE;
	}
}

//��ʼ�������Ա�L�Ѿ�����
//����������������Ա�L �е�����Ԫ�ظ���
Status listLength(Sqlist* L)
{
	if (!L->data)
		return ERROR;
	return L->length;
}

//��ʼ���������Ա�L�Ѿ����ڣ�1 <= i <= listLength(L)
//����������e�������Ա�L�е�i������Ԫ�ص�ֵ
Status getElem(Sqlist* L,int i,int &e)
{
	if (1 <= i || i <= listLength(L))
		return ERROR;
	e = L->data[i - 1];
	return OK;
}

int LocateElem(Sqlist* L,int e)
{
	for (int i = 0; i < L->length - 1; i++)
	{
		if (e == L->data[i])
			return i + 1;
	}
	return 0;
}

Status listDelete(Sqlist *L,int i,int *e)
{
	if (i < 1 || i > L->length)
		return ERROR;
	for (int j = i; j < L->length; j++)
	{
		L->data[i - 1] = L->data[i];
	}
	*e = L->data[i - 1];
	return OK;
}

//��ʼ���������Ա�L�Ѿ�����, 1 <= i <= listLength(L) + 1��
//�����������L�ĵ�i��λ��֮ǰ����������Ԫ��e��L�ĳ��ȼ�1
Status listInsert(Sqlist* L, int i, int e)
{
	if (i < 1 || i > L->length + 1)
		return ERROR;
	for (int j = L->length-1; j >= i ; j--)
	{	//����Ҫ�������е�Ԫ��ȫ�������ƶ�����Ҫ���������б��ȵ�Ԫ�ؿ�ʼ�ƶ�
		L->data[j + 1] = L->data[j];
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;
}

void printList(Sqlist* L)
{
	printf("����Ϊ��%d\n", L->length);
	for (int i = 0; i < L->length; i++)
	{
		printf("%d \n", L->data[i]);
	}
}

int main()
{
	Sqlist L;
	int e = 0 ;
	initList(&L,4);	
	listInsert(&L, 1, 1);
	listInsert(&L, 2, 2);
	listInsert(&L, 3, 3);
	listInsert(&L, 4, 4);
	listInsert(&L, 5, 5);
	listInsert(&L, 6, 6);
	listInsert(&L, 7, 7);
	
	listDelete(&L, 1, &e);

	clearList(&L);
	printList(&L);
	
	return 0;
}
