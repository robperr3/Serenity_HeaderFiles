// Serenity.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Dialog.h"


using namespace std;



int main()
{
	cout << "Aboard the transport ship Serenity the crew prepares for an important job that will hopefully\n";
	cout << "alleviate their stomachs as well as their maintenance issues. It’s never easy robbing a bank.\n";
	cout << "As Captain Malcolm walks down the p-way he stops to ask Jayne why he was bringing so many guns.\n\n";

	Mal("Mal: Jayne, I dont plan on any shooting taking place during this job.");
	Jayne("Jayne: Well what you plan and what takes place aint ever exactly been similar.");
	Mal("Mal: No grenades.");
	Jayne("Awwww!");
	system("pause");
	return 0;
}


