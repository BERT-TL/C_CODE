#define _CRT_SECURE_NO_WARNINGS
#pragma once
//����ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���Ŷ���
#define ROW 5
#define COL 5

//��������

//��ʼ��
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�жϵ�ǰ����
char IsWin(char board[ROW][COL], int row, int col);