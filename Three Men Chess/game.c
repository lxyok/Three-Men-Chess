#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], char row, char col)//��ʼ������
{
	int i=0;
	int j=0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';

		}
	}
}


void DisplayBoard(char board[ROW][COL], char row, char col)//��ӡ����
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n",board[i][0], board[i][1], board[i][2]);
		if (i<row-1)
		{
			printf("---|---|---\n");
		}
		
	}

}