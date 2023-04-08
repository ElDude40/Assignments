
// Q2a: Define displayRoom() for Hayden class (5 points)
// Define the function displayRoom() that you declared within the Hayden class in the header file
// See expected output in question file.

// (displayList() function in hw7.cpp should call this function.)
// Include necessary header files

#include "room.h"
#include "hayden.h"

#include <iostream>

void Hayden::displayRoom()
{
    string name;
	// notice that no function call is needed becasue we know this is Hayden class function
    cout<<"Room name: "<<getName()<<endl;
    cout<<"Number of rooms: "<<getNo()<<endl;
    if(getLibraryType() == 0){
        name = "Hayden";
    }
    
    else{
        name = "Noble";
    }
    cout<<"Library: "<<name<<endl;
    
}
