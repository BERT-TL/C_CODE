#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//int main() 
//{
//////1.在屏幕上输出以下图案：
////      *
////     ***
////    *****
////   *******
////  *********
//// ***********
////*************
//// ***********
////  *********
////   *******
////    *****
////     ***
////      *
//	/*int i = 0;
//	int j = 0;
//	int x = 6;
//	int y = 1;
//	int m = 1;
//	int n = 11;
//	for ( i = 0; i < 13; i++)
//	{
//		if (i < 7)
//		{
//			for ( j = 0; j < x; j++)
//			{
//				printf(" ");
//			}
//			for (int i = 0; i < y; i++)
//			{
//				printf("*");
//			}
//			x--;
//			y+=2;
//		}
//		else
//		{
//			for (j = 0; j < m; j++)
//			{
//				printf(" ");
//			}
//			for (int i = 0; i < n; i++)
//			{
//				printf("*");
//			}
//			m++;
//			n -= 2;
//		}
//		
//		printf("\n");
//	}*/
//
//	char arr1[] = { "             " };
//	char arr2[] = { "*************" };
//	int i = 0;
//	int x = 6;
//	int y = 1;
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	int mid = (left + right) / 2;
//	for (int i = 0; i < 6; i++)
//	{ 
//		for (int j = 0; j < x; j++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		x--;
//		y += 2;
//		printf("\n");
//	}
//	for ( left,right; left < right; left++,right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	}
//	return 0;
//}



//int main()
//{
//	//2.求出0～999之间的所有“水仙花数”并输出。
//	//“水仙花数”是指一个三位数，其各位数字的立方和恰好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//	int num = 0;
//	int sum = 0;
//	scanf("%d", &num);
//
//	int a = num / 100;
//	int b = (num - a * 100) / 10;
//	int c = num - a * 100 - b * 10;
//	sum = a * a * a + b * b * b + c * c * c;
//
//	if (num == sum)
//	{
//		printf("%d 是水仙花数", num);
//	}
//	else
//	{
//		printf("%d 不是水仙花数", num);
//	}
//
//
//	return 0;
//}


int main()
{

	//3.求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
	//例如：2 + 22 + 222 + 2222 + 22222
	//int	Sn = 0;
	//int i = 0;
	//scanf("%d", &i);//输入的a
	//Sn = i + i * 11 + i * 111 + i * 1111 + i * 111111;
	//printf("Sn=%d ", Sn);

	int a = 0;
	int j = 0;
	int Sn = 0;
	int temp = 0;
	printf("输入的a的值：");
	scanf("%d", &a);//输入的a
	printf("要输入几项：");
	scanf("%d", &j);//输入前几项
	for (int i = 0; i < j; i++)
	{
		temp = temp * 10 + a;
		Sn += temp;
	}
	printf("Sn=%d ", Sn);
	return 0;
}