#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//int main() 
//{
//////1.����Ļ���������ͼ����
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
//	//2.���0��999֮������С�ˮ�ɻ������������
//	//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ǡ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
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
//		printf("%d ��ˮ�ɻ���", num);
//	}
//	else
//	{
//		printf("%d ����ˮ�ɻ���", num);
//	}
//
//
//	return 0;
//}


int main()
{

	//3.��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
	//���磺2 + 22 + 222 + 2222 + 22222
	//int	Sn = 0;
	//int i = 0;
	//scanf("%d", &i);//�����a
	//Sn = i + i * 11 + i * 111 + i * 1111 + i * 111111;
	//printf("Sn=%d ", Sn);

	int a = 0;
	int j = 0;
	int Sn = 0;
	int temp = 0;
	printf("�����a��ֵ��");
	scanf("%d", &a);//�����a
	printf("Ҫ���뼸�");
	scanf("%d", &j);//����ǰ����
	for (int i = 0; i < j; i++)
	{
		temp = temp * 10 + a;
		Sn += temp;
	}
	printf("Sn=%d ", Sn);
	return 0;
}