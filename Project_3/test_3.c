#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {
	/*int i = 0; 
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n"); 
		break;
	default:
		printf("�������");
		break;
	}*/


	//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
	//int arr1[5] = { 2,5,9,1,5 };
	//int arr2[5] = { 4,7,0,1,6 };
	//int data = 0;

	////int arr[5] = { 0 };
	//printf("arr1��");
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr1[i]);
	//}
	//printf("\narr2��");
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
	//printf("\n\narr1��");
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr1[i]);
	//}
	//printf("\narr2��");
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr2[i]);
	//}
	



	//2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
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



	//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��
	int count = 0;//����
	for (int i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
	}
	printf("1-100�г��� %d ��9", count);


	return 0;

}
