# include "iGraphics.h"
int mposx, mposy;

int x = 400, y = 700, change = -5, a = 200, b = 600, p = 300, q = 700, r = 100, s = 700, d = 600, e = 700;
bool flag, flag2, flag3, flag4, flag5, flag6, flag7 , flag8,flag9,flag10,flag11 , flag12;
int count = 1, count_blue = 1, count_green = 1, count_red = 1;
bool bg1 = false, bg2 = false, bg3 = false, bg4 = false;
bool musicOn = true, popmusic = true;
int score;
char scr[15];
int life = 3;
char lif[15];
int ur_score;

void blackmv()
{

	y += change;
	//change *= +1;

	if (y <= 0){
		//x = rand() % 600;
		y = 700;
		y += change;
		//change *= +1;
		life--;
	}
}


void bluemv()
{

	//if (flag == true)
		b += change;
	if (b <= 0){
		a = rand() % 600;
		b = 700;
		b += change;
		life--;
		//change *= +1;
	}
}
void greenmv()
{
	//if (flag2 == true)
		q += change;
	if (q <= 0){
		//p = rand() % 600;
		q = 700;
		life--;
		//change *= +1;
	}
}
void ormv()
{
	if (flag3 == true)
		s += change;
	if (s <= 0)
	{
	//	r = rand() % 600;	
		s = 700;
		life--;
		change *= +1;
	}
}

/*void hrtmv()
{
	if (flag4 == true)
		e += change;
	if (e <= 0)
		e = 700;
	change *= +1;
}*/
void true_flag()
{
	flag = true;
}
void true_flag2()
{
	flag2 = true;
}
void true_flag3()
{
	flag3 = true;
}
void true_flag4()
{
	flag4 = true;
}
void true_flag5()
{
	flag5 = true;
}
void true_flag6(){
	flag6 = true;
}
void true_flag7(){
	flag7 = true;
}

void true_flag8(){
	flag8 = true;
}
void true_flag9(){
	flag9 = true;
}
void true_flag10(){
	flag10 = true;
}

void gameplay(){
	iShowBMP(0, 0, "sky.bmp");

	_itoa_s(score, scr, 10);
	iText(2, 685, "SCORE :", GLUT_BITMAP_HELVETICA_10);
	iText(2, 670, scr, GLUT_BITMAP_HELVETICA_10);

	_itoa_s(life, lif, 10);
	iText(2, 655, "LIFE :", GLUT_BITMAP_HELVETICA_10);
	iText(2, 645, lif, GLUT_BITMAP_HELVETICA_10);

	if (count == 1){
		iShowBMP2(x,y, "blck.bmp", 0);
	}
	else if (count == -1)
	{
		count = 1;
		x = rand()%600;
		y = 700;
	}
	

	if (count_blue == 1){
		iShowBMP2(a, b, "BLUE.bmp", 0);
	}
	else if (count_blue == -1)
	{
		count_blue = 1;
		a = rand() % 600;
		b = 700;
	}

	if (count_green == 1){
		iShowBMP2(p, q, "green.bmp", 0);
	}
	else if (count_green == -1)
	{
		count_green = 1;
		p = rand() % 600;
		q = 700;
	}

	if (count_red == 1){
		iShowBMP2(r, s, "red.bmp", 0);
	}
	else if (count_red == -1)
	{
		count_red = 1;
		r = rand() % 600;
		s = 700;
	}
	
		
		//iShowBMP2(r, s, "red.bmp", 0);
		//iShowBMP2(p, q, "green.bmp", 0);
		iShowBMP2(mposx, mposy, "trt.bmp", 255);
		if (life <= 0)
		{
			//flag5 = false;
			iShowBMP(0, 0, "gmovrf.bmp");
			_itoa_s(score, scr, 10);
			iText(265, 324, "YOUR SCORE :", GLUT_BITMAP_HELVETICA_10);
			iText(350, 324, scr, GLUT_BITMAP_HELVETICA_10);
		}
	
}
//void setting(){
	//iShowBMP(0, 0, "set.bmp");
//}
void help(){
	iShowBMP(0, 0, "hlpfnl.bmp");
}
void xit(){
	iShowBMP(0, 0, "xit.bmp");
}

void glo1(){
	iShowBMP(0, 0, "ngglo.bmp");
}
void glo2(){
	iShowBMP(0, 0, "hlpglo.bmp");
}
void glo3(){
	iShowBMP(0, 0, "xitglo.bmp");
}
//void glo4(){
	//iShowBMP(0, 0, "gm5.bmp");
//}
void iDraw()
{
	iClear();

	if (flag5 == false)
	{
		
	    if (bg1 == true) glo1();
		else if (bg2 == true) glo2();
		else if (bg3 == true) glo3();
		//else if (bg4 == true) glo4();
		else iShowBMP(0, 0, "menu1.bmp");
	}
	
	if (flag5 == true)
	{
		
		gameplay();
	}
	
	//else	if (flag6 == true){
			//setting();
		//}
	
	 //if (flag6 == true){
		//setting();
	//}
	//else if (flag12 == true){
		//back();
	//}
	else if (flag7 == true){
		help();
	}
	else if (flag8 == true){
		xit();
	}
	 /*
	else if (flag8 == true){
		glo1();
	}
	else if (flag9 == true){
		glo2();
	}
	else if (flag10 == true){
		glo3();
	}
	else if (flag11 == true){
		glo4();
	}
	
	else {
		iShowBMP(0, 0, "gm5.bmp");
		iShowBMP(0, 0, "gm4.bmp");
		iShowBMP(0, 0, "gm3.bmp");
		iShowBMP(0, 0, "gm21.bmp");

		iShowBMP(0, 0, "gm1.bmp");
	}
	*/
	

	//iShowBMP2(d, e, "heart.bmp",0);



}


/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	mposx = mx;
	mposy = my;
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if ( mx > 30 && mx<655 && my>525 && my < 592)
			{
				flag5 = true;
				musicOn = false;
				if (!musicOn)
				{
					PlaySound(0, 0, 0);

				}
			}
			if (flag5 == true)
			{
				if (mx >= x + 13 && mx <= x + 13 + 73 && my >= y + 2 && my <= y + 93)
				{
					count = -1;
					score++ ;
					popmusic = true;
					if (popmusic)
					{
						PlaySound("pop.wav", NULL, SND_ASYNC);
					}

				}
				if (mx >= a + 13 && mx <= a + 13 + 73 && my >= b + 2 && my <= b + 93)
				{
					count_blue = -1;
					score++;
					popmusic = true;
					if (popmusic)
					{
						PlaySound("pop.wav", NULL, SND_ASYNC);
					}
				}
				if (mx >= p + 13 && mx <= p + 13 + 73 && my >= q + 2 && my <= q + 93)
				{
					count_green = -1;
					score++;
					popmusic = true;
					if (popmusic)
					{
						PlaySound("pop.wav", NULL, SND_ASYNC);
					}
				}
				if (mx >= r + 13 && mx <= r + 13 + 73 && my >= s + 6 && my <= s + 99)
				{
					count_red = -1;
					score++;
					popmusic = true;
					if (popmusic)
					{
						PlaySound("pop.wav", NULL, SND_ASYNC);
					}
				}
			}
		
		
		//if (flag6 == false && mx>30 && mx<655 && my>402 && my < 476)
		//{
			//flag6 = true;
		//}
		//if (flag6 == true){
		
		//}
	 if (flag7 == false  && mx>30 && mx<655 && my>340 && my < 410){
			flag7 = true;
		}
	 if (flag7 == true)
	 {
		 if (mx >= 617 && mx <= 673 && my >= 635 && my <= 681)
		 {
			flag7 = false;
		 }
	 }
	 if (flag8 == false && mx>30 && mx<655 && my>155 && my < 223){
		 flag8 = true;
	 }
		
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
/*iPasiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx, int my)
{
	//printf("%d %d\n", mx, my);
	//place your code here
	mposx = mx - 50;
	mposy = my - 50;
	if (flag5==false && mx>30 && mx<655 && my>525 && my<592)
	{
		bg1 = true;
		bg2 = false;
		bg3 = false;
		//bg4 = false;
	}
	if (flag5 == false && mx>30 && mx<655 && my>340 && my < 410)
	{
		bg1 = false;
		bg2 = true;
		bg3 = false;
		//bg4 = false;
	}
	if (flag5 == false && mx>30 && my<655 && my>156 && my < 223)
	{
		bg1 = false;
		bg2 = false;
		bg3 = true;
		//bg4 = false;
	}
	/*if (flag5 == false && mx>30 && mx<656 && my>152 && my < 246)
	{
		bg1 = false;
		bg2 = false;
		bg3 = false;
		bg4 = true;
	}*/
	/*else if (flag9 == false && mx>30 && mx<655 && my>402 && my < 476)
	{
		flag9 = true;
	}*/
	/*else if (flag10 == false && mx>30 && my<655 && my>279 && my < 360){
		flag10 = true;
	}
	else if (flag11 == false && mx>30 && mx<656 && my>152 && my < 246){
		flag11 = true;
	}*/
	// if(mposx>30&&mposx<655&&mposy>525&&mposy<592){
	//	 x2=0;
	// y3=0;

	// }        /*Something to do with mx*/
	// else if(my== 2){}   /*Something to do with my*/


}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		exit(0);
	}
	//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}
//
int main()
{

	iSetTimer(50, blackmv);
	//iSetTimer(100, blackmv2);
	iSetTimer(500, true_flag);
	iSetTimer(60, bluemv);
	iSetTimer(1000, true_flag2);
	iSetTimer(40, greenmv);
	iSetTimer(1520, true_flag3);
	iSetTimer(70, ormv);
	//iSetTimer(2800, true_flag4);
	//iSetTimer(.1, hrtmv);
	if (musicOn)
	{
		PlaySound("bgs.wav", NULL, SND_LOOP | SND_ASYNC);

	}
	if (!popmusic)
	{
		PlaySound("pop.wav", NULL, SND_ASYNC);
	}
	iInitialize(700, 700, "Baloon_Shoot");
	return 0;
}
