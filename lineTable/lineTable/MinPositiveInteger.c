#include<stdio.h>
#include "function.h"
#include <stdlib.h>
#include <string.h>
//2018统考真题

int findMinPositiveInt(int nums[], int n) {
	int i;
	int *flag;// 不能写int flag[n]
	flag = (int*)malloc(sizeof(int)*n);
	memset(flag, 0, sizeof(int)*n);
	for (i = 0; i < n; i++) {
		if (nums[i] > 0 && nums[i] <= n) {// 是小于等于n，不是小于n哦
			flag[nums[i]-1] = 1;//flag[n-1]保存n：
	   }
	}
	for (i = 0; i < n; i++) {
		if (flag[i] == 0)
			break;
	}
	printf("最小正整数是：%d\n", i + 1);
	return i + 1;
}