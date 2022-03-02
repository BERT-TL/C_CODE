#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {
	/*int i = 0; 
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n"); 
		break;
	default:
		printf("输入错误！");
		break;
	}*/


	//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
	//int arr1[5] = { 2,5,9,1,5 };
	//int arr2[5] = { 4,7,0,1,6 };
	//int data = 0;

	////int arr[5] = { 0 };
	//printf("arr1：");
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr1[i]);
	//}
	//printf("\narr2：");
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr2[i]);
	//}
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	data = arr1[i];
	//	arr1[i] = arr2[i];
	//	arr2[i] = data;
	//}
	//printf("\n\narr1：");
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr1[i]);
	//}
	//printf("\narr2：");
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr2[i]);
	//}
	



	//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
	//float sum = 0.0;
	//int flag = 1;
	//for (int i = 1; i <= 100; i++)
	//{
	//	sum = sum + flag * (1.0 / i);
	//	flag = - flag;
	//	/*if(i % 2 == 0)
	//	{
	//		sum = sum - (1.0 / i);
	//	}
	//	else
	//	{
	//		sum = sum + (1.0 / i);
	//	}*/
	//}
	//printf("sum=%f", sum);



	//3. 编写程序数一下 1到 100 的所有整数中出现多少个数字9。
	int count = 0;//计数
	for (int i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
	}
	printf("1-100中出现 %d 次9", count);


	return 0;

}
