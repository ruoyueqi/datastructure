#include <string.h>
#include <stdio.h>
#include "function.h"
#include <time.h>

// 带有头节点的头插法 画个图就很容易理解了
LinkList headInsert(LinkList L) {
	LNode *insert;
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;//
	printf("input integer to build headInsert List ,end with 999\n");
	scanf_s("%d", &x);
	while (x != 999) {
		insert = (LinkList)malloc(sizeof(LNode));
		insert->next = L->next;
		insert->data = x;
		L->next = insert;
		scanf_s("%d", &x);
	}
	return L;
}

//没有带有头节点的， 画个图就很容易理解了
LinkList tailInsert(LNode *L) {
	LNode *insert, *tail;
	L = (LNode*)malloc(sizeof(LNode));
	printf("input integer to build tailInsert List ,end with 999\n");
	tail = L;
	int x;
	scanf_s("%d", &x);
	while (x != 999) {
		insert = (LNode*)malloc(sizeof(LNode));
		insert->data = x;
		tail->next = insert;
		tail = insert; //更新尾节点
		scanf_s("%d", &x);
	}
	tail->next = NULL;//尾节点指针置空
	return L;
}

void printfList(LinkList L){
	LinkList p = L->next;
	while (p) {
		if(p->next==NULL)
			printf("%d", p->data);
		else
			printf("%d-->", p->data);
		p = p->next;
	}
	printf("\n");

}

LinkList initList(LinkList L) {
		LNode *insert, *tail;
		L = (LNode*)malloc(sizeof(LNode));
		tail = L;
		int i = 0,x = 1;
		srand((unsigned int)time(NULL));//设置当前时间为种子
		while (x != 999) {
			insert = (LNode*)malloc(sizeof(LNode));
			insert->data = x;
			tail->next = insert;
			tail = insert; //更新尾节点
			x = rand() % 100 + 1;//产生1~100的随机数
			i++;
			if (i == 10)
				x = 999;
		}
		tail->next = NULL;//尾节点指针置空
		return L;
}

LinkList getElem(LinkList L,int index) {
	if (index == 0) {
		return L;
	}
	LinkList temp = L;
	while (temp&&index >= 1) {
		temp = temp->next;
		index--;
	}
	return temp;
}

LinkList insertNode(LinkList L,LNode *node, int index) {
	LinkList temp = getElem(L,index);
	node->next = temp->next;
	temp->next = node;
	return L;
}

LinkList deleteNode(LinkList L, int index) {
	LinkList temp = getElem(L, index);
	LinkList deleteNode = temp->next;
	temp->next = temp->next->next;
	free(deleteNode);
	return L;
}