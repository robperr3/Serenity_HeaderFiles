// Serenity.cpp : Defines the entry point for the console application.
//This is a scene from one of the greatest movies of all time. 
//It also happens to be one of my favorites scenes. Enjoy!

#include "stdafx.h"
#include <iostream>
#include <string>//including the string preprocessor since i want to use strings
#include "Dialog.h"//this is how i use my self-made header file 


using namespace std;



int main()//main function
{//an introduction to setup the scene for the reader
	cout << "Aboard the transport ship Serenity the crew prepares for an important job that will hopefully\n";
	cout << "alleviate their stomachs as well as their maintenance issues. It’s never easy robbing a bank.\n";
	cout << "As Captain Malcolm walks down the p-way he stops to ask Jayne why he was bringing so many guns.\n\n";

	Mal("Mal: Jayne, I dont plan on any shooting taking place during this job.");
	//calling the "Mal" function with custom text as an argument 
	Jayne("Jayne: Well what you plan and what takes place aint ever exactly been similar.");
	//calling the "Jayne" function with custom text as an argument
	Mal("Mal: No grenades.");
	Jayne("Awwww!");
	system("pause");
	return 0;
}


