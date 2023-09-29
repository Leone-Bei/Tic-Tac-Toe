#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

int board_X;
int board_Y;
int main()
{
	//board_initialization();
	srand((unsigned int)time(NULL)); //随机种子生成，利用时间函数，所引用的头文件详见"game.h"
	//game();
	//computer_turn();
	start_page();
	//player_turn();
	//printf("%c", board[board_X][board_Y]);
	return 0;
}