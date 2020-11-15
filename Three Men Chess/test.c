#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"



void game() {
	//数组存放 棋盘信息
	char board[ROW][COL] = {0};//设置一个 行和列 为ROW COL 的棋盘（ROW COL 在game.h文件）
	InitBoard(board,ROW,COL);//初始化棋盘
	
	DisplayBoard(board,ROW,COL);//打印棋盘

	

}


void menu() {//游戏菜单
	printf("***********************\n");
	printf("*****1.Play 0.Exit*****\n");
	printf("***********************\n");
}


void test() {//选择
	int input = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}


int main() {
	test();
	return 0;
}