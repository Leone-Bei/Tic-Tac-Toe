#include "tic-tac-toe_v231003.h"

void player_firstmove_search(int*x,int*y)//玩家第一步棋寻找
{
    int i;
    int j;
    for(i=1;i<=ROW;i++)
    {
        for(j=1;j<=COL;j++)
        {
            if(board[i-1][j-1]!=' ')
            {
                *x=j;
                *y=i;
            }
        }
    }
}

//电脑的第一步棋
void computerturn_lev2_firtmove()
{
    int i;
    int j;
    int player_firstmove_x;
    int player_firstmove_y;
    int random;
    int decision=0;

    game_step++;
    //设置随机种子
    srand( (unsigned)time( NULL ) );  

    //先寻找玩家第一步棋
    player_firstmove_search(&player_firstmove_x,&player_firstmove_y);
    do
    {
        for(i=1;i<=ROW;i++)
        {
            for(j=1;j<=COL;j++)
            {
                //如果正好选中了玩家第一步棋,直接跳过
                if(j!=player_firstmove_x&&i!=player_firstmove_y)
                {
                    //第一步棋下在玩家第一步棋的周围任意一格
                    if(abs(j-player_firstmove_x)<=1 && abs(i-player_firstmove_y)<=1)
                    {
                        Sleep(5);
                        random=rand()%5+1;
                        if(random==3)
                        {
                            decision=1;
                            board[i-1][j-1]=computer_chesspieces;
                        }
                    }
                    if(decision==1)
                    {
                        break;
                    }
                }
            if(decision==1)
            {
                break;
            }
            }
        }
    }
    while(decision==0);
    printf("\nIt is time for computer.\n\n");
    printf("\tComputing");
	for (int i = 0; i < 5; i++)
	{
		printf(" .");
		Sleep(game_level);
	}
	printf("DONE\n\n");
    Sleep(500);
    board_printing();
    printf("\n");
	winner_judge_computer();
	dogfall_judge();
	if (result == 0&&empty>0)
	{
		player_turn();
	}
}

//玩家走棋关键点寻找
void player_keypoint_search()
{
    //定义循环变量
    int r;//行
    int c;//列
    //定义计数器1
    int s;
    //定义计数器2
    int p=0;
    //横向查找
    for(r=1;r<=3;r++)
    {
        //计数器初始化
        s=0;
        //查找
        for(c=1;c<=3;c++)
        {
            if(board[r-1][c-1]==player_chesspieces)
            {
                //找到棋子后，计数器加一
                s++;
            }
        }
        //定位关键点
        if(s==2)
        {
            for(c=1;c<=3;c++)
            {
                if(board[r-1][c-1]==' ')
                {
                    //将当前坐标存入到key_point中
                    key_point_r=r;
                    key_point_c=c;
                    p++;
                    break;
                }
            }
        }        
    }
    //纵向查找
    for(c=1;c<=3;c++)
    {
        //计数器初始化
        s=0;
        //查找
        for(r=1;r<=3;r++)
        {
            if(board[r-1][c-1]==player_chesspieces)
            {
                //找到棋子后，计数器加一
                s++;
            }
        }
        //定位关键点
        if(s==2)
        {
            for(r=1;r<=3;r++)
            {
                if(board[r-1][c-1]==' ')
                {
                    //将当前坐标存入到key_point中
                    key_point_r=r;
                    key_point_c=c;
                    p++;
                    break;
                }
            }
        }        
    }
    //斜线查找
    //主对角线查找                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
    for(c=1,r=1;c<=3,r<=3;c++,r++)
    {
        //计数器初始化
        s=0;
        if(board[r-1][c-1]==player_chesspieces)
        {
            s++;
        }
    }
    //主对角线定位关键点
    if(s==2)
    {
        for(c=1,r=1;c<=3,r<=3;c++,r++)
        {
            if(board[r-1][c-1]==' ')
            {
                key_point_r=r;
                key_point_c=c;
                p++;
                break;
            }
        }
    }
    //次对角线查找                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
    for(c=3,r=1;c>=1,r<=3;c--,r++)
    {
        //计数器初始化
        s=0;
        if(board[r-1][c-1]==player_chesspieces)
        {
            s++;
        }
    }
    //次对角线定位关键点
    if(s==2)
    {
        for(c=3,r=1;c>=1,r<=3;c--,r++)
        {
            if(board[r-1][c-1]==' ')
            {
                key_point_r=r;
                key_point_c=c;
                p++;
                break;
            }
        }
    }
    if(p==0)
    {
        key_point_r=0;
        key_point_c=0;
    }
}                               

void computerturn_lev2()//电脑后续的棋
{
    //寻找关键点
    player_keypoint_search();
    //编辑棋盘
    if(key_point_r>0&&key_point_c>0)
    {
        board[key_point_r-1][key_point_c-1]=computer_chesspieces;
    }
    else
    {
        //若没有找到关键点则随机输入
        while(1)
        {
            srand((unsigned int)time(NULL));
	        key_point_c = rand() % COL+1;
	        key_point_r = rand() % ROW+1;
            if(board[key_point_r-1][key_point_c-1] == ' ')
            {
                break;
            }
        }
        board[key_point_r-1][key_point_c-1]=computer_chesspieces;
    }
    printf("\nIt is time for computer.\n\n");
    printf("\tComputing");
	for (int i = 0; i < 5; i++)
	{
		printf(" .");
		Sleep(game_pace);
	}
	printf("DONE\n\n");
    Sleep(500);
	board_printing();
    printf("\n");
	winner_judge_computer();
	dogfall_judge();
	if (result == 0&&empty>0)
	{
		player_turn();
	}
}
