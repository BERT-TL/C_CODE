#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//int a(int n) {
//	int num = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	return num;
//}
void binsearch(int a[], int low, int high, int x)
{
	int mid = 0;
	while (low<=high)
	{
		mid = (low + high)/2;
		if (a[mid]>x)
		{
			high = mid - 1;
		}
		else if (a[mid]<x)
		{
			low = mid + 1;
		}
		else
		{
			printf("%d %d\n", low, high);
			printf("%d的下标为%d", x, mid);
			break;
		}
	}
	if (low > high)
	{
		printf("输入错误！");
	}
}

int main()
{
	////计算n!
	//int num = 1;
	//int n = 0;
	//scanf("%d", &n);
	//printf("n=%d\n", n);
	//for (int i = 1; i <= n; i++)
	//{
	//	num = num * i;
	//}
	//printf("%d ",num);




	//计算1！+2！+3！....+10!
	/*int sum = 0;
	int n = 3;
	for (int i = 1; i <= n; i++)
	{
		sum += a(i);
	}
	printf("%d", sum);*/



	//在一个有序数组中查找具体的某个数n
	
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int low = 0;
	//int high = sizeof(arr)/sizeof(arr[0]) - 1;//数组长度
	//int x = 7;
	//binsearch(arr, low, high, x);
	//


	//演示多个字符从两端移动，向中间汇聚
	//char arr1[] = "welcome to china.";
	//char arr2[] = "#################";
	//int left = 0;
	//int right = strlen(arr1) - 1;
	//int i = 0;
	//int j = 0;
	////printf("%s", arr1);
	//for (i = left,j=right; i < j; i++,j--)
	//{
	//	arr2[i] = arr1[i];
	//	arr2[j] = arr1[j];
	//	printf("%s\n", arr2);
	//}


	//模拟用户登录情景，并且只能登录三次（只允许输入三次密码，如输入正确则登录成功，错误则退出程序）
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		//printf("%d\n", strcmp(password, "123456"));
		if (strcmp(password, "123456") == 0)
		{
			printf("success\n");
			break;
		}
		else
		{
			printf("please keep input...\n");
		}
	}
	if (i >= 3)
	{
		printf("fault\n");
	}
	
	return 0;
}
