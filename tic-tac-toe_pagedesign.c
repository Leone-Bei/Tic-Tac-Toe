#include "tic-tac-toe.h"

//开始界面设计

void start_process_display()//新游戏设定加载过程可视化
{
	int i;
	printf("setting a new game ");
	for (i = 0; i < 5; i++)
	{
		Sleep(900);
		printf(". ");
	}
	printf("\n FINISHED\n");
	Sleep(500);
}           

void initialize_process_display()//游戏初始化加载过程可视化
{
	int i;
	printf("initializing the board ");
	for (i = 0; i < 5; i++)
	{
		Sleep(900);
		printf(". ");
	}
	printf("\n FINISHED\n");
	Sleep(500);
}

void exit_process_display()//游戏退出加载进程可视化
{
	int i;
	printf("exitting ");
	for (i = 0; i < 5; i++)
	{
		Sleep(500);
		printf(". ");
	}
	printf("\n FINISHED\n");
	printf("welcome back\n");
}

void start_page()//游戏初始界面
{
	printf("the Tic-Tac-Toe of Leone Bei\n\n");
	game_menu();
}

//任务：在开始界面实现难度选择；实现菜单界面；添加操作说明；棋子自定义；游戏节奏自定义
//菜单界面实现：能够实现从子目录返回到上一级目录

void settings_choose()//游戏设置选项
{
	int settings_choice;
	printf("	--setting--\n");
	printf("	1. level\n");
	printf("	2. chess pieces\n");
	printf("	3. game pace\n");
	printf("	4. back\n");
	printf("	your choice:");
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
			game_menu();
			break;
		default:
			printf("PLEASE INPUT THE RIGHT NUMBER");
			settings_choose();
	}
}

void set_process_display(char word[100])//游戏选项设置加载进程可视化
{
	int i;
	printf("%s",word);
	for (i = 0; i < 5; i++)
	{
		Sleep(900);
		printf(". ");
	}
	printf("\n DONE\n");
	Sleep(300);
}

void gamepace_choose()//游戏节奏选择
{
	int gamepace_choice;
	char gamepace_process_words[100]="game pace setting";
	printf("game pace\n");
	printf("1. slow\n2. middle\n3. fast\n4. back\nyour choice:");
	switch(gamepace_choice)
	{
		case 1:
			set_process_display(gamepace_process_words);
			break;
		case 2:
			set_process_display(gamepace_process_words);
			break;
		case 3:
			set_process_display(gamepace_process_words);
			break;
		case 4:
			settings_choose();
			break;
		default:
			printf("PLEASE INPUT THE RIGHT NUMBER");
			gamepace_choose();		
	}
}

void level_choose()//游戏难度选择
{
	int level_choice;
	char level_process_words[100]="level setting";
	printf("		---level---\n");
	printf("		1. easy\n");
	printf("		2.difficult\n");
	printf("		3. back\n");
	printf("		your choice:");
	scanf("%d",&level_choice);
	switch(level_choice)
	{
		case 1:
			set_process_display(level_process_words);
			printf("\n");
			level_choose_exit();
			break;
		case 2:
			set_process_display(level_process_words);
			printf("\n");
			level_choose_exit();
			break;
		case 3:
			settings_choose();
			break;
		default:
			printf("PLEASE INPUT THE RIGHT NUMBER\n");
			level_choose();
	}
}

void level_choose_exit()//游戏难度选择出口
{
	int levelchoose_exit_choice;
	printf("		1. edit again\n");
	printf("		2. exit\n");
	printf("		your choice:");
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
			printf("PLEASE INPUT THE RIGHT NUMBER\n");
			level_choose_exit();
	}
}

void gamepace_choose_exit()//游戏节奏选择出口
{
	int gamepace_exit_choice;
	printf("		1. edit again\n");
	printf("		2. exit\n");
	printf("		your choice:");
	scanf("%d",&gamepace_exit_choice);
	switch(gamepace_exit_choice)
	{
		case 1:
			printf("\n");
			gamepace_choose();
			break;
		case 2:
			printf("\n");
			settings_choose();
			break;
		default:
			printf("PLEASE INPUT THE RIGHT NUMBER\n");
			gamepace_choose_exit();
	}
}

void chesspieces_choose_exit()//棋子选择出口
{
	int chesspieceschoose_exit_choice;
	printf("			1. edit again\n");
	printf("			2. exit\n");
	printf("			your choice:");
	scanf("%d",&chesspieceschoose_exit_choice);
	switch(chesspieceschoose_exit_choice)
	{
		case 1:
			printf("\n");
			chesspieces_choose();
			break;
		case 2:
			printf("\n");
			settings_choose();
			break;
		default:
			printf("PLEASE INPUT THE RIGHT NUMBER\n");
			chesspieces_choose_exit();
	}
}

void chesspieces_choose()//棋子选择
{
	int chesspieces_choice;
	printf("		--chesspieces_choose--\n");
	printf("		1. player\n");
	printf("		2. computer\n");
	printf("		your choice:");
	scanf("%d",&chesspieces_choice);
	switch(chesspieces_choice)
	{
		case 1:
			palyer_chesspieces_choose();
		case 2:
			computer_chesspieces_choose();
		case 3:
			settings_choose();
		default:
			printf("PLEASE INPUT THE RIGHT NUMBER");
			chesspieces_choose();
	}

}

void palyer_chesspieces_choose()//玩家棋子类型设置
{
	int playerchesspieces_choice;
	char playerchesspieces_process_words[100]="chess pieces for player setting";
	printf("			---chess pieces for player---\n");
	printf("			1. #\n");
	printf("			2. $\n");
	printf("			3. *\n");
	printf("			4. &\n");
	printf("			5. @\n");
	printf("			6. +\n");
	printf("			your choice:");
	scanf("%d",&playerchesspieces_choice);
	switch(playerchesspieces_choice)
	{
		case 1:
			player_chesspieces='#';
			set_process_display(playerchesspieces_process_words);
			printf("\n");
			chesspieces_choose_exit();
			break;
		case 2:
			player_chesspieces='$';
			set_process_display(playerchesspieces_process_words);
			printf("\n");
			chesspieces_choose_exit();
			break;
		case 3:
			player_chesspieces='*';
			set_process_display(playerchesspieces_process_words);
			printf("\n");
			chesspieces_choose_exit();
			break;
		case 4:
			player_chesspieces='&';
			set_process_display(playerchesspieces_process_words);
			printf("\n");
			chesspieces_choose_exit();
			break;
		case 5:
			player_chesspieces='@';
			set_process_display(playerchesspieces_process_words);
			printf("\n");
			chesspieces_choose_exit();
			break;
		case 6:
			player_chesspieces='+';
			set_process_display(playerchesspieces_process_words);
			printf("\n");
			chesspieces_choose_exit();
			break;
		case 7:
			chesspieces_choose();
		default:
			printf("PLEASE INPUT THE RIGHT NUMBER");
			palyer_chesspieces_choose();
	}
}

void computer_chesspieces_choose()//电脑棋子类型设置
{
	int computerchesspieces_choice;
	char computerchesspieces_process_words[100]="chess pieces for computer setting";
	printf("			---chess pieces for computer---\n");
	printf("			1. #\n");
	printf("			2. $\n");
	printf("			3. *\n");
	printf("			4. &\n");
	printf("			5. @\n");
	printf("			6. +\n");
	printf("			your choice:");
	scanf("%d",&computerchesspieces_choice);
	switch(computerchesspieces_choice)
	{
		case 1:
			computer_chesspieces='#';
			set_process_display(computerchesspieces_process_words);
			printf("\n");
			chesspieces_choose_exit();
			break;
		case 2:
			computer_chesspieces='$';
			set_process_display(computerchesspieces_process_words);
			printf("\n");
			chesspieces_choose_exit();
			break;
		case 3:
			computer_chesspieces='*';
			set_process_display(computerchesspieces_process_words);
			printf("\n");
			chesspieces_choose_exit();
			break;
		case 4:
			computer_chesspieces='&';
			set_process_display(computerchesspieces_process_words);
			printf("\n");
			chesspieces_choose_exit();
			break;
		case 5:
			computer_chesspieces='@';
			set_process_display(computerchesspieces_process_words);
			printf("\n");
			chesspieces_choose_exit();
			break;
		case 6:
			computer_chesspieces='+';
			set_process_display(computerchesspieces_process_words);
			printf("\n");
			chesspieces_choose_exit();
			break;
		case 7:
			chesspieces_choose();
		default:
			printf("PLEASE INPUT THE RIGHT NUMBER");
			computer_chesspieces_choose();
	}
}

void game_introduction()//游戏介绍
{
	int gameintroduction_choice1;
	
	printf("game introduction\n");
	printf("version: ttt-231003\n");
	printf("game maker: Leone Bei\n");
	printf("if you want to maore information about this game, you can visit https://github.com/Leone-Bei/Tic-Tac-Toe_by_LeoneBei\n");
	printf("if you want to know how to play, input 1; or you can input other number if you want to exit from the game introduction\nyour choices");
	scanf("%d",&gameintroduction_choice1);
	if(gameintroduction_choice1==1)
	{
		gamerule_instruction();
	}
	else
	{
		game_menu();
	}
}

void gamerule_instruction()//游戏规则指导
{
	int gameintroduction_choice2;
	printf("when you choose something from the menu, for example\n\n");
	printf("1. #\n2. $\n3. *\n4. &\n5. @\n6. +\n7. back\nyour choice:\n\n");
	printf("you should input the number that the menu gives you, or you will be ordered to input the number again until you input the legal number\n\n");
	printf("when you are playing chess with the computer, you can place your chess by input the coordinates on the board\n");
	printf("and if you input the illegal number, you will also be asked to input the number again\n\n");
	printf("remember these rules, and try to exit from the introduction\n");
	printf("1. exit\nyour choice:");
	scanf("%d",&gameintroduction_choice2);
	if( gameintroduction_choice2==1)
	{
		game_menu();
	}
	else
	{
		gamerule_instruction();
	}
}

void game_menu()//游戏菜单选项
{
	int menu_choice;
	printf("-game menu-\n");
	printf("1. new game\n");
	printf("2. settings\n");
	printf("3. game introduction\n");
	printf("4. exit\n");
	printf("your choice:");
	scanf("%d", &menu_choice);
	switch(menu_choice)
	{
		case 1:
			start_process_display();
			printf("\n");
			initialize_process_display();
			printf("\n");
			printf("game start\n");
			//game_startpoint();
			break;
		case 2:
			settings_choose();
			break;
		case 3:
			game_introduction();
			break;
		case 4:
			exit_process_display();
			printf("game exit");//扣4退出游戏
			break;
		default:
			printf("PLEASE INPUT THE RIGHT NUMBER\n");
			game_menu();
	}
}
