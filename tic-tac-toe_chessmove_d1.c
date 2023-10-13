#include "tic-tac-toe.h"

//走棋设计

// char board[ROW][COL];
// int result;
// int empty;
// int board_X;
// int board_Y;

void player_turn()//玩家走棋主进程
{
	int i;
	coordinates_input();
	printf("setting");
	for (i = 0; i < 5; i++)
	{
		printf(" .");
		Sleep(300);
	}
	printf("\nDONE\n");
	board_printing();
	printf("\n");
	winner_judge_player();
	dogfall_judge();
	if (result == 0&&empty>0)
	{
		computer_turn();
	}
}

void board_edit_player(int x, int y)//玩家编辑棋盘
{
	board[y][x] = '#';
}

void computer_turn()//电脑走棋主进程
{
	int i;
	printf("it is time for computer to move\n");
	random_coordinates_input();
	printf("computing");
	for (i = 0; i < 5; i++)
	{
		printf(" .");
		Sleep(300);
	}
	printf("\nDONE\n");
	board_printing();
	printf("\n");
	winner_judge_computer();
	dogfall_judge();
	if (result == 0&&empty>0)
	{
		player_turn();
	}
}

void random_coordinates_input()//电脑随机坐标输入
{
	board_X = rand() % COL;
	board_Y = rand() % ROW;
	coordinates_judge_computer();
}

void coordinates_judge_computer()//电脑随机坐标合法性判断
{
	if (board[board_Y][board_X] == ' ')
	{
		board_edit_computer(board_X, board_Y);
	}
	else
	{
		random_coordinates_input();
	}
}

void board_edit_computer(int x, int y)//电脑编辑棋盘
{
	board[y][x] = '*';
}
