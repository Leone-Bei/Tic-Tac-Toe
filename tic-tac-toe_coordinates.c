#include "tic-tac-toe.h"

// char board[ROW][COL];
// int result;
// int empty;
// int board_X;
// int board_Y;

//坐标处理

void coordinates_input()//坐标存储
{
	int x;
	int y;
	printf("\n");
	printf("it is your turn, please input your coordinates\n");
	printf("input X(choose 1 / 2 / 3)\n");
	scanf("%d", &x);
	printf("input Y(choose 1 / 2 / 3)\n");
	scanf("%d", &y);
	board_X = x-1;
	board_Y = y-1;
	coordinates_judge_player();
}

void coordinates_judge_player()//判断玩家坐标合法性
{
	if (board_X >= 0 && board_X <= 2 && board_Y >= 0 && board_Y <= 2)
	{
		if (board[board_Y][board_X] == ' ')
		{
			board_edit_player(board_X, board_Y);
		}
		else
		{
			printf("the coordinates has been occupied, please input another one");
			coordinates_input();
		}
	}
	else
	{
		printf("wrong input,please input again\n");
		coordinates_input();
	}
}

