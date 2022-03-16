#define _CRT_SECURE_NO_WARNINGS
#pragma once
//包含头文件
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//符号定义
#define ROW 5
#define COL 5

//函数声明

//初始化
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断当前棋势
char IsWin(char board[ROW][COL], int row, int col);