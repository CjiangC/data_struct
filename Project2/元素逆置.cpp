//逆置线性表
#include <iostream>
#define Max 50
typedef struct  Sqlist {
	int a[Max] = { 5,9,3,8,2,6 };
	int length = 6;
} ;

void reverse(Sqlist& L)
{
	for(int i = 0; i<L.length/2;i++)
	{
		int v = L.a[i];
		L.a[i] = L.a[L.length - 1-i];
		L.a[L.length - i - 1] = v;
	}
}

int main()
{
	Sqlist s;
	for (int i = 0; i < s.length; i++)
		printf("%d\n",s.a[i]);
	reverse(s);
	printf("逆置后的数组位置：\n");
	for(int i = 0;i<s.length;i++)
		printf("%d\n", s.a[i]);
	return 0;
}
