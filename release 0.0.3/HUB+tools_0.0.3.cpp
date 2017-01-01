/* HUB+tools.cpp
Created by Gregory Gipson on 1/1/17
Version: 0.0.3
Copyright (c) 2017 - www.hubtaku.com | www.gregorygipson.xyz | www.chaoticlegends.com - All rights reserved. */
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>

#define MaxNo_Menu 5

using namespace std;
HANDLE con=GetStdHandle(STD_OUTPUT_HANDLE);

void gotoxy(int x,int y)
{
	COORD Coord;
	Coord.X=x;
	Coord.Y=y;

	SetConsoleCursorPosition(con,Coord);
}

void textattr(int color)
{
	SetConsoleTextAttribute(con, color);
}

int main()
{
// This piece of code hides the cursor !!
HANDLE hConsoleOutput;
CONSOLE_CURSOR_INFO structCursorInfo;
hConsoleOutput = GetStdHandle( STD_OUTPUT_HANDLE );
GetConsoleCursorInfo( hConsoleOutput, &structCursorInfo );
structCursorInfo.bVisible = FALSE;
SetConsoleCursorInfo( hConsoleOutput, &structCursorInfo );

cout << "Main Menu!\n" << "How are you today? These are the multiple options this tool provides:\n\n";
  const char *menu_list[MaxNo_Menu] = { "Tool 1", "Tool 2", "Tool 3", "Tool 4", "Quit" };
  int i,
      xpos = 10,
      ypos[MaxNo_Menu] = { 3, 6, 9, 12, 15 };

	// list the menu
	for (i=0; i< MaxNo_Menu; ++i)
	{
		gotoxy(xpos, ypos[i] );
		textattr(14);
		printf("%s",menu_list[i] );
	}

	// make menu available to choose
	i=0;
	while(1)
	{
		gotoxy(xpos, ypos[i]);
		textattr(16 );
		printf("%s",menu_list[i] );

		/* note :
            72 -> UP button
			75 -> RIGHT button
            77 -> LEFT button
            80 -> DOWN button
		*/

	switch( _getch() )
    {
		case 72: if(i>0) {
       		gotoxy(xpos,ypos[i] );
            textattr(14);
            printf("%s", menu_list[i] );
            --i;
            }
            break;

		case 80: if(i< MaxNo_Menu-1 )
			{
       			gotoxy(xpos,ypos[i] );
                textattr(14);
                printf("%s", menu_list[i] );
                ++i;
                }
        break;

		case 13: if(i==0) {  gotoxy (10,1);  printf("you choose Tool 1   ");  }
			if(i==1) {  gotoxy (10,1);  printf("you choose Tool 2  ");  }
            if(i==2) {  gotoxy (10,1);  printf("you choose Tool 3 ");  }
            if(i==3) {  gotoxy (10,1);  printf("you choose Tool 4  ");  }
            if(i==4) {  gotoxy (10,1);  printf("you choose Quit  ");  }
            break;
	}
	}

	return 0;
}


