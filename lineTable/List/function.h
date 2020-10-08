#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
typedef int ElemType;
typedef struct LNODE {//�����LNODE��Ϊ�ṹ���
	ElemType data;//�ڵ��������
	struct LNODE* next;//����һ��ָ��ṹ���ָ�������������һ���ڵ�ĵ�ַ��Ϣ
}LNode, *LinkList;  //�����LNode�ǽṹ��ı��������ǽṹ������ ,��LinkList��struct LNode * �ı���

/*�ȼ���
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