#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//初始化
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


//打印棋盘
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

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("玩家走-->\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入位置：");
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
				printf("\n该位置被占用，请重新输入！\n");
			}
			
		}
		else
		{
			printf("\n位置非法,请重新输入！\n");
		}
	}
	
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走-->\n");
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


//五子棋--判断当前棋势
char IsWin(char board[ROW][COL], int row, int col)
{
	//有输赢

	//行成线
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == board[i][3] && board[i][3] == board[i][4] && board[i][1] != ' ')//要判断是否为空，因为初始时都是空
		{
			return board[i][1];
		}
	}

	//列成线
	for (int j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == board[3][j] && board[3][j] == board[4][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//左对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == board[3][3] && board[3][3] == board[4][4] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	//右对角线
	if (board[0][4] == board[1][3] && board[1][3] == board[2][2] && board[2][2] == board[3][1] && board[3][1] == board[4][0] && board[0][4] != ' ')
	{
		return board[0][4];
	}

	//判断是否平局
	//平局返回1，否则返回0
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	//继续
	return 'C';

}

////三子棋--判断当前棋势
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	//有输赢
//
//	//行成线
//	for (int i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//要判断是否为空，因为初始时都是空
//		{
//			return board[i][1];
//		}
//	}
//
//	//列成线
//	for (int j = 0; j < col; j++)
//	{
//		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
//		{
//			return board[1][j];
//		}
//	}
//	//左对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[0][0];
//	}
//	//右对角线
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[0][2];
//	}
//
//	//判断是否平局
//	//平局返回1，否则返回0
//	int ret = IsFull(board, row, col);
//	if (ret == 1)
//	{
//		return 'Q';
//	}
//	//继续
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


