#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
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
//	printf("输入乘法口诀表的行数：");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//2.使用函数实现两个数的交换。
//void change(int* p,int* q)//返回的是地址
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
//	printf("x=%d,y=%d\n", *p, *q);//地址里面的值就是对应的值
//	printf("x=%d,y=%d\n", x, y);
//	change(p, q);
//	printf("\nx=%d,y=%d", x, y);
//	return 0;
//}




//3.实现一个函数判断year是不是润年。
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
//	printf("请输入年份：");
//	scanf("%d",&year);
//	int tmp = is_leap_year(year);
//	if (tmp == 1)
//	{
//		printf("%d是闰年\n",year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//	return 0;
//	
//}



//int Isleap(int a)  //建立一个函数，如果是闰年就返回1，不是就返回-1
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
//		printf("is leap！\n");
//	if (temp == -1)
//		printf("is not leap！\n");
//	system("pause");
//}



//4.创建一个数组，
//  实现函数init（）初始化数组、
//  实现empty（）清空数组、
//  实现reverse（）函数完成数组元素的逆置。
//  要求：自己设计函数的参数，返回值。

void init(int arr[], int n)//初始化数组
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
	printf("原数组：");
	print(arr, sz);
	init(arr,sz);
	printf("\n初始化数组：");
	print(arr, sz);
	reverse(arr, sz);
	printf("\n逆置数组：");
	print(arr, sz);
	empty(arr, sz);
	printf("\n清除数组：");
	print(arr, sz);


	return 0;
}






//void Init(int array[], int sz) {    //实现函数init（）初始化数组
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
//	Init(arr, sz);//数组初始化
//
//	Print(arr, sz);
//
//	Reverse(arr, sz);//数组逆序
//
//	Print(arr, sz);
//
//	Empty(arr, sz);//数组清空
//
//	Print(arr, sz);
//
//	system("pause");
//
//	return 0;
//
//}




//5.实现一个函数，判断一个数是不是素数。
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
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	
//	return 0;
//}
