
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>

#include "iGraphics.h"
int box;
int b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25;
int b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36;
int mode,game2=0;
/* 
	function iDraw() is called again and again by the system.
*/
void flag(){
if(b1==1) 
      iShowBMP(265,167,"flag.bmp");	
	if(b2==1) 
      iShowBMP(310,167,"flag.bmp");	
	if(b3==1) 
      iShowBMP(352,167,"flag.bmp"); 	
	if(b4==1) 
      iShowBMP(394,167,"flag.bmp");
	if(b5==1) 
      iShowBMP(437,167,"flag.bmp");  	
	if(b6==1) 
      iShowBMP(479,167,"flag.bmp");	
	if(b7==1) 
      iShowBMP(265,212,"flag.bmp");  	
	if(b8==1) 
      iShowBMP(310,212,"flag.bmp");	
	if(b9==1) 
      iShowBMP(352,212,"flag.bmp");	 	
	if(b10==1) 
      iShowBMP(394,212,"flag.bmp");	
	if(b11==1) 
      iShowBMP(437,212,"flag.bmp"); 	
	if(b12==1) 
      iShowBMP(479,212,"flag.bmp");	 
	
	if(b13==1) 
      iShowBMP(265,255,"flag.bmp");
	
	if(b14==1) 
      iShowBMP(310,255,"flag.bmp");  	
	if(b15==1) 
     iShowBMP(352,255,"flag.bmp");	  
	
	if(b16==1) 
      iShowBMP(394,255,"flag.bmp");	  
	
	if(b17==1) 
     iShowBMP(437,255,"flag.bmp");	
	if(b18) 
      iShowBMP(479,255,"flag.bmp");	  
	
	if(b19==1) 
      iShowBMP(265,297,"flag.bmp");	  
	
	if(b20==1) 
     iShowBMP(310,297,"flag.bmp");	 
	
	if(b21==1) 
      iShowBMP(352,297,"flag.bmp");	  
	
	if(b22==1) 
     iShowBMP(394,297,"flag.bmp");	  
	
	if(b23==1) 
     iShowBMP(437,297,"flag.bmp");	  
	
	if(b24==1) 
    iShowBMP(479,297,"flag.bmp");	  
	
	if(b25==1) 
     iShowBMP(265,339,"flag.bmp");	  
	
	if(b26==1) 
      iShowBMP(310,339,"flag.bmp");	  
	
	if(b27==1) 
     iShowBMP(352,339,"flag.bmp");	  
	
	if(b28==1) 
     iShowBMP(394,339,"flag.bmp");	  
	
	if(b29==1) 
    iShowBMP(437,339,"flag.bmp");	  
	
	if(b30==1) 
    iShowBMP(479,339,"flag.bmp");
	
	if(b31==1) 
    iShowBMP(265,382,"flag.bmp");	  
	
	if(b32==1) 
    iShowBMP(310,382,"flag.bmp");	  
	
	if(b33==1) 
    iShowBMP(352,382,"flag.bmp");	  
	
	if(b34==1) 
    iShowBMP(394,382,"flag.bmp");
	  	
	if(b35==1) 
    iShowBMP(437,382,"flag.bmp");
	  
	if(b36==1) 
    iShowBMP(479,382,"flag.bmp");
	  
	

}
void game1(){
if(b8==4) 
    iShowBMP(310,212,"3.bmp");
		
	if(b3==3) 
    iShowBMP(352,167,"2.bmp");	
	if(b6==6) 
    iShowBMP(478,167,"empty.bmp"); 
	
	if(b13==6 || b19==6 || b20) {
    iShowBMP(265,255,"empty.bmp");
	iShowBMP(265,297,"empty.bmp");
	iShowBMP(310,298,"empty.bmp");
	iShowBMP(265,339,"1.bmp");
	iShowBMP(310,338,"1.bmp");
	iShowBMP(352,339,"1.bmp");
	iShowBMP(310,255,"2.bmp");
	iShowBMP(352,297,"1.bmp");
	iShowBMP(265,212,"2.bmp");
	}
	if(b5==6 || b11==6 ||b12==6 || b6==6){
	 iShowBMP(478,167,"empty.bmp");
	 iShowBMP(478,167,"empty.bmp");	
    iShowBMP(437,212,"empty.bmp");	
    iShowBMP(479,212,"empty.bmp");	
    iShowBMP(394,167,"1.bmp");	
    iShowBMP(394,212,"1.bmp");	 
    iShowBMP(394,255,"3.bmp");		
    iShowBMP(437,255,"2.bmp");	
    iShowBMP(479,255,"1.bmp");	
    iShowBMP(436,167,"empty.bmp");
	}
	if(b33==6){	
    iShowBMP(310,382,"1.bmp");	
    iShowBMP(352,382,"empty.bmp");	
    iShowBMP(394,339,"3.bmp");	 
    iShowBMP(394,382,"1.bmp");

	}
	if(b1==5 || b2==5|| b9==5|| b31==5||b35==5||b22==5||b23==5){
    iShowBMP(310,167,"mine.bmp");	 
    iShowBMP(265,167,"mine.bmp");	 
    iShowBMP(265,382,"mine.bmp");		 
    iShowBMP(394,297,"mine.bmp");	 
    iShowBMP(437,297,"mine.bmp");	 
    iShowBMP(437,382,"mine.bmp");	
    iShowBMP(352,212,"mine.bmp");
	iSetColor(255,0,0);
	iText(317,464,"GAME OVER",GLUT_BITMAP_TIMES_ROMAN_24);
	game2=2;
	}
	if(b17==3) 
    iShowBMP(437,255,"2.bmp");
	if(b18==2) 
    iShowBMP(479,255,"1.bmp");
	if(b34==2) 
    iShowBMP(394,382,"1.bmp");
	if(b28==4) 
    iShowBMP(394,339,"3.bmp");
	if(b16==4) 
    iShowBMP(394,255,"3.bmp");
	if(b10==2) 
    iShowBMP(394,212,"1.bmp");
	if(b21==2) 
    iShowBMP(352,297,"1.bmp");
	if(b14==2) 
    iShowBMP(310,255,"2.bmp");
	if(b25==2) 
    iShowBMP(265,339,"1.bmp");
	if(b4==2) 
    iShowBMP(394,167,"1.bmp");
	if(b27==2) 
    iShowBMP(352,339,"1.bmp");
	if(b26==2) 
    iShowBMP(310,338,"1.bmp");
	if(b32==2) 
    iShowBMP(310,382,"1.bmp");
	
	if(b7==3) 
    iShowBMP(265,212,"2.bmp");
	
	
	if(b15==3) 
    iShowBMP(352,255,"2.bmp");			
	
	if(b29==4) 
    iShowBMP(437,339,"3.bmp");
		
	if(b24==2) 
    iShowBMP(479,297,"1.bmp");
	if(b30==3) 
    iShowBMP(479,339,"2.bmp");
	if(b36==2) 
    iShowBMP(479,382,"1.bmp");
}


void game22(){

	if(b8==4) 
    iShowBMP(310,212,"3.bmp");
		
	if(b3==3) 
    iShowBMP(352,167,"2.bmp");	
	
	if(b17==2) 
    iShowBMP(437,255,"1.bmp");
	
	if(b34==2) 
    iShowBMP(394,382,"1.bmp");
	
	if(b16==3) 
    iShowBMP(394,255,"2.bmp");
	
	if(b21==3) 
    iShowBMP(352,297,"2.bmp");
	
	if(b4==3) 
    iShowBMP(394,167,"2.bmp");
	if(b27==2) 
    iShowBMP(352,339,"1.bmp");
	if(b26==2) 
    iShowBMP(310,338,"1.bmp");
	if(b32==2) 
    iShowBMP(310,382,"1.bmp");
	
	if(b7==3) 
    iShowBMP(265,212,"2.bmp");
	
	
	if(b15==4) 
    iShowBMP(352,255,"3.bmp");			
	
	if(b29==3) 
    iShowBMP(437,339,"2.bmp");
		
	if(b24==2) 
    iShowBMP(479,297,"1.bmp");
	
	if(b36==2) 
    iShowBMP(479,382,"1.bmp");
	if(b31==2) 
    iShowBMP(265,382,"1.bmp");
	if(b33==2) 
    iShowBMP(352,382,"1.bmp");
	if(b35==3) 
    iShowBMP(437,382,"2.bmp");
	if(b19==3) 
    iShowBMP(265,297,"2.bmp");
	if(b20==3) 
    iShowBMP(310,298,"2.bmp");
	if(b22==2) 
    iShowBMP(394,297,"1.bmp");
	if(b23==3) 
    iShowBMP(437,297,"2.bmp");
	if(b13==2) 
    iShowBMP(265,255,"1.bmp");
	
	if(b11==2) 
    iShowBMP(437,212,"1.bmp");
	
	
	if(b2==3) 
    iShowBMP(310,167,"2.bmp");
	if(b5==2) 
    iShowBMP(437,167,"1.bmp");
    
	if(b6==6 || b12==6 || b18==6){
    iShowBMP(479,212,"empty.bmp");
    iShowBMP(479,255,"empty.bmp");
    iShowBMP(478,167,"empty.bmp");
	iShowBMP(437,212,"1.bmp");
	iShowBMP(437,167,"1.bmp");
    iShowBMP(437,297,"2.bmp");
	iShowBMP(479,297,"1.bmp");
	iShowBMP(437,255,"1.bmp");
	}

	if(b1==5 ||b9==5 || b10==5 || b14==5 || b25==5 || b28 ==5 || b30==5){
    iShowBMP(265,167,"mine.bmp");
	iShowBMP(352,212,"mine.bmp");
	iShowBMP(479,339,"mine.bmp");
	iShowBMP(310,255,"mine.bmp");
    iShowBMP(265,339,"mine.bmp");
    iShowBMP(394,212,"mine.bmp");
	iShowBMP(394,339,"mine.bmp");
	iSetColor(255,0,0);
	iText(317,464,"GAME OVER",GLUT_BITMAP_TIMES_ROMAN_24);
	game2=1;
	}
}

void iDraw()
{
	//place your drawing codes here	
	if(mode==0 ){
	iClear();
	iShowBMP(0,0,"grass.bmp");
	iShowBMP(0,568,"menu.bmp");
	iShowBMP(260,160,"board.bmp");
	flag();
	game1();
	}
	else if(mode==1){
	iShowBMP(0,536,"exit.bmp");
	}
	else if(mode==2){
	iClear();
	iShowBMP(0,0,"rules.bmp");
	}

	else if( mode==3){
	iClear();
	iShowBMP(0,0,"grass.bmp");
	iShowBMP(0,568,"menu.bmp");
	iShowBMP(260,160,"board.bmp");
	flag();
	game22(); 
	}
    
	
	  
	
}


/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		printf("%d %d\n", mx, my);
		//place your codes here	
		if(mx >= 0 && mx <= 60 && my >= 568 && my <= 600  ){
		mode=1;
		}
		if(mx >= 0 && mx <= 126 && my >= 540 && my <= 568 && mode==1  ){
		exit(0);
		}
		if(mx >= 64 && mx <= 126 && my >= 568 && my <= 600   ){
		mode=2;
		}
		/*if(mx >= 0 && mx <= 800 && my >= 0 && my <= 500   ){
		mode=0;
		}*/
		if(mx >= 265 && mx <= 300 && my >= 212 && my <= 240 && mode==0  )
		{
			b7=3;
		}
			else if(mx >= 310 && mx <= 338 && my >= 212 && my <= 240 && mode==0)
		{
			b8=4;
		}
		else if(mx >= 265 && mx <= 300 && my >= 167 && my <= 200 && mode==0 )
		{
			b1=5;
		}
		else if(mx >= 310 && mx <= 338 && my >= 168 && my <= 198 && mode==0)
		{
			b2=5;
		}
		else if(mx >= 352 && mx <= 381 && my >= 167 && my <= 200 && mode==0)
		{
			b3=3;
		}
		else if(mx >= 394 && mx <= 424 && my >= 167 && my <= 200 && mode==0)
		{
			b4=2;
		}
		else if(mx >= 437 && mx <= 466 && my >= 167 && my <= 200 && mode==0)
		{
			b5=6;
		}
		else if(mx >= 479 && mx <= 508 && my >= 167 && my <= 200 && mode==0)
		{
			b6=6;
		}else if(mx >= 352 && mx <= 381 && my >= 212 && my <= 240 && mode==0)
		{
			b9=5;
		}
		else if(mx >= 265 && mx <= 300 && my >= 255 && my <= 283 && mode==0)
		{
			b13=6;
		}
			else if(mx >= 265 && mx <= 300 && my >= 297 && my <= 326 && mode==0 )
		{
			b19=6;
		}
			else if(mx >= 265 && mx <= 300 && my >= 339 && my <= 367 && mode==0 )
		{
			b25=2;
		}
				else if(mx >= 265 && mx <= 300 && my >= 382 && my <= 410 && mode==0)
		{
			b31=5;
		}
				else if(mx >= 310 && mx <= 338 && my >= 255 && my <= 283 && mode==0)
		{
			b14=2;
		}
			else if(mx >= 310 && mx <= 338 && my >= 297 && my <= 326 && mode==0)
		{
			b20=6;
		}
			else if(mx >= 310 && mx <= 338 &&  my >= 339 && my <= 367 && mode==0)
		{
			b26=2;
		}
			else if(mx >= 310 && mx <= 338 && my >= 382 && my <= 410 && mode==0)
		{
			b32=2;
		}
			else if(mx >= 352 && mx <= 381 && my >= 255 && my <= 283 && mode==0)
		{
			b15=3;
		}
			else if(mx >= 352 && mx <= 381 && my >= 297 && my <= 326 && mode==0)
		{
			b21=2;
		}
			else if(mx >= 352 && mx <= 381 && my >= 339 && my <= 367 && mode==0)
		{
			b27=2;
		}
			else if(mx >= 352 && mx <= 381 && my >= 382 && my <= 410 && mode==0)
		{
			b33=6;
		}
			else if(mx >= 394 && mx <= 424 && my >= 212 && my <= 240 && mode==0)
		{
			b10=2;
		}
				else if(mx >= 394 && mx <= 424 && my >= 255 && my <= 283 && mode==0)
		{
			b16=4;
		}
			else if(mx >= 394 && mx <= 424 && my >= 297 && my <= 326 && mode==0)
		{
			b22=5;
		}
				else if(mx >= 394 && mx <= 424 &&  my >= 339 && my <= 367 && mode==0)
		{
			b28=4;
		}
			else if(mx >= 394 && mx <= 424 && my >= 382 && my <= 410 && mode==0)
		{
			b34=2;
		}
			else if(mx >= 437 && mx <= 466 && my >= 212 && my <= 240 && mode==0)
		{
			b11=6;
		}
				else if(mx >= 437 && mx <= 466 && my >= 255 && my <= 283 && mode==0)
		{
			b17=3;
		}
			else if(mx >= 437 && mx <= 466 && my >= 297 && my <= 326 && mode==0)
		{
			b23=5;
		}
				else if(mx >= 437 && mx <= 466 && my >= 339 && my <= 367 && mode==0)
		{
			b29=4;
		}
			else if(mx >= 437 && mx <= 466 && my >= 382 && my <= 410 && mode==0)
		{
			b35=5;
		}
			else if(mx >= 479 && mx <= 508 && my >= 212 && my <= 240 && mode==0)
		{
			b12=6;
		}
				else if(mx >= 479 && mx <= 508 && my >= 255 && my <= 283 && mode==0)
		{
			b18=2;
		}
			else if(mx >= 479 && mx <= 508 && my >= 297 && my <= 326 && mode==0)
		{
			b24=2;
		}
				else if(mx >= 479 && mx <= 508 && my >= 339 && my <= 367 && mode==0)
		{
			b30=3;
		}
			else if(mx >= 479 && mx <= 508 && my >= 382 && my <= 410 && mode==0)
		{
			b36=2;
		}
			else if(mx >= 317 && mx <= 456 && my >= 464 && my <= 481 && game2==2 && mode==0)
		{
		 
		 mode=3;
		 b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0,b12=0,b13=0,b14=0,b15=0,b16=0,b17=0,b18=0;
		 b19=0,b20=0,b21=0,b22=0,b23=0,b24=0,b25=0,b26=0,b27=0,b28=0,b29=0,b30=0,b31=0,b32=0,b33=0,b34=0,b35=0,b36=0;
		}
			if(mx >= 265 && mx <= 300 && my >= 212 && my <= 240 && mode==3  )
		{
			b7=3;
		}
			else if(mx >= 310 && mx <= 338 && my >= 212 && my <= 240 && mode==3)
		{
			b8=4;
		}
		else if(mx >= 265 && mx <= 300 && my >= 167 && my <= 200 && mode==3 )
		{
			b1=5;
		}
		else if(mx >= 310 && mx <= 338 && my >= 168 && my <= 198 && mode==3)
		{
			b2=3;
		}
		else if(mx >= 352 && mx <= 381 && my >= 167 && my <= 200 && mode==3)
		{
			b3=3;
		}
		else if(mx >= 394 && mx <= 424 && my >= 167 && my <= 200 && mode==3)
		{
			b4=3;
		}
		else if(mx >= 437 && mx <= 466 && my >= 167 && my <= 200 && mode==3)
		{
			b5=2;
		}
		else if(mx >= 479 && mx <= 508 && my >= 167 && my <= 200 && mode==3)
		{
			b6=6;
		}else if(mx >= 352 && mx <= 381 && my >= 212 && my <= 240 && mode==3)
		{
			b9=5;
		}
		else if(mx >= 265 && mx <= 300 && my >= 255 && my <= 283 && mode==3)
		{
			b13=2;
		}
			else if(mx >= 265 && mx <= 300 && my >= 297 && my <= 326 && mode==3 )
		{
			b19=3;
		}
			else if(mx >= 265 && mx <= 300 && my >= 339 && my <= 367 && mode==3 )
		{
			b25=5;
		}
				else if(mx >= 265 && mx <= 300 && my >= 382 && my <= 410 && mode==3)
		{
			b31=2;
		}
				else if(mx >= 310 && mx <= 338 && my >= 255 && my <= 283 && mode==3)
		{
			b14=5;
		}
			else if(mx >= 310 && mx <= 338 && my >= 297 && my <= 326 && mode==3)
		{
			b20=3;
		}
			else if(mx >= 310 && mx <= 338 &&  my >= 339 && my <= 367 && mode==3)
		{
			b26=2;
		}
			else if(mx >= 310 && mx <= 338 && my >= 382 && my <= 410 && mode==3)
		{
			b32=2;
		}
			else if(mx >= 352 && mx <= 381 && my >= 255 && my <= 283 && mode==3)
		{
			b15=4;
		}
			else if(mx >= 352 && mx <= 381 && my >= 297 && my <= 326 && mode==3)
		{
			b21=3;
		}
			else if(mx >= 352 && mx <= 381 && my >= 339 && my <= 367 && mode==3)
		{
			b27=2;
		}
			else if(mx >= 352 && mx <= 381 && my >= 382 && my <= 410 && mode==3)
		{
			b33=2;
		}
			else if(mx >= 394 && mx <= 424 && my >= 212 && my <= 240 && mode==3)
		{
			b10=5;
		}
				else if(mx >= 394 && mx <= 424 && my >= 255 && my <= 283 && mode==3)
		{
			b16=3;
		}
			else if(mx >= 394 && mx <= 424 && my >= 297 && my <= 326 && mode==3)
		{
			b22=2;
		}
				else if(mx >= 394 && mx <= 424 &&  my >= 339 && my <= 367 && mode==3)
		{
			b28=5;
		}
			else if(mx >= 394 && mx <= 424 && my >= 382 && my <= 410 && mode==3)
		{
			b34=2;
		}
			else if(mx >= 437 && mx <= 466 && my >= 212 && my <= 240 && mode==3)
		{
			b11=2;
		}
				else if(mx >= 437 && mx <= 466 && my >= 255 && my <= 283 && mode==3)
		{
			b17=2;
		}
			else if(mx >= 437 && mx <= 466 && my >= 297 && my <= 326 && mode==3)
		{
			b23=3;
		}
				else if(mx >= 437 && mx <= 466 && my >= 339 && my <= 367 && mode==3)
		{
			b29=3;
		}
			else if(mx >= 437 && mx <= 466 && my >= 382 && my <= 410 && mode==3)
		{
			b35=3;
		}
			else if(mx >= 479 && mx <= 508 && my >= 212 && my <= 240 && mode==3)
		{
			b12=6;
		}
				else if(mx >= 479 && mx <= 508 && my >= 255 && my <= 283 && mode==3)
		{
			b18=6;
		}
			else if(mx >= 479 && mx <= 508 && my >= 297 && my <= 326 && mode==3)
		{
			b24=2;
		}
				else if(mx >= 479 && mx <= 508 && my >= 339 && my <= 367 && mode==3)
		{
			b30=5;
		}
			else if(mx >= 479 && mx <= 508 && my >= 382 && my <= 410 && mode==3)
		{
			b36=2;
		}
				else if(mx >= 317 && mx <= 456 && my >= 464 && my <= 481 && game2==1 && mode==3)
		{
		 
		 mode=0;
		 
		 b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0,b12=0,b13=0,b14=0,b15=0,b16=0,b17=0,b18=0;
		 b19=0,b20=0,b21=0,b22=0,b23=0,b24=0,b25=0,b26=0,b27=0,b28=0,b29=0,b30=0,b31=0,b32=0,b33=0,b34=0,b35=0,b36=0;
		}
	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
		
			if(mx >= 265 && mx <= 300 && my >= 167 && my <= 200 )
		{
			b1=1;
		}
			else if(mx >= 265 && mx <= 300 && my >= 212 && my <= 240  )
		{
			b7=1;
		}
			else if(mx >= 265 && mx <= 300 && my >= 255 && my <= 283 )
		{
			b13=1;
		}
			else if(mx >= 265 && mx <= 300 && my >= 297 && my <= 326  )
		{
			b19=1;
		}
			else if(mx >= 265 && mx <= 300 && my >= 339 && my <= 367 )
		{
			b25=1;
		}
				else if(mx >= 265 && mx <= 300 && my >= 382 && my <= 410 )
		{
			b31=1;
		}
			else if(mx >= 310 && mx <= 338 && my >= 168 && my <= 198)
		{
			b2=1;
		}
				else if(mx >= 310 && mx <= 338 && my >= 212 && my <= 240)
		{
			b8=1;
		}
			else if(mx >= 310 && mx <= 338 && my >= 255 && my <= 283)
		{
			b14=1;
		}
			else if(mx >= 310 && mx <= 338 && my >= 297 && my <= 326)
		{
			b20=1;
		}
			else if(mx >= 310 && mx <= 338 &&  my >= 339 && my <= 367)
		{
			b26=1;
		}
			else if(mx >= 310 && mx <= 338 && my >= 382 && my <= 410)
		{
			b32=1;
		}
			else if(mx >= 352 && mx <= 381 && my >= 167 && my <= 200)
		{
			b3=1;
		}
				else if(mx >= 352 && mx <= 381 && my >= 212 && my <= 240)
		{
			b9=1;
		}
				else if(mx >= 352 && mx <= 381 && my >= 255 && my <= 283)
		{
			b15=1;
		}
			else if(mx >= 352 && mx <= 381 && my >= 297 && my <= 326)
		{
			b21=1;
		}
			else if(mx >= 352 && mx <= 381 && my >= 339 && my <= 367)
		{
			b27=1;
		}
			else if(mx >= 352 && mx <= 381 && my >= 382 && my <= 410)
		{
			b33=1;
		}
			else if(mx >= 394 && mx <= 424 && my >= 167 && my <= 200)
		{
			b4=1;
		}
			else if(mx >= 394 && mx <= 424 && my >= 212 && my <= 240)
		{
			b10=1;
		}
				else if(mx >= 394 && mx <= 424 && my >= 255 && my <= 283)
		{
			b16=1;
		}
			else if(mx >= 394 && mx <= 424 && my >= 297 && my <= 326)
		{
			b22=1;
		}
				else if(mx >= 394 && mx <= 424 &&  my >= 339 && my <= 367)
		{
			b28=1;
		}
			else if(mx >= 394 && mx <= 424 && my >= 382 && my <= 410)
		{
			b34=1;
		}
				else if(mx >= 437 && mx <= 466 && my >= 167 && my <= 200)
		{
			b5=1;
		}
			else if(mx >= 437 && mx <= 466 && my >= 212 && my <= 240)
		{
			b11=1;
		}
				else if(mx >= 437 && mx <= 466 && my >= 255 && my <= 283)
		{
			b17=1;
		}
			else if(mx >= 437 && mx <= 466 && my >= 297 && my <= 326)
		{
			b23=1;
		}
				else if(mx >= 437 && mx <= 466 && my >= 339 && my <= 367)
		{
			b29=1;
		}
			else if(mx >= 437 && mx <= 466 && my >= 382 && my <= 410)
		{
			b35=1;
		}
			else if(mx >= 479 && mx <= 508 && my >= 167 && my <= 200)
		{
			b6=1;
		}
			else if(mx >= 479 && mx <= 508 && my >= 212 && my <= 240)
		{
			b12=1;
		}
				else if(mx >= 479 && mx <= 508 && my >= 255 && my <= 283)
		{
			b18=1;
		}
			else if(mx >= 479 && mx <= 508 && my >= 297 && my <= 326)
		{
			b24=1;
		}
				else if(mx >= 479 && mx <= 508 && my >= 339 && my <= 367)
		{
			b30=1;
		}
			else if(mx >= 479 && mx <= 508 && my >= 382 && my <= 410)
		{
			b36=1;
		}
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		exit(0);
		//do something with 'q'
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

	if(key == GLUT_KEY_END)
	{
		mode=0;	
	}
	//place your codes for other keys here
}



void main()
{
	mode=0;
	iInitialize(800, 600, "MinesWeeper!");
	return;
}

