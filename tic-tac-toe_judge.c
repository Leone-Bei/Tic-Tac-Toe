#include "tic-tac-toe.h"

// char board[ROW][COL];
// int result;
// int empty;
// int board_X;
// int board_Y;

//游戏结果判定

void winner_judge_player()//玩家输赢结果判定
{
	int i;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0]=='#'&& board[i][1] == '#'&& board[i][2] == '#')
		{
			result = 1;
		}
	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == '#' && board[1][i] == '#' && board[2][i] == '#')
		{
			result = 1;
		}
	}
	if (board[0][0] == '#' && board[1][1] == '#' && board[2][2] == '#')
	{
		result = 1;
	}
	if (board[0][2] == '#' && board[1][1] == '#' && board[2][0] == '#')
	{
		result = 1;
	}
	if (result == 1)
	{
		printf("game over\n");
		printf("the player wins\n");
		printf("CONGRATULATIONS\n");
		printf("\n");
		start_page();
	}
}

void winner_judge_computer()//电脑输赢结果判定
{
	int i;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == '*' && board[i][1] == '*' && board[i][2] == '*')
		{
			result = 1;
		}
	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == '*' && board[1][i] == '*' && board[2][i] == '*')
		{
			result = 1;
		}
	}
	if (board[0][0] == '*' && board[1][1] == '*' && board[2][2] == '*')
	{
		result = 1;
	}
	if (board[0][2] == '*' && board[1][1] == '*' && board[2][0] == '*')
	{
		result = 1;
	}
	if (result == 1)
	{
		printf("game over\n");
		printf("the computer wins\n");
		printf("what a pity, you can TRY AGAIN\n");
		printf("\n");
		start_page();
	}
}

void dogfall_judge()//平局判断
{
	empty = 0;
	int j;
	int h;
	for (j = 0; j < 3; j++)
	{
		for(h=0;h<3;h++)
		{
			if (board[j][h] == ' ')
			{
				empty++;
			}
		}
	}
	if (result == 0 && empty == 0)
	{
		printf("game over\n");
		printf("dogfall\n");
		printf("you can TRY AGAIN, if you want to win the computer\n");
		start_page();
	}
}