#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define COUNT 20  //�׵ĸ���

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);// '0'

//չʾ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//������
void SetMine(char mine[ROWS][COLS], int row, int col);

//ɨ����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);