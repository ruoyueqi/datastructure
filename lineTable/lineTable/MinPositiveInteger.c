#include<stdio.h>
#include "function.h"
#include <stdlib.h>
#include <string.h>
//2018ͳ������

int findMinPositiveInt(int nums[], int n) {
	int i;
	int *flag;// ����дint flag[n]
	flag = (int*)malloc(sizeof(int)*n);
	memset(flag, 0, sizeof(int)*n);
	for (i = 0; i < n; i++) {
		if (nums[i] > 0 && nums[i] <= n) {// ��С�ڵ���n������С��nŶ
			flag[nums[i]-1] = 1;//flag[n-1]����n��
	   }
	}
	for (i = 0; i < n; i++) {
		if (flag[i] == 0)
			break;
	}
	printf("��С�������ǣ�%d\n", i + 1);
	return i + 1;
}