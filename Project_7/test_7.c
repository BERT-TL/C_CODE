#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//void print(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("����˷��ھ����������");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//2.ʹ�ú���ʵ���������Ľ�����
//void change(int* p,int* q)//���ص��ǵ�ַ
//{
//	int tmp = *p;
//	*p = *q;
//	*q = tmp;
//}
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int* p = &x;
//	int* q = &y;
//	printf("x=%d,y=%d\n", *p, *q);//��ַ�����ֵ���Ƕ�Ӧ��ֵ
//	printf("x=%d,y=%d\n", x, y);
//	change(p, q);
//	printf("\nx=%d,y=%d", x, y);
//	return 0;
//}




//3.ʵ��һ�������ж�year�ǲ������ꡣ
//int is_leap_year(int year)
//{
//	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	printf("��������ݣ�");
//	scanf("%d",&year);
//	int tmp = is_leap_year(year);
//	if (tmp == 1)
//	{
//		printf("%d������\n",year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//	return 0;
//	
//}



//int Isleap(int a)  //����һ�����������������ͷ���1�����Ǿͷ���-1
//{
//	if (a % 4 != 0)
//		return -1;
//	else
//		if (a % 100 != 0)
//			return 1;
//		else
//		{
//			if (a % 400 == 0)
//				return 1;
//			else
//				return -1;
//		}
//}
//void main()
//{
//	int a;
//	printf("please input the num:");
//	scanf("%d", &a);
//	int temp = Isleap(a);
//	if (temp == 1)
//		printf("is leap��\n");
//	if (temp == -1)
//		printf("is not leap��\n");
//	system("pause");
//}



//4.����һ�����飬
//  ʵ�ֺ���init������ʼ�����顢
//  ʵ��empty����������顢
//  ʵ��reverse���������������Ԫ�ص����á�
//  Ҫ���Լ���ƺ����Ĳ���������ֵ��

void init(int arr[], int n)//��ʼ������
{

	for (int i = 0; i < n; i++)
	{
		
		arr[i] = i;
	}
}
void empty(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
}

void reverse(int arr[], int n)
{
	int low = 0;
	int high = n - 1;
	int i = 0;
	int j = 0;
	for (i = low, j = high; i < j; i++, j--)
	{
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
}

void print(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 0,3,6,8,9,1,2,4,5,7 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[1]);
	printf("ԭ���飺");
	print(arr, sz);
	init(arr,sz);
	printf("\n��ʼ�����飺");
	print(arr, sz);
	reverse(arr, sz);
	printf("\n�������飺");
	print(arr, sz);
	empty(arr, sz);
	printf("\n������飺");
	print(arr, sz);


	return 0;
}






//void Init(int array[], int sz) {    //ʵ�ֺ���init������ʼ������
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++) {
//
//		array[i] = i + 1;
//
//	}
//
//}
//
//
//
//void Print(int array[], int sz) {
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++) {
//
//		printf("%d ", array[i]);
//
//	}
//
//	printf("\n");
//
//}
//
//
//
//void Reverse(int array[], int sz) {
//
//	int left = 0;
//
//	int right = sz - 1;
//
//	while (left < right) {
//
//		int tmp = array[left];
//
//		array[left] = array[right];
//
//		array[right] = tmp;
//
//		left++;
//
//		right--;
//
//	}
//
//}
//
//
//
//void Empty(int array[], int sz) {
//	int i = 0;
//
//	for (i = 0; i < sz; i++) {
//		array[i] = 0;
//
//	}
//
//}
//
//int main() {
//	int arr[10] = { 0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print(arr, sz);
//
//	Init(arr, sz);//�����ʼ��
//
//	Print(arr, sz);
//
//	Reverse(arr, sz);//��������
//
//	Print(arr, sz);
//
//	Empty(arr, sz);//�������
//
//	Print(arr, sz);
//
//	system("pause");
//
//	return 0;
//
//}




//5.ʵ��һ���������ж�һ�����ǲ���������
// 
//int is_num(int x)
//{
//	for (int i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (is_num(x) == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	
//	return 0;
//}
