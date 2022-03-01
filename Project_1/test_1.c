#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i ; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >= i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main() {

	////1. 打印100~200之间的素数
	//int i = 0;
	//int num = 0;
	//for (num = 100; num <= 200; num++) {

	//	for (i = 2; i < num; i++) {
	//		if (num % i == 0) {
	//			break;
	//		}
	//		//printf("%d\n", num);
	//	}
	//	
	//	if (i >= num) {
	//		printf("%d ", num);
	//	}
	//}
	//return 0;



	////2. 输出乘法口诀表
	//int i = 1;
	//int j = 1;
	//for (i = 1; i < 10; i++) {
	//	for (j = 1; j <= i; j++) {
	//		printf("%d*%d=%d ", i, j, i * j);		
	//	}
	//	printf("\n");
	//}
	//return 0;


	////3. 判断1000年-- - 2000年之间的闰年
	int year = 1000;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		{
			printf("%d ", year);
		}
	}
	return 0;


}