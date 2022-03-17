#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//��ʼ������
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


//չʾ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("\n---------ɨ����Ϸ--------\n");
	for (int i = 0; i <= row; i++)//��ӡ����
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
	printf("---------ɨ����Ϸ--------\n");
}

//������
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

//ɨ����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) 
{
	int x = 0;
	int y = 0;
	int s = 0;
	int win = 0;
	while (win < row * col - COUNT)
	{
		printf("������Ҫ�����λ��(����λΪ�Ƿ�����:0/1)��");
		scanf("%d %d %d", &x, &y, &s);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (s == 0)//�������
			{
				if (mine[x][y] == '0')
				{
					int count = get_mine_count(mine, x, y);//�����׵ĸ���
					show[x][y] = count + '0';
					DisplayBoard(show, row, col);
					win++;
				}
				else
				{
					printf("\n���ź�����ը���ˣ�\n");
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
			printf("\n���λ�÷Ƿ������������룡\n");
		}
	}
	if (win == row * col - COUNT)
	{
		printf("\n���ʤ����\n");
		DisplayBoard(mine, row, col);
	}
}


//��ȡ��Χ�׵ĸ��������������ֻ�ڱ��ļ���
//�ַ�'0' ��ASCALL��48, ����0  ��0
//�������48����һ���ַ�'0'
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