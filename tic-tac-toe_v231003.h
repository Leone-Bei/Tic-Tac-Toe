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
extern int game_level;//创建游戏难度
extern int key_point_r;//关键点行数
extern int key_point_c;//关键点列数
extern int game_step;
extern int game_pace;


//函数声明
void board_initialization();
void board_printing();
void start_page();
void game_startpoint();
void coordinates_input();
void player_turn(); 
void coordinates_judge_player();
void board_edit_player(int x, int y);
void computerturn_lev1();
void random_coordinates_input_lev1();
void board_edit_computer(int x, int y);
void winner_judge_player();
void winner_judge_computer();
void dogfall_judge();
int three_number_equality(char a1, char a2, char a3);
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
void playerchesspieces_choose_exit();
void computerchesspieces_choose_exit();
void gamepace_choose_exit();
void level_choose_exit();
void player_firstmove_search(int*x,int*y);
void computerturn_lev2_firtmove();
void computerturn_lev2();//电脑后续的棋
