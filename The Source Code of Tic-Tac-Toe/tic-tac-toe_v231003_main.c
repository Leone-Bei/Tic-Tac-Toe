#include "tic-tac-toe_v231003.h"

//创建棋盘
char board[ROW][COL];
int result;
int empty;
int board_X;
int board_Y;
char player_chesspieces='#';
char computer_chesspieces='*';
int game_level=1;//创建游戏难度选项
int key_point_r;//关键点行数
int key_point_c;//关键点列数
int game_step=0;//游戏步数
int game_pace=300;//创建游戏节奏

//游戏主进程
int main()
{
    //游戏开始
    start_page();
    return 0;
}