#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<time.h>

//	//1.猜数字游戏
//void menu()
//{
//	printf("*********************\n");
//	printf("*****1.start game****\n");
//	printf("*****2.exit game*****\n");
//	printf("*********************\n");
//}
//
//void game()
//{
//	int ret = rand()%100+1;
//	//printf("rand=%d", ret);
//	int guess = 0;
//	while (1)
//	{
//		printf("\nplease input from 1-100: ");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("more than");
//		}
//		else if (guess < ret)
//		{
//			printf("less than");
//		}
//		else
//		{
//			printf("\ncongratulation! you are success.");
//			break;
//		}
//		
//	}
//	
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	menu();
//	int num = 0;//选择选项
//	printf("\nplease choose: ");
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		game();
//		break;
//	case 2:
//		printf("exit!");
//		break;
//	default:
//		printf("not this choice!");
//		break;
//	}	
//}



//  //2.写代码可以在整型有序数组中查找想要的数字，
//	//  找到了返回下标，找不到返回 - 1.（折半查找）
//int binary_search(int arr[], int low, int high, int x)
//{
//	int mid = 0;
//	while (low <= high)
//	{
//		int mid = (low + high) / 2;
//		if (arr[mid] > x)
//		{
//			high = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			low = mid + 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	return -1;
//}
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int low = 0;
//	int high = sizeof(arr)/sizeof(arr[1])-1;
//	int x = 0;
//	printf("请输入查询的值：");
//	scanf("%d", &x);
//	int ret = 0;
//	ret = binary_search(arr, low, high, x);
//	if (ret != -1)
//	{
//		printf("\n找到了，其下标是：%d",ret);
//	}
//	else
//	{
//		printf("\n没有找到！");
//	}
//
//}



//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int main()
//{
//	int i = 0;
//	char inp_password[] = { 0 };
//	printf("please input your password:");
//	for ( i = 0; i < 3; i++)
//	{
//		scanf("%s", inp_password);
//		if (strcmp(inp_password, "123456") == 0)
//		{
//			printf("success!");
//			break;
//		}
//		else
//		{
//			printf("please keep input...\n");
//		}
//	}
//	if (i > 3)
//	{
//		printf("faulty!\n");
//	}
//	return 0;
//}


//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);
			printf("\n");
		}
		if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
			printf("\n");
		}
		if (ch >= 0 && ch <= 9)
		{
			;
		}
		
	}
	return 0;

}


