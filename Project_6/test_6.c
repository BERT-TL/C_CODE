#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<time.h>

//	//1.��������Ϸ
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
//	int num = 0;//ѡ��ѡ��
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



//  //2.д����������������������в�����Ҫ�����֣�
//	//  �ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
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
//	printf("�������ѯ��ֵ��");
//	scanf("%d", &x);
//	int ret = 0;
//	ret = binary_search(arr, low, high, x);
//	if (ret != -1)
//	{
//		printf("\n�ҵ��ˣ����±��ǣ�%d",ret);
//	}
//	else
//	{
//		printf("\nû���ҵ���");
//	}
//
//}



//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
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


//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
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


