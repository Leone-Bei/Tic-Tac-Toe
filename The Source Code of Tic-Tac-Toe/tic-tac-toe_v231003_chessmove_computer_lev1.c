#include "tic-tac-toe_v231003.h"

//走棋设计

// char board[ROW][COL];
// int result;
// int empty;
// int board_X;
// int board_Y;





void computerturn_lev1()//电脑走棋主进程
{
	int i;
	printf("\nIt is time for computer.\n");
	random_coordinates_input_lev1();
	printf("\n\tComputing");
	for (i = 0; i < 5; i++)
	{
		printf(" .");
		Sleep(game_pace);
	}
	printf("DONE\n\n");
	Sleep(500);
	board_printing();
	printf("\n");
	winner_judge_computer();
	dogfall_judge();
	if (result == 0&&empty>0)
	{
		player_turn();
	}
}

//电脑随机坐标输入并判断合法性
void random_coordinates_input_lev1()
{
	while(1)
	{
		srand((unsigned int)time(NULL));
		board_X = rand() % COL;
		board_Y = rand() % ROW;
		if (board[board_Y][board_X] == ' ')
		{
			board_edit_computer(board_X, board_Y);
			break;
		}
	}
}

void board_edit_computer(int x, int y)//电脑编辑棋盘
{
	board[y][x] = computer_chesspieces;
}
