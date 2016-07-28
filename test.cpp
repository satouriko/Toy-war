#include <iostream>
#include "DrawHelper.h"

int main()
{
	CLEAR();
	HIDE_CURSOR();
	MOVETO(35,10);
	printf("Bonjour!");
	SET_COLOR(RED_F);
	printf("###am i red?");
	puts("");
	SET_COLOR(GREEN_F);
	MOVETO(38,10);
	printf("j");
	MOVETO(0,1024);
	fflush(stdout);
	sleep(5);
	SHOW_CURSOR();
	//RESET_CURSOR();
	return 0;
}
