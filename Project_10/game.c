#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


//展示棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("\n---------扫雷游戏--------\n");
	for (int i = 0; i <= row; i++)//打印序列
	{
		printf("%d ", i);
	}
	printf("\n---------------------\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d|", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------扫雷游戏--------\n");
}

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;//(1,9)
		int y = rand() % col + 1;//(1,9)
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//扫除雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) 
{
	int x = 0;
	int y = 0;
	int s = 0;
	int win = 0;
	while (win < row * col - COUNT)
	{
		printf("请输入要点击的位置(第三位为是否标记雷:0/1)：");
		scanf("%d %d %d", &x, &y, &s);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (s == 0)//不标记雷
			{
				if (mine[x][y] == '0')
				{
					int count = get_mine_count(mine, x, y);//计算雷的个数
					show[x][y] = count + '0';
					DisplayBoard(show, row, col);
					win++;
				}
				else
				{
					printf("\n很遗憾，被炸死了！\n");
					DisplayBoard(mine, row, col);
					break;
				}
			}
			else
			{
				show[x][y] = '#';
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("\n点击位置非法，请重新输入！\n");
		}
	}
	if (win == row * col - COUNT)
	{
		printf("\n玩家胜利！\n");
		DisplayBoard(mine, row, col);
	}
}


//获取周围雷的个数，且这个函数只在本文件用
//字符'0' 的ASCALL是48, 数字0  是0
//相差正好48，即一个字符'0'
static int get_mine_count(char mine[ROWS][COLS], int x, int y) 
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}