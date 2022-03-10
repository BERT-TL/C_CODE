#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//1.递归和非递归分别实现求第n个斐波那契数。
// //递归实现  1 1 2 3 5 8 13 21 34 55
//int fun(int n)
//{
//	if (n > 2)
//	{
//		return fun(n - 1) + fun(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}

 
//非递归实现  1 1 2 3 5 8 13 21 34 55
//int fun(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	
//	if (n < 3)
//	{
//		return c;
//	}
//	else
//	{
//		for (int i = 0; i < n-2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
// 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fun(n);
//	printf("\n%d", ret);
//	return 0;
//}






//2.编写一个函数实现n ^ k，使用递归实现
//double fun(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	if (k > 0)//正次幂
//	{
//		return n * fun(n,k-1);
//	}
//	else//负次幂
//	{
//		return 1.0 / n * fun(n, k + 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = fun(n, k);
//	printf("\n%lf", ret);
//	return 0;
//}



//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//int DigitSum(int num)
//{
//	if (num < 9)
//	{
//		return num % 10;
//	}
//	else
//	{
//		return	num % 10 + DigitSum(num / 10);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("\n%d", ret);
//
//	return 0;
//}



//4. 编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//int my_strlen(char* str) 
//{
//	int count = 0;
//	while (*str != '\0')//循环条件
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//void reverse_string(char* str)
//{
//	int len = my_strlen(str);//字符串长度
//	//printf("sz=%d\n", len);
//	int low = 0;
//	int high = len - 1;
//	while (low < high)
//	{
//		char tmp = str[low];//str[low] 与 *str 其实是一样的，数组也是地址
//		str[low] = str[high];
//		str[high] = tmp;
//		low++;
//		high--;
//	}	
//}

//void reverse_string(char* str)
//{
//	int len = my_strlen(str);//字符串长度
//	//printf("sz=%d\n", len);
//	int low = 0;
//	int high = len - 1;
//	while (low < high)
//	{
//		char tmp = *(str+low);//str[low] 与 *str 其实是一样的，数组也是地址
//		*(str + low) = *(str + high);
//		*(str + high) = tmp;
//		low++;
//		high--;
//	}
//}

//void reverse_string(char* str)
//{
//	int low = 0;
//	int high = my_strlen(str) - 1;
//	char* tmp = *str;//1
//	*str = *(str + high);//2
//	*(str + high) = '\0';//3
//	if (my_strlen(str + 1) > 1)
//	{
//		reverse_string(str + 1);//4
//
//	}
//	*(str + high) = tmp;//5
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}


//5.递归和非递归分别实现strlen
//int my_strlen(char* str)//递归实现
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}

//int my_strlen(char* str)//非递归实现
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	printf("len=%d", my_strlen(arr));
//	return 0;
//}



//6.递归和非递归分别实现求n的阶乘
//int factorial(int n)//递归实现
//{
//	if (n > 1)
//	{
//		return n * factorial(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}


//int factorial(int n)//非递归实现
//{
//	int sum = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//		
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", factorial(n));
//	return 0;
//}




//7.递归方式实现打印一个整数的每一位
int print(int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d\n", num % 10);
}

int main()
{
	int num = 0;
	printf("please input the num:");
	scanf("%d", &num);
	print(num);
	system("pause");
	return 0;

}