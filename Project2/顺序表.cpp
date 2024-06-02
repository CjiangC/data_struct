#include "stdio.h"
#include "define.h"
#include <stdlib.h>
#define SQLMAXSIZE 100
/*
	initList()	
	操作结果：构造一个空的线性表

	destoryList()
	初始条件：若线性表L已经存在
	操作结果：销毁线性表

	clearList()
	初始条件：线性表L已经存在
	操作结果：将线性表重置为空表

	listEmpty()
	初始条件：线性表已存在
	操作结果：若线性表L为空表，则返回Ture，否则返回FALSE

	listLength(L)
	初始化：线性表L已经存在
	操作结果：返回线性表L 中的数据元素个数

	getElem(L,i,&e);
	初始条件：线性表L已经存在，1<=i<=listLength(L)
	操作对象：用e返回线性表L中第i个数据元素的值

	locateElem(L,e,compare());
	初始条件：线性表L已经存在，compare()是 数据元素判断函数
	操作结果：返回L中第1个与e满足compare()的数据元素的位序。
	若这样的数据元素不存在则返回值为0

	priorElem(L,cur_e,&pre_e);
	初始条件：线性表L已经存在。
	操作结果：若cur_e是L的数据元素，且不是第一个，
	则用pre_e返回他的前驱，否则操作失败；pre_e无意义

	nextElem(L,cur_e,&next_e)
	初始条件：线性表L已经存在。
	操作结果：若cur_e是L的数据元素，且不是最后一个，
	则用next_e返回他的后继，否则操作失败；pre_e无意义

	listInsert(&L,i,e)
	初始条件：线性表L已经存在, 1<= i <= listLength(L) + 1。
	操作结果：在L的第i个位置之前插入新数据元素e，L的长度加1

	listDelete(&L,i,&e)
	初始条件：线性表L已经存在, 1<= i <= listLength(L)
	操作结果：删除L的第i个数据元素，并用e返回其值，L的长度减一
		删除前（长度为n）
		删除后（长度n-1）
*/

typedef struct
{
	ElemType* data;		//int 类型
	int length;
} Sqlist;	//顺序表类型

//initList()
//操作结果：构造一个空的线性表
Status initList(Sqlist *L,int length)
{
	//初始化空间
	L->data = (int *)malloc(sizeof(int) * SQLMAXSIZE);
	if (!L->data)
		return -1;
	L->length = length;
	return OK;
}

//destoryList()
//初始条件：若线性表L已经存在
//操作结果：销毁线性表
Status SqlDestroy(Sqlist* L)
{
	if (!L->data)
		return ERROR;
	free(L->data);
	return OK;
}

//初始条件：线性表L已经存在
//操作结果：将线性表重置为空表
void clearList(Sqlist* L)
{
		L->length = 0;
}

//初始条件：线性表已存在
//操作结果：若线性表L为空表，则返回Ture，否则返回FALSE
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

//初始化：线性表L已经存在
//操作结果：返回线性表L 中的数据元素个数
Status listLength(Sqlist* L)
{
	if (!L->data)
		return ERROR;
	return L->length;
}

//初始条件：线性表L已经存在，1 <= i <= listLength(L)
//操作对象：用e返回线性表L中第i个数据元素的值
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

//初始条件：线性表L已经存在, 1 <= i <= listLength(L) + 1。
//操作结果：在L的第i个位置之前插入新数据元素e，L的长度加1
Status listInsert(Sqlist* L, int i, int e)
{
	if (i < 1 || i > L->length + 1)
		return ERROR;
	for (int j = L->length-1; j >= i ; j--)
	{	//把需要的数组中的元素全部向右移动，需要从数组最有碧娜的元素开始移动
		L->data[j + 1] = L->data[j];
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;
}

void printList(Sqlist* L)
{
	printf("长度为：%d\n", L->length);
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
