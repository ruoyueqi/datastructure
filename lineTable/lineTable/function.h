#ifndef __FUNCTION_H__
#define __FUNCTION_H__

typedef int Position;
typedef int ElementType;
typedef struct LNode *PtrToLNode;

#define MAXSIZE 10
struct LNode {
	ElementType Data[MAXSIZE];
	Position Length;
};
typedef PtrToLNode List;

List MakeEmpty();
bool Insert(List L, Position, ElementType e);
Position Find(List L, ElementType x);
bool Delete(List L, Position n);
int Length(List L);
ElementType deleteMin(List L);
void reverse(List L);
int Printf(List L);

int findMinPositiveInt(int nums[], int n);

#endif