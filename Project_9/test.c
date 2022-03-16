#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//菜单
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
	//初始化
	InitBoard(board, ROW, COL);

	//打印棋盘
	DisplayBoard(board, ROW, COL);

	//当返回值是'*' 则玩家赢
	//当返回值是'#' 则电脑赢
	//当返回值是'Q' 则平局
	//当返回值是'C' 则继续
char ret = 0;
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断当前棋势
		if (ret != 'C')//还没完则继续，否则跳出
		{
			break;
		}

		//电脑下棋
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
		printf("\n玩家赢！\n");
	}
	else if (ret == '#')
	{
		printf("\n电脑赢！\n");
	}
	else
	{
		printf("\n平局!\n");
	}
	printf("\n棋势如下：\n");
	DisplayBoard(board, ROW, COL);
	
	
}

int main()
{
	srand((unsigned int)time(NULL));
	int num = 0;
	do {
		menu();
		printf("请输入游戏序号：");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n\n");
			break;
		default:
			printf("输入错误，请重新输入！\n\n");
			break;
		}

	} while (num);
	return 0;
}