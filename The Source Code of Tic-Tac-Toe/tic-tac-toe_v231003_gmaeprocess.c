#include "tic-tac-toe_v231003.h"

void game_startpoint()//游戏起点
{
	result = 0;
	board_initialization();
	board_printing();
	player_turn();
}