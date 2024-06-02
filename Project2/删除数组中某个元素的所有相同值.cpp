//删除数组中某个元素所有相同的值
#include <iostream>
#define Max 50
typedef struct  Sqlist {
	int a[Max] = { 5,2,0,1,3,1,4,1,1,4 };
	int length = 6;
} ;

void deletelist(Sqlist& L,int x)
{
	int k = 0;
	for (int i = 0; i < L.length; i++)
	{
		if (L.a[i] == x)
			k++;
		else
			L.a[i - k] = L.a[i];
	}
	L.length = L.length - k;
}

int main()
{
	Sqlist s;
	for (int i = 0; i < s.length; i++)
		printf("%d\n",s.a[i]);
	deletelist(s, 1);
	printf("-----------------\n");
	for(int i = 0;i<s.length;i++)
		printf("%d\n", s.a[i]);
	return 0;
}
