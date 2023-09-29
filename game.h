#define ROW 3
#define COL 3

#pragma once
//��ͷ�ļ�
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include<time.h>

//��������
char board[ROW][COL];
int result;

//��������
void board_initialization();
void board_printing();
void start_page();
void game();
void coordinates_input();
void player_turn(); 
void coordinates_judge_player();
void board_edit_player(int x, int y);
void computer_turn();
void random_coordinates_input();
void coordinates_judge_computer();
void board_edit_computer(int x, int y);
void winner_judge_player(int*x);
void winner_judge_computer(int*x);