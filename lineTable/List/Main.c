#include "function.h"
#include <stdio.h>
int main() {
	LinkList L = NULL;
	LinkList temp, p = NULL;
	temp = initList(L);
	printfList(temp);
	LinkList index = getElem(temp,5);
	printf("\n第五个元素为：%d,内存地址为：%p\n", index->data,&index);
	LNode *insert = (LNode*)malloc(sizeof(LNode));
	insert->data = 8888;
	insertNode(temp, insert, 8);
	printfList(temp);
	deleteNode(temp, 6-1);
	printf("删除第六个元素\n");
	printfList(temp);
	return 0;
}