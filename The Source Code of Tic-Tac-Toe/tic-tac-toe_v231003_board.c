#include "tic-tac-toe_v231003.h"

// char board[ROW][COL];
// int result;
// int empty;
// int board_X;
// int board_Y;

//棋盘设计

void board_initialization()//游戏棋盘初始化
{
	int i;
	int j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
} 

void board_printing()//棋盘打印
{
	int i;
	int j;
	printf("     1   2   3  (X)\n");
	printf("   |---|---|---|\n");
	for (i = 0; i < ROW; i++)
	{
		switch (i)
		{
		case 0:
			printf(" 1 |");     
			break;
		case 1:
			printf(" 2 |");
			break;
		case 2:
			printf(" 3 |");
			break;
		}
		for (j = 0; j < COL; j++)
		{
			printf(" %c |", board[i][j]);
		}
		printf("\n   |");
		for (j = 0; j < COL; j++)
		{
			printf("---|");
		}
		printf("\n");
	}
	printf("(Y)");
}

