#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"



void game() {
	//������ ������Ϣ
	char board[ROW][COL] = {0};//����һ�� �к��� ΪROW COL �����̣�ROW COL ��game.h�ļ���
	InitBoard(board,ROW,COL);//��ʼ������
	
	DisplayBoard(board,ROW,COL);//��ӡ����

	

}


void menu() {//��Ϸ�˵�
	printf("***********************\n");
	printf("*****1.Play 0.Exit*****\n");
	printf("***********************\n");
}


void test() {//ѡ��
	int input = 0;
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}


int main() {
	test();
	return 0;
}