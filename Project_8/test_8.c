#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
// //�ݹ�ʵ��  1 1 2 3 5 8 13 21 34 55
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

 
//�ǵݹ�ʵ��  1 1 2 3 5 8 13 21 34 55
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






//2.��дһ������ʵ��n ^ k��ʹ�õݹ�ʵ��
//double fun(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	if (k > 0)//������
//	{
//		return n * fun(n,k-1);
//	}
//	else//������
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



//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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



//4. ��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//int my_strlen(char* str) 
//{
//	int count = 0;
//	while (*str != '\0')//ѭ������
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//void reverse_string(char* str)
//{
//	int len = my_strlen(str);//�ַ�������
//	//printf("sz=%d\n", len);
//	int low = 0;
//	int high = len - 1;
//	while (low < high)
//	{
//		char tmp = str[low];//str[low] �� *str ��ʵ��һ���ģ�����Ҳ�ǵ�ַ
//		str[low] = str[high];
//		str[high] = tmp;
//		low++;
//		high--;
//	}	
//}

//void reverse_string(char* str)
//{
//	int len = my_strlen(str);//�ַ�������
//	//printf("sz=%d\n", len);
//	int low = 0;
//	int high = len - 1;
//	while (low < high)
//	{
//		char tmp = *(str+low);//str[low] �� *str ��ʵ��һ���ģ�����Ҳ�ǵ�ַ
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


//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int my_strlen(char* str)//�ݹ�ʵ��
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

//int my_strlen(char* str)//�ǵݹ�ʵ��
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



//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//int factorial(int n)//�ݹ�ʵ��
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


//int factorial(int n)//�ǵݹ�ʵ��
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




//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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