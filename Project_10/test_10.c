#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//�˵���
void menu()
{
	printf("-------------------------------\n");
	printf("----------1. play game---------\n");
	printf("----------0. exit game---------\n");
	printf("-------------------------------\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų��׵���Ϣ

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');// '0'
	InitBoard(show, ROWS, COLS, '*');// '*'

	////չʾ����
	//printf("\n��������Ϣ��\n");
	//DisplayBoard(mine,ROW,COL);

	//printf("\n������Ϣ��\n");
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//ɨ����
	FindMine(mine,show,ROW,COL);


}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		menu();//��ӡ�˵�
		printf("��������Ϸ�����кţ�");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("\n�˳���Ϸ��\n");
			break;
		default:
			printf("\n��Ϸ���кŷǷ������������룡\n\n");
			break;
		}
	} while (input);

}