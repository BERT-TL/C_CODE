#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main() {

	//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
	//int a = 2;
	//int b = 3;
	//int i = 0;
	//printf("��ʼ��a=%d,b=%d\n", a, b);
	//i = a;
	//a = b;
	//b = i;
	//printf("������a=%d,b=%d", a, b);
	


	//2. ����������ʱ���������������������ݣ������⣩
	///*int a = 2;
	//int b = 3;
	//printf("��ʼ��a=%d,b=%d\n", a, b);
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("������a=%d,b=%d\n", a, b);

	


	//3.��10 �����������ֵ��
	//int max = 0;
	//int arr[10] = {0};
	//printf("������ʮ������");
	//for (int i = 0; i < 10; i++)
	//{
	//	scanf("%d",&arr[i]);
	//}
	//max = arr[0];
	//for (int i = 1; i < 10; i++)
	//{
	//	max = max < arr[i] ? arr[i] : max;//��Ŀ�����
	//	/*if (max < arr[i]) 
	//	{
	//		max = arr[i];
	//	}*/
	//}
	//printf("max=%d", max);



	//4.�����������Ӵ�С�����
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

	printf("�ɴ�СΪ��");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}*/



	//5.�������������Լ����
	int i = 0;
	int j = 0;
	int k = 1;
	printf("��������������");
	scanf("%d%d", &i, &j);
	while (k)
	{
		if (i < j) {//Ҫ���������ڳ���
			i = i + j;
			j = i - j;
			i = i - j;
		}
		k = i % j;//շת�����
		i = j;
		j = k;
	}
	printf("���Լ��Ϊ��%d", i);



	return 0;

}


