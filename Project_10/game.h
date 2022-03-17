#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define COUNT 20  //雷的个数

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);// '0'

//展示棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);

//扫除雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);