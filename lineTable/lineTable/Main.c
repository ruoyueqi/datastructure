#include<stdio.h>
#include<stdlib.h>
#include "function.h"



//ע�ͣ�        ��CTRL+K��Ȼ��CTRL+C
//ȡ��ע�ͣ� ��CTRL + K��Ȼ��CTRL + U
int main() {
	List L;
	L = MakeEmpty();
	Insert(L, 1, 96);
	Insert(L, 2, 12);
	Insert(L, 3, 18);
	Insert(L, 4, 36);
	/*Printf(L);
	printf("����%d\n", Length(L));

	Find(L, 4);
	printf("ɾ��һ��\n");
	Delete(L, 2);
	Printf(L);
	Find(L, 4);

	printf("����%d\n", Length(L));*/

	Insert(L, 5, 68);
	Insert(L, 6, 98);
	Insert(L, 7, 96);
	Printf(L);
	//printf("%d\n", deleteMin(L));
	reverse(L);
	Printf(L);
	//Find(L, 33);
	//Find(L, 4);


	//2018��С������
	int a[5] = {-5,-6,2,3,8};
	int b[3] = { 1,2,3 };
	findMinPositiveInt(a, 5);
	findMinPositiveInt(b, 3);
	return 0;
}