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
			printf("%d���±�Ϊ%d", x, mid);
			break;
		}
	}
	if (low > high)
	{
		printf("�������");
	}
}

int main()
{
	////����n!
	//int num = 1;
	//int n = 0;
	//scanf("%d", &n);
	//printf("n=%d\n", n);
	//for (int i = 1; i <= n; i++)
	//{
	//	num = num * i;
	//}
	//printf("%d ",num);




	//����1��+2��+3��....+10!
	/*int sum = 0;
	int n = 3;
	for (int i = 1; i <= n; i++)
	{
		sum += a(i);
	}
	printf("%d", sum);*/



	//��һ�����������в��Ҿ����ĳ����n
	
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int low = 0;
	//int high = sizeof(arr)/sizeof(arr[0]) - 1;//���鳤��
	//int x = 7;
	//binsearch(arr, low, high, x);
	//


	//��ʾ����ַ��������ƶ������м���
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


	//ģ���û���¼�龰������ֻ�ܵ�¼���Σ�ֻ���������������룬��������ȷ���¼�ɹ����������˳�����
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
