#include<stdio.h>
#include<stdlib.h>
#include "function.h"



List MakeEmpty() {
	List P;
	P = (List)malloc(sizeof(struct LNode));
	P->Length = 0;
	return P;
}

bool Insert(List L, Position n, ElementType x) {
	if (L->Length == MAXSIZE )
	{
		printf("表满");
		return false;
	}
	if (n<1 || n>L->Length + 1 ) {
		printf("位序不合法");
		return false;
	}
	for (int j = L->Length; j >= n; j--)
	{
		L->Data[j] = L->Data[j-1];
	}
	L->Data[n - 1] = x;
	L->Length++;
	return true;
}

Position Find(List L, ElementType x) {
	int j;
	for (j = 0; j < L->Length + 1; j++)
	{
		if (x == L->Data[j])
		{
			printf("查找的下表%d位序为：%d\n", L->Data[j], j + 1);
			return 0;
		}
	}
	if (j >= L->Length)
	{
		printf("查找的不存在");
	}
	return 0;

}

bool Delete(List L, Position n) {
	if (L->Length == MAXSIZE - 1)
	{
		printf("表满");
		return false;
	}
	if (n<1 || n>L->Length + 1) {
		printf("位序不合法");
		return false;
	}
	for (int j = n - 1; j < L->Length + 1; j++)
	{
		L->Data[j] = L->Data[j + 1];
	}
	L->Length--;
	return true;

}

int Length(List L) {
	return L->Length + 1;
}

int Printf(List L) {
	for (int i = 0; i < L->Length ; i++)
		printf("%d  ", L->Data[i]);
	printf("\n");
	return 0;
}

// 删除最小值
ElementType deleteMin(List L) {
	if (L == NULL) {
		printf("sequence is null");
		return -1;
	}
	int min = L->Data[0];
	int temp = 0;
	for (int i = 0; i < L->Length; i++) {
		if (L->Data[i] < min) {
			min = L->Data[i];
			temp = i;
		}
	}
	L->Data[temp] = L->Data[L->Length-1];
	L->Length--;
	return min;
}

// 反转顺序表，空间复杂度为1
void reverse(List L) {
	int temp;
	int len = L->Length;
	for (int i = 0; i < L->Length / 2; i++) {
		temp = L->Data[i];
		L->Data[i] = L->Data[len-i-1];
		L->Data[len - i -1] = temp;
	}

}


