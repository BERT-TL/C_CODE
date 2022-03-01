#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main() {

	//1. 给定两个整形变量的值，将两个值的内容进行交换。
	//int a = 2;
	//int b = 3;
	//int i = 0;
	//printf("初始：a=%d,b=%d\n", a, b);
	//i = a;
	//a = b;
	//b = i;
	//printf("交换后：a=%d,b=%d", a, b);
	


	//2. 不允许创建临时变量，交换两个数的内容（附加题）
	///*int a = 2;
	//int b = 3;
	//printf("初始：a=%d,b=%d\n", a, b);
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("交换后：a=%d,b=%d\n", a, b);

	


	//3.求10 个整数中最大值。
	//int max = 0;
	//int arr[10] = {0};
	//printf("请输入十个数：");
	//for (int i = 0; i < 10; i++)
	//{
	//	scanf("%d",&arr[i]);
	//}
	//max = arr[0];
	//for (int i = 1; i < 10; i++)
	//{
	//	max = max < arr[i] ? arr[i] : max;//三目运算符
	//	/*if (max < arr[i]) 
	//	{
	//		max = arr[i];
	//	}*/
	//}
	//printf("max=%d", max);



	//4.将三个数按从大到小输出。
	/*int arr[3] = { 4,7,1 };
	if (arr[0] < arr[1])
	{
		int i = arr[0];
		arr[0] = arr[1];
		arr[1] = i;
	}
	if (arr[0] < arr[2])
	{
		int i = arr[0];
		arr[0] = arr[2];
		arr[2] = i;
	}
	if (arr[1] < arr[2])
	{
		int i = arr[1];
		arr[1] = arr[2];
		arr[2] = i;
	}

	printf("由大到小为：");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}*/



	//5.求两个数的最大公约数。
	int i = 0;
	int j = 0;
	int k = 1;
	printf("请输入两个数：");
	scanf("%d%d", &i, &j);
	while (k)
	{
		if (i < j) {//要被除数大于除数
			i = i + j;
			j = i - j;
			i = i - j;
		}
		k = i % j;//辗转相除法
		i = j;
		j = k;
	}
	printf("最大公约数为：%d", i);



	return 0;

}


