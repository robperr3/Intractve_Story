// Attack_of_the_Flying_Saucers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

string icecream;// my string for ice cream choice
string choice;// string for deciding your reaction
string which_way;// string for choosing direction
string decision;//string for choosinf to run or hide

void lunch();// this is how you declare functions
void reaction();
void getaway();
void what_now();
void run_or_hide();

int main() //main program
{
	lunch();	// all my pretty little functions
	reaction();
	getaway();
	what_now();
	run_or_hide();
	system("pause");
    return 0;
}

void lunch()//this is defining functions
{
	cout << "Attack of the Flying Saucers\n\n";
	cout << "Its a beautiful day so you and your buddy decide to get some ice cream\n ";
	cout << "Your friend asks you what flavor ice cream do you want? \n ";//asking user for ice cream flavor
	cin >> icecream;//users response
	if (icecream == "chocolate" || "strawberry" || "vanilla")// if response is one iof these options then, Yay!
	{
		cout << "'Good choice! I think I'll have the same' he says\n ";
	}

	else  //otherwise
	{
		cout << "They dont have that flavor\n ";// they dont have it
	}
}

void reaction()// function with an if else statement
{
	cout << "\nYou guys leave the ice cream shop and start ,aming your way down the road\n";
	cout << "As you do you stop at a TV store and gaze at a 70' smart tv. You guys have never\n";
	cout << "seen any thing more awesome. Then, something- a metorite perhaps- comes flying\n";
	cout << "through the window, shaking the store and setting it ablaze. More projectiles hit\n";
	cout << "the store causing explosions. What do you do? Run and hide or help your firend? ('run' or 'help')\n"; //supplying possible options
	cin >> choice;//user response
	if (choice == "run") // if user chooses to run they die
	{
		cout << "\n You decide to book it, leaving your buddy behind. As you are running away you turn just in time\n";// not a real friend
		cout << "to see a huge fireball engulf you. You died";
		system("pause");// this keeps the console open
		exit(0);// ends the program because you died
	}
	else (choice == "help");// otherwise you help your friend & live on
	{
		cout << "You grab your friend and scream 'Come on' pulling him away from the flames.\n";
	}

}
		
	void getaway()// function for running away
	{
		cout << "\nYou guys head across the street inside a dismantled convenience store. You see a car\n ";
		cout << "parked outside. But you also see what has been causing all this damage. A large silver disc\n";
		cout << "flies above shooting red laser beams at anytihng that moves. Do you risk being seen & get the car\n ";
		cout << "or try and sneak out the back? ('car' or 'back')\n";//supplying possible options
		cin >> which_way;//user response
		if (which_way == "car")// if user chooses to use thw car they die
		{
			cout << "\nYou guys head for the Prius and make it! You did it but wait, theres no keys!\n";
			cout << "You both are frantically searching for them until you see a UFO saucer floating\n";
			cout << "right above you. It fires at you, blowing up the car with you guys in it.\n";
			cout << "Better luck next time" << endl;
			system("pause");// this keeps the console open
			exit(0);// ends the program because you died
			
		}
		else  (which_way == "back");//otherwise you live & continue
		{
			cout << "You guys sneak out the back door which opens up to an alley\n";
		}
	}

	void what_now()
	{
		cout << "\nThe alley leads to a distant tree line. You hope this will hide you from the UFO's\n";
		cout << "Both of you are running through the woods, frantically squezzing between trees, trying\n";
		cout << "to find safety. Just then you hear an all too familar humming. You look up & see a UFO\n";
		cout << "overhead.";
	}
	void run_or_hide()// function used to run or hide
	{
		cout << "What do you do? Run the other way or lay flat on the ground in hopes of not being seen? ('run' or 'hide')\n";//supplying possible options
		cin >> decision;//user response
		if (decision == "run")// if user chooses to run they die
		{
			cout << "You sprint back the way you came to get behind th saucer. But its too fast & catches on.\n";
			cout << "It veers off after you, locks you in its sites and fires. You go up in a poof of smoke\n";
			system("pause");// this keeps the console open
			exit(0);// ends the program because you died
		}
		else (decision == "hide");//otherwise you hide & live another day
		{
			cout << "You guys lay flat on the ground as the UFO passes over the canopy. You're praying they miss you\n";
			cout << "You wait for what feels like an eternity before you hear the humming slowly fade away.\n";
			cout << "You open your eyes to see the craft disappear into the horizon.Phew! That was close!\n";
		}	//honestly i cant thing of anything else. Im not much for creative writing. but i think i know how to use functions
	}
	