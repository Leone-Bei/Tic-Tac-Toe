#define ROW 3
#define COL 3

#pragma once
//引头文件
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include<time.h>

extern char board[ROW][COL];
extern int result;
extern int empty;
extern int board_X;
extern int board_Y;
extern char player_chesspieces;
extern char computer_chesspieces;


//函数声明
void board_initialization();
void board_printing();
void start_page();
void game_startpoint();
void coordinates_input();
void player_turn(); 
void coordinates_judge_player();
void board_edit_player(int x, int y);
void computer_turn();
void random_coordinates_input();
void coordinates_judge_computer();
void board_edit_computer(int x, int y);
void winner_judge_player();
void winner_judge_computer();
void dogfall_judge();
void game_menu();
void gamerule_instruction();
void game_introduction();
void computer_chesspieces_choose();
void palyer_chesspieces_choose();
void chesspieces_choose();
void level_choose();
void gamepace_choose();
void set_process_display(char word[100]);
void settings_choose();
void chesspieces_choose_exit();
void gamepace_choose_exit();
void level_choose_exit();