   /* Global Warming Simulation - Simulation For Introduction to Programming   
     Simulation Name: Global Warming
    -----------------------------------------------------------
    Programming and Designed by Hitesh Sathawane                                 
    COPYRIGHT ©2015 by Hitesh Sathawane  
	Email:hiteshsathawane@live.com            
    Website:http://hiteshsathawane.com											
    All rights reserved.                                                     
   -----------------------------------------------------------*/
#include"graphics.h"
#include<iostream>
#include<Windows.h>
#include<MMSystem.h>

using namespace std;


//Function Prototype Section-------------------------------------------------------------

// 1. Simulation Function Section
void InitializeSimulation();
void UpdateSimulation();
void DrawSimulation();
void LoadingSimulation();
void MainMenu();

// 2. User Defined Function Section


//End Of Function Prototype Section------------------------------------------------------


//Variable Section-----------------------------------------------------------------------


//End of Variable Section----------------------------------------------------------------



// Function Definition Section-----------------------------------------------------------

// 1. Simulation Function Definition Section
void InitializeSimulation()
{

}
void MainMenu()
{
	setbkcolor(BLACK);
    settextstyle(8,0,5);
    setcolor(WHITE);
    outtextxy(100,5,"Global Warming Simulation"); 
	setcolor(GREEN);
	settextstyle(8,0,3.5);
	outtextxy(60,50,"Why should we be concerned about Global Warming? ");
	outtextxy(135,80,"------------------------------------");
	setcolor(WHITE);
	settextstyle(8,0,2.5);
	outtextxy(65,110," Many people consider that Global Warming is the greatest  ");
	outtextxy(65,140," environmental threat of the 21st Century. However, during  ");
	outtextxy(65,170," the 80s and early 90s scientists argued about the causes ");
	outtextxy(65,200," and effects of global warming.In the late 1990s scientists  ");
    outtextxy(65,230," reached a consensus that global warming was a cause for  ");
	outtextxy(65,260," concern.So, as it was a serious less consern issue");
	outtextxy(65,290," so i decided to develop this simulation.");
	setcolor(RED);
	settextstyle(8,0,2);
	outtextxy(550,420,"Developed By:-  ");
	outtextxy(550,450,"Hitesh Sathawane ");
	outtextxy(550,480,"L4(2014UG2013) ");
    delay(10000);
	cleardevice();
}

void LoadingSimulation()
{
	setbkcolor(BLACK);
    int l=325,j;
    setcolor(WHITE);
    settextstyle(3,0,2);
   outtextxy(325,300,"Drawing Simulation");
   setcolor(RED);
   for(j=0;j<300;++j)
     {
       delay(30);
       line(l,330,l,350);
       l++;
     }
  	
  cleardevice();
}

//2. Animation of Simulation----------------------------

void UpdateSimulation()
{
	// Increasing Temperature In Thermometer
   int x=400,i;
  for(i=0;i<=300;++i)
 {
	setcolor(RED);
    delay(50);
    line(x,445,x,455);
    x++;
    if(i>=300)
    {
	  setcolor(BLACK);
	  ellipse(350,350,0,360,247,247);
	  setfillstyle(1,BLACK);
	  fillellipse(350,350,247,247);
	  
	  
	  /**-----------/////////////////-----------------------------**/
    
	  //Code For Drawing Eyes--------------------------------------------------------------
      //-------Left Eye Code(After Increasing Of Temperature)----------//
	  
	  setcolor(WHITE);
	  ellipse(300,275,0,360,15,15);
	  setfillstyle(1,RED);
	  setcolor(RED);
	  fillellipse(300,275,5,5);

	  //--------Right Eye Code(After Increasing of Temperature----------//
	  
	  setcolor(WHITE);
	  ellipse(425,260,0,360,15,15);
	  setfillstyle(1,RED);
	  setcolor(RED);
	  fillellipse(425,260,5,5);
	  //
	  


	  //-------------Mouth Code(After Increasing of Temprature----//
	  arc(400,460,360,180,50);
	  arc(400,461,360,180,50);
	  arc(400,462,360,180,50);
	  /////---------------------------------/////////////////
	  
	  delay(10000);



    }
 }

}
void DrawSimulation()
{
	setbkcolor(WHITE);
	cleardevice();
	setcolor(BLACK);
	
	
//1. Code For Drawing Earth ---------------------------------------------------------------
	
  //floodfill(350,350,GREEN);
	
	setcolor(GREEN);
	//circle(350,350,247);
	//circle(350,350,246);
	//circle(350,350,245);
	
	ellipse(350,350,0,360,247,247);
	ellipse(350,350,0,360,246,246);
	ellipse(350,350,0,360,245,245);
    

	delay(10);
	
	
//2. Statement For Display Text-------------------------------------------------------
	
//3. Drawing Maps On Earth-------------------------------------------------------------
	 // Left Side 
	 //------------------//
      line(119,270,240,325);
      line(119,271,240,326);
	  line(119,272,240,327);
	 //------------------//
	  line(240,325,200,350);
	  line(240,326,200,351);
	  line(240,327,200,352);
	 //------------------//
	  line(200,350,250,400);
	  line(200,351,250,401);
	  line(200,352,250,402);
	  //------------------//
	  line(250,400,200,450);
	  line(250,401,200,451);
	  line(250,402,200,452);
	  //------------------//
	  line(200,450,250,490);
	  line(200,451,250,491);
	  line(200,452,250,492);
	  //------------------//
	  line(250,490,290,585);
	  line(250,491,290,586);
	  line(250,492,290,587);
	  //------------------//
	     


	  //Up Side Code
	  line(210,150,260,160);
	  line(210,151,260,161);
	  line(210,152,260,162);
	  //-------------------//
	  line(260,160,320,150);
	  line(260,161,320,151);
	  line(260,162,320,152);
	  //-------------------//
	  line(320,150,420,200);
	  line(320,151,420,201);
	  line(320,152,420,202);
	  //-------------------//
	  line(420,200,525,180);
	  line(420,201,525,181);
	  line(420,202,525,182);


   
//3.Code For Drawing Factory  ----------------------------------------------------
	  
	  // 3.1 Factory 1
	   setcolor(BLACK);
	   rectangle(350,110,380,180);
	   setfillstyle(4,BLACK);
	   floodfill(360,120,BLACK);
	  //--------------------------------// 
	   rectangle(380,125,410,180);
	   setfillstyle(4,BLACK);
	   floodfill(390,135,BLACK);
	  //---------------------------------//
	   rectangle(410,140,440,180);
	   setfillstyle(4,BLACK);
	   floodfill(420,150,BLACK);
	   
	   // 3.2 Cloud Code 
	   setfillstyle(1,BLACK);
	   setcolor(BLACK);
	   fillellipse(390,80,20,15);// First Circle in Cloud
	   fillellipse(420,70,25,20);// Second Circle in Cloud
	   fillellipse(450,80,20,15);// Third Circle in Cloud
  	 
   // 3.1 Factory  Second 
	   setcolor(BLACK);	
	   rectangle(140,270,170,340);
	   setfillstyle(4,BLACK);
	   floodfill(150,280,BLACK);
   //--------------------------------------//
		rectangle(170,285,200,340);
   	    setfillstyle(4,BLACK);
	    floodfill(180,295,BLACK);
   //---------------------------------------//
	    rectangle(200,300,230,340);
	    setfillstyle(4,BLACK);
	    floodfill(210,310,BLACK);
    
   //--------Cloud Code For Factory Second-------// 	
		setfillstyle(1,BLACK);
	    setcolor(BLACK);
	    fillellipse(180,230,20,15);// First Circle in Cloud
	    fillellipse(210,220,25,20);// Second Circle in Cloud
	    fillellipse(240,230,20,15);// Third Circle in Cloud
  	    
	
//4.Code For Drawing Eyes--------------------------------------------------------------

	  //-------Left Eye Code----------//

	  setcolor(BLACK);
	  ellipse(300,275,0,360,15,15);
	  setfillstyle(1,YELLOW);
	  setcolor(YELLOW);
	  fillellipse(300,275,5,5);

	  //--------Right Eye Code----------//
	  
	  setcolor(BLACK);
	  ellipse(425,260,0,360,15,15);
	  setfillstyle(1,YELLOW);
	  setcolor(YELLOW);
	  fillellipse(425,260,5,5);
	  

	  PlaySound(TEXT("gb.WAV"), NULL, SND_ASYNC);
	  
	  
//5.Code For Drawing Earth Mouth -----------------------------------------------------------------
	
	  pieslice(400,430,180,360,40);
	  

//6.Code For Drawing Themometer---------------------------------------------
    //-------------------------//
	setcolor(BLACK);
	rectangle(400,440,700,460);
	rectangle(401,441,701,461);
	//-------------------------//
	ellipse(720,450,0,360,35,35);
	ellipse(720,450,0,360,36,36);
	ellipse(720,450,0,360,37,37);
	//-------------------------//
	setfillstyle(1,RED);
	fillellipse(720,450,20,20);
	ellipse(720,450,0,360,20,20);
	ellipse(720,450,0,360,21,21);
	ellipse(720,450,0,360,22,22);

	//cleardevice();
	delay(1000);

 

    
 
	 
	
}

// 2. Userdefined Function Definition Section

// End Of Function Definition Section-----------------------------------------------------------


// Main Function
int main()
{
	// Initialize the simulation window and its background color
	initwindow(1980,1000,"Hitesh Sathawane (2014UG2013)",0,0);
	
	
	PlaySound(TEXT("bg.WAV"), NULL, SND_ASYNC);
	PlaySound(TEXT("gb.WAV"), NULL, SND_ASYNC);   

	//system("pause");
	
	setbkcolor(WHITE);
	

	// Use this for initializing simulation variables
	InitializeSimulation();
	
   MainMenu();
   LoadingSimulation();

	// Run the simulation until any key hit
	while(true)
	{
		delay(100);

		
		
		DrawSimulation();
		UpdateSimulation();

		if(kbhit())
			break;
	}

	// close the simulation graph
	closegraph();
	return 0;
}

