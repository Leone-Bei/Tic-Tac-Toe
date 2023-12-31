#include "tic-tac-toe_v231003.h"

void player_turn()//玩家走棋主进程
{
	int j=0;
	int i;
	coordinates_input();
	printf("\n\tInputing your coordinates");
	for (i = 0; i < 5; i++)
	{
		printf(" .");
		Sleep(game_pace);
	}
	printf("DONE\n\n");
	Sleep(200);
	board_printing();
	printf("\n");
	winner_judge_player();
	dogfall_judge();
	if (result == 0&&empty>0&&game_level==1)
	{
		computerturn_lev1();
	}
	else if(result==0&&empty>0&&game_level==2)
	{
		if(game_step==0)
		{
			computerturn_lev2_firtmove();
		}
		else
		{
			computerturn_lev2();
		}
	}
}

void board_edit_player(int x, int y)//玩家编辑棋盘
{
	board[y][x] = player_chesspieces;
}