// Project 4

// Author: Ryan Canty

// Date: 10/6/15

// Course: CSC1610

// Description: This file prompts the user for a movie rating and then tells
// them if they can watch the movie or not depending on their age and if they
// are with a parent.

// Input: One user-defined integer, then if necessary, one more integer followed 
// by a user-defined string, if necessary, collected from the standard input 
// stream (keyboard)

// Output: An answer telling the user if they can see the movie or not.

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

void verify( int ); //Prototype

/*
 * 
 */
int main() {

    int G = 1; //Integer that represents G movie rating
    int PG = 2; //Integer that represents PG movie rating
    int PG13 = 3; //Integer that represents PG-13 movie rating
    int R = 4; //Integer that represents R movie rating
    cout << "Ratings Menu:" << endl;
    cout << G << ". Rated G" << endl;
    cout << PG << ". Rated PG" << endl;
    cout << PG13 << ". Rated PG-13" << endl;
    cout << R << ". Rated R" << endl;
    cout << " " << endl;
    //Gives user an interface to find corresponding integers to the movie 
    //rating
    int rating; //Integer that represents the movie rating
    cout << "Please select a rating: " << endl; //Prompt user for the rating
    cin >> rating; //Store the user inputted movie rating
    verify( rating ); //Run function

    return 0;
}
//Description: Takes in an inputted movie rating and outputs a line of text
//telling the user if they can see the movie or not.
//Precondition: int r must be an integer greater than or equal to 1 and less 
//than or equal to 4.
//Postcondition: A line of text is outputted telling the user if they can see
//a movie or not.
void verify( int r )
{
    if ( r == 1 )
    {
        cout << " " << endl;
        cout << "You may see the movie!";
    }
    else if ( r == 2 )
    {
        int age; //Integer that will store the user's age
        string answer = ""; //String that will store the user's answer
        cout << "How old are you? " << endl;
        cin >> age; //Stores user age
        if( age >= 10 )
        {
            cout << " " << endl;
            cout << "You may see the movie!" << endl;
        }
        else if( age < 10 )
        {
            cout << "Do you have a parent or guardian with you? " << endl;
            cin >> answer; //Stores user answer
        }    
            
            if( answer.size() == 2 ) //If the size of the answer is 2 (No)
            {
                cout << " " << endl;
                cout << "You may not see the movie!" << endl;
            }
            else if( answer.size() == 3 )//If the size of the answer is 3 (Yes)
            { 
                cout << " " << endl;
                cout << "You may see the movie!";
            }
    }   
    else if ( r == 3 )
    {
        int age; //Integer that will store user age
        string answer = ""; //String that will store user answer
        cout << "How old are you? " << endl;
        cin >> age; //Stores user age
        if( age >= 13 )
        {
            cout << " " << endl;
            cout << "You may see the movie!";
        }
        else if( age < 13 )
        {
            cout << "Do you have a parent or guardian with you? " << endl;
            cin >> answer; //Stores user answer
        }    
            
            if( answer.size() == 2 ) //If the size of the answer is 2 (No)
            {
                cout << " " << endl;
                cout << "You may not see the movie!";
            }
            else if( answer.size() == 3 )//If the size of the answer is 3 (Yes)
            {
                cout << " " << endl;
                cout << "You may see the movie!";
            }
    }   
    else if ( r == 4 )
    {
        int age;//Integer that will store user age
        string answer = "";//String that will store user answer
        cout << "How old are you? " << endl;
        cin >> age;//Stores user age
        if( age >= 17 )
        {
            cout << " " << endl;
            cout << "You may see the movie!";
        }
        else if( age < 17 )
        {
            cout << "Do you have a parent or guardian with you? " << endl;
            cin >> answer;//Stores user answer
        }    
            
            if( answer.size() == 2 )//If the size of the answer is 2 (No)
            {
                cout << " " << endl;
                cout << "You may not see the movie!";
            }
            else if( answer.size() == 3 )//If the size of the answer is 3 (Yes)
            {
                cout << " " << endl;
                cout << "You may see the movie!";
            }
    }   
}