#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//��ʼ��
void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (int i = 0; i < col; i++)
			{
				printf("---");
				if (i < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("�����-->\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("������λ�ã�");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("\n��λ�ñ�ռ�ã����������룡\n");
			}
			
		}
		else
		{
			printf("\nλ�÷Ƿ�,���������룡\n");
		}
	}
	
}

//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������-->\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


//������--�жϵ�ǰ����
char IsWin(char board[ROW][COL], int row, int col)
{
	//����Ӯ

	//�г���
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == board[i][3] && board[i][3] == board[i][4] && board[i][1] != ' ')//Ҫ�ж��Ƿ�Ϊ�գ���Ϊ��ʼʱ���ǿ�
		{
			return board[i][1];
		}
	}

	//�г���
	for (int j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == board[3][j] && board[3][j] == board[4][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//��Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == board[3][3] && board[3][3] == board[4][4] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	//�ҶԽ���
	if (board[0][4] == board[1][3] && board[1][3] == board[2][2] && board[2][2] == board[3][1] && board[3][1] == board[4][0] && board[0][4] != ' ')
	{
		return board[0][4];
	}

	//�ж��Ƿ�ƽ��
	//ƽ�ַ���1�����򷵻�0
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	//����
	return 'C';

}

////������--�жϵ�ǰ����
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	//����Ӯ
//
//	//�г���
//	for (int i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//Ҫ�ж��Ƿ�Ϊ�գ���Ϊ��ʼʱ���ǿ�
//		{
//			return board[i][1];
//		}
//	}
//
//	//�г���
//	for (int j = 0; j < col; j++)
//	{
//		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
//		{
//			return board[1][j];
//		}
//	}
//	//��Խ���
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[0][0];
//	}
//	//�ҶԽ���
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[0][2];
//	}
//
//	//�ж��Ƿ�ƽ��
//	//ƽ�ַ���1�����򷵻�0
//	int ret = IsFull(board, row, col);
//	if (ret == 1)
//	{
//		return 'Q';
//	}
//	//����
//	return 'C';
//
//}


int IsFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


