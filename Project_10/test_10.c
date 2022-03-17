#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//菜单栏
void menu()
{
	printf("-------------------------------\n");
	printf("----------1. play game---------\n");
	printf("----------0. exit game---------\n");
	printf("-------------------------------\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查雷的信息

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');// '0'
	InitBoard(show, ROWS, COLS, '*');// '*'

	////展示棋盘
	//printf("\n布置雷信息：\n");
	//DisplayBoard(mine,ROW,COL);

	//printf("\n排雷信息：\n");
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//扫除雷
	FindMine(mine,show,ROW,COL);


}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		menu();//打印菜单
		printf("请输入游戏的序列号：");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("\n退出游戏！\n");
			break;
		default:
			printf("\n游戏序列号非法，请重新输入！\n\n");
			break;
		}
	} while (input);

}