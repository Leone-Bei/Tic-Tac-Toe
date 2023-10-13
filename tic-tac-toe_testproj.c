#include <stdio.h>
#include "tic-tac-toe.h"
#include "tic-tac-toe_test.h"

char board[ROW][COL];
int result;
int empty;
int board_X;
int board_Y;
char player_chesspieces;
char computer_chesspieces;

// void game_menu_test()
// {
//     int menu_choice;
// 	printf("-game menu-\n");
// 	printf("1. new game\n");
// 	printf("2. settings\n");
// 	printf("3. game introduction\n");
// 	printf("4. exit\n");
// 	printf("your choice:");
// 	scanf("%d", &menu_choice);
// 	switch(menu_choice)
// 	{
// 		case 1:
// 			printf("game start\n");
// 			break;
// 		case 2:
// 			settings_choose_test();
// 			break;
// 		case 3:
// 			//game_introduction();
// 			break;
// 		case 4:
// 			printf("game exit");
// 			break;
// 		default:
// 			printf("PLEASE INPUT THE RIGHT NUMBER\n");
// 			game_menu_test();
// 	}
// }


// void settings_choose_test()
// {
//     int setting_choice;
// 	printf("	--setting--\n");
// 	printf("	1. level\n");
// 	printf("	2. chess pieces\n");
// 	printf("	3. game pace\n");
// 	printf("	4. back\n");
// 	printf("	your choice:");
// 	scanf("%d",&setting_choice);
// 	switch(setting_choice)
// 	{
// 		case 1:
// 			level_choose_test();
// 			break;
// 		case 2:
// 			//chesspieces_choose();
// 			break;
// 		case 3:
// 			//gamepace_choose();
// 			break;
// 		case 4:
// 			game_menu_test();
//             break;
// 		default:
// 			printf("PLEASE INPUT THE RIGHT NUMBER");
// 			settings_choose_test();
// 	}
// }


// void level_choose_test()
// {
//     int level_choice;
// 	printf("		---level---\n");
// 	printf("		1. easy\n");
// 	printf("		2.difficult\n");
// 	printf("		3. back\n");
// 	printf("		your choice:");
// 	scanf("%d",&level_choice);
// 	switch(level_choice)
// 	{
// 		case 1:
// 			printf("\n");
// 			levelchoose_exit_test();
// 			break;
// 		case 2:
// 			printf("\n");
// 			levelchoose_exit_test();
// 			break;
// 		case 3:
// 			settings_choose_test();
// 			break;
// 		default:
// 			printf("PLEASE INPUT THE RIGHT NUMBER\n");
// 			level_choose_test();
// 	}
// }


// void levelchoose_exit_test()
// {
// 	int levelchooseexit_choice;
// 	printf("		1. edit again\n");
// 	printf("		2. exit\n");
// 	printf("		your choice:");
// 	scanf("%d",&levelchooseexit_choice);
// 	switch(levelchooseexit_choice)
// 	{
// 		case 1:
// 			printf("\n");
// 			level_choose_test();
// 			break;
// 		case 2:
// 			printf("\n");
// 			settings_choose_test();
// 			break;
// 		default:
// 			printf("PLEASE INPUT THE RIGHT NUMBER\n");
// 			levelchoose_exit_test();
// 	}
// }



int main()
{
    start_page();
    // game_menu_test();
    //levelchoose_exit_test();
    return 0;
}