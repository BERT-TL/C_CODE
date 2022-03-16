#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//�˵�
void menu()
{
	printf("---------------------------\n");
	printf("-------1. play game--------\n");
	printf("-------0. exit game--------\n");
	printf("---------------------------\n");
}

void game()
{
	char board[ROW][COL];
	//��ʼ��
	InitBoard(board, ROW, COL);

	//��ӡ����
	DisplayBoard(board, ROW, COL);

	//������ֵ��'*' �����Ӯ
	//������ֵ��'#' �����Ӯ
	//������ֵ��'Q' ��ƽ��
	//������ֵ��'C' �����
char ret = 0;
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�жϵ�ǰ����
		if (ret != 'C')//��û�����������������
		{
			break;
		}

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("\n���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("\n����Ӯ��\n");
	}
	else
	{
		printf("\nƽ��!\n");
	}
	printf("\n�������£�\n");
	DisplayBoard(board, ROW, COL);
	
	
}

int main()
{
	srand((unsigned int)time(NULL));
	int num = 0;
	do {
		menu();
		printf("��������Ϸ��ţ�");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n\n");
			break;
		default:
			printf("����������������룡\n\n");
			break;
		}

	} while (num);
	return 0;
}