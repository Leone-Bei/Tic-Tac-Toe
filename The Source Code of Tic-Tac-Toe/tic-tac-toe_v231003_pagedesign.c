#include "tic-tac-toe_v231003.h"

//开始界面设计

//新游戏设定加载过程界面
void start_process_display()
{
	int i;
	printf("\nSetting a new game ");
	for (i = 0; i < 5; i++)
	{
		Sleep(800);
		printf(". ");
	}
	printf("FINISHED\n");
	Sleep(500);
}           

//游戏初始化加载过程界面
void initialize_process_display()
{
	int i;
	printf("\nInitializing the board ");
	for (i = 0; i < 5; i++)
	{
		Sleep(900);
		printf(". ");
	}
	printf("FINISHED\n");
	Sleep(500);
}

//游戏退出加载进程界面
//********************************************************
//*  Thank you for palying my game! Welcome back again.  *
//********************************************************
void exit_process_display()
{
	int i;
	printf("\nExitting ");
	for (i = 0; i < 5; i++)
	{
		Sleep(300);
		printf(". ");
	}
	printf("FINISHED\n\n");
	Sleep(300);
	printf("**************************************************************\n");
	printf("****  Thank you for palying my game! Welcome back again.  ****\n");
	printf("**************************************************************\n");
	printf("\n");
	Sleep(2000);
	printf("If you find something confusing about this game or you\n");
	printf("have some suggestions, ideas and feedbacks, you are strongly\n");
	printf("recommended to send e-mails to 780365246@qq.com. I expect\n");
	printf("for your voice all the time.");
	Sleep(4000);
	printf("\n\nGoodbye!!!");
	Sleep(3000);
	printf("\n\n");
}

//游戏初始界面
//游戏初始界面设计
//***********************
//****  Tic-Tac-Toe  ****
//***********************
void start_page()
{
	printf("\n\n");
	printf("***********************\n");
	printf("****  Tic-Tac-Toe  ****\n");
	printf("***********************\n");
	printf("\n\n");
	game_menu();
}

//任务：在开始界面实现难度选择；实现菜单界面；添加操作说明；棋子自定义；游戏节奏自定义
//菜单界面实现：能够实现从子目录返回到上一级目录

void game_menu()//游戏菜单选项
{
	int menu_choice;
	printf("-<Game Menu>-\n");
	printf("1. New Game\n");
	printf("2. Settings\n");
	printf("3. Game Introduction\n");
	printf("4. Exit\n");
	printf("\n");
	printf("your choice: ");
	scanf("%d", &menu_choice);
	switch(menu_choice)
	{
		case 1:
			start_process_display();
			initialize_process_display();
			printf("\n");
			printf("Game starts now.\n\n");
			game_startpoint();
			break;
		case 2:
			settings_choose();
			break;
		case 3:
			game_introduction();
			break;
		case 4:
			exit_process_display();
			break;
		default:
			printf("\n!!!PLEASE INPUT THE RIGHT NUMBER!!!\n\n");
			game_menu();
	}
}

void settings_choose()//游戏设置选项
{
	int settings_choice;
	printf("\n");
	printf("\t--<Settings>--\n");
	printf("\t1. Level\n");
	printf("\t2. Chess Pieces\n");
	printf("\t3. Game Pace\n");
	printf("\t4. Back\n");
	printf("\n");
	printf("\tyour choice: ");
	scanf("%d",&settings_choice);
	switch(settings_choice)
	{
		case 1:
			level_choose();
			break;
		case 2:
			chesspieces_choose();
			break;
		case 3:
			gamepace_choose();
			break;
		case 4:
			printf("\n");
			game_menu();
			break;
		default:
			printf("\n\t!!!PLEASE INPUT THE RIGHT NUMBER!!!\n");
			settings_choose();
	}
}

//游戏选项设置加载进程界面
void set_process_display(char word[100])
{
	int i;
	printf("\n%s",word);
	for (i = 0; i < 5; i++)
	{
		Sleep(200);
		printf(". ");
	}
	printf("DONE\n");
}
