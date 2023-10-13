#include "tic-tac-toe.h"

char board[ROW][COL];
int result;
int empty;
int board_X;
int board_Y;

//游戏主进程

void game_startpoint()//游戏起点
{
	result = 0;
	board_initialization();
	board_printing();
	player_turn();
}

int main()//游戏开始
{
    srand((unsigned int)time(NULL)); //随机种子生成，利用时间函数，所引用的头文件详见"game.h"
    start_page();
    return 0;
}