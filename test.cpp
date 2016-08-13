#include <iostream>
#include "DrawHelper.h"
#include "Vector.h"

using namespace std;

int main()
{
	int array1[] = {1,2,3,4};
	MyVector<int> test4_1(array1,4);
	int array2[] = {1,2,3,4};
	MyVector<int> test4_2(array2,4);
	cout << test4_1 << '\n' << test4_2 << endl;
	cout << test4_1 + test4_2 << endl;

	//CLEAR();
	//HIDE_CURSOR();
	//MOVETO(35,10);
	//printf("Bonjour!");
	//SET_COLOR(RED_F);
	//printf("###am i red?");
	//puts("");
	//SET_COLOR(GREEN_F);
	//MOVETO(38,10);
	//printf("j");
	//MOVETO(0,1024);
	//fflush(stdout);
	//sleep(5);
	//SHOW_CURSOR();
	////RESET_CURSOR();
	return 0;
}
