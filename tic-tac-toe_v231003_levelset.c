#include "tic-tac-toe_v231003.h"

void level_choose()//游戏难度选择
{
	int level_choice;
	char level_process_words[100]="The game level is being set";
	printf("\n\t\t---<Level>---\n");
	printf("\t\t1. Easy");
	if(game_level==1)
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t2. Difficult");
	if(game_level==2)
	{
		printf("\t<<<");
	}
	printf("\n");
	printf("\t\t3. Back\n\n");
	printf("\t\tyour choice:");
	scanf("%d",&level_choice);
	switch(level_choice)
	{
		case 1:
			set_process_display(level_process_words);
			printf("\n");
			game_level=1;
			level_choose_exit();
			break;
		case 2:
			set_process_display(level_process_words);
			printf("\n");
			game_level=2;
			level_choose_exit();
			break;
		case 3:
			settings_choose();
			break;
		default:
			printf("\n\t\t!!!PLEASE INPUT THE RIGHT NUMBER!!!\n");
			level_choose();
	}
}

void level_choose_exit()//游戏难度选择出口
{
	int levelchoose_exit_choice;
	printf("\t\t1. Edit again\n");
	printf("\t\t2. Exit\n\n");
	printf("\t\tyour choice:");
	scanf("%d",&levelchoose_exit_choice);
	switch(levelchoose_exit_choice)
	{
		case 1:
			printf("\n");
			level_choose();
			break;
		case 2:
			printf("\n");
			settings_choose();
			break;
		default:
			printf("\n\t\t!!!PLEASE INPUT THE RIGHT NUMBER!!!\n\n");
			level_choose_exit();
	}
}