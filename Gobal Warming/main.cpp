   
 /* Global Warming Simulation - Simulation For Introduction to Programming
Simulation Name: Global Warming
-----------------------------------------------------------
Programming and Designed by Hitesh Sathawane
COPYRIGHT ©2015 by Hitesh Sathawane
Email:hiteshsathawane@live.com
Website:http://hiteshsathawane.in
All rights reserved.
-----------------------------------------------------------*/
#include"Earth.h"
#include"graphics.h"
#include<iostream>
#include<Windows.h>
#include<MMSystem.h>

using namespace std;

// Main Function
int main()
{
	Earth obj;
	// Initialize the simulation window and its background color
	initwindow(1980, 1000, "Hitesh Sathawane (2014UG2013)", 0, 0);
	PlaySound(TEXT("bg.WAV"), NULL, SND_ASYNC);
	PlaySound(TEXT("gb.WAV"), NULL, SND_ASYNC);

	//system("pause");
	setbkcolor(WHITE);
	obj.InitializeSimulation();
	obj.MainMenu();
	obj.LoadingSimulation();
	// Run the simulation until any key hit
	while (true)
	{
		delay(100);
		obj.DrawSimulation();
		obj.UpdateSimulation();
		if (kbhit())
		break;
	}
	// close the simulation graph
	closegraph();
	return 0;
}

	

