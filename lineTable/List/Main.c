#include "function.h"
#include <stdio.h>
int main() {
	LinkList L = NULL;
	LinkList temp, p = NULL;
	temp = initList(L);
	printfList(temp);
	LinkList index = getElem(temp,5);
	printf("\n�����Ԫ��Ϊ��%d,�ڴ��ַΪ��%p\n", index->data,&index);
	LNode *insert = (LNode*)malloc(sizeof(LNode));
	insert->data = 8888;
	insertNode(temp, insert, 8);
	printfList(temp);
	deleteNode(temp, 6-1);
	printf("ɾ��������Ԫ��\n");
	printfList(temp);
	return 0;
}