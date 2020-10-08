#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
typedef int ElemType;
typedef struct LNODE {//这里的LNODE称为结构标记
	ElemType data;//节点的数据域
	struct LNODE* next;//定义一个指向结构体的指针变量，保存下一个节点的地址信息
}LNode, *LinkList;  //这里的LNode是结构体的别名，不是结构变量名 ,而LinkList是struct LNode * 的别名

/*等价于
struct LNODE{};
typedef struct LNODE LNode;
typedef struct LNODE * LinkList;

*/

LinkList headInsert(LinkList L);
LinkList tailInsert(LNode *L);
LinkList initList(LinkList L);
void printfList(LinkList L);
LinkList getElem(LinkList L,int index);
LinkList insertNode(LinkList L, LNode *node, int index);
LinkList deleteNode(LinkList L, int index);

#endif