//---------------------------------------------------------------------------
// Comparable.h
// Author: Brent Barrese
// Class declarations
//---------------------------------------------------------------------------
// Comparable class:	Takes in a char from istream and stores in a
//						comparable object	
//   --	allows comparing of binary objects including:
//   --	greater than, less than
//   --	equal to, not equal to
//   --	allows printing of binary object member variable
//   --	allows user input of char into comparable object
//
// Assumptions:
//   --	uses default constructor and destructor provided by compiler	
//   -- user will enter a char when using >>
//----------------------------------------------------------------------------

#pragma once
#include <iostream>

using namespace std;

class Comparable {
	//-----------------------------  <<  -----------------------------------------
	//	Overloaded output operator for class Comparable
	//	Preconditions:	Comparable object has been instantiated.
	//	Postconditions:	The comparable's private member "data" is sent to ostream
	//
	friend ostream& operator <<(ostream& outStream, const Comparable& comparable);


	//-----------------------------  >>  -----------------------------------------
	//	Overloaded input operator for class Comparable
	//	Preconditions:	comparable.data is ready for a char
	//	Postconditions:	private member variable "data" is populated with the value
	//					of the char passed into the istream
	friend istream& operator >>(istream& inStream, Comparable& comparable);

public:
	//-----------------------------  ==  -----------------------------------------
	//	Checks for equality between 2 comparable objects
	//	Preconditions:	this and comparable both point to comparable objects
	//	Postconditions:	true is returned if the private member "data" is the same
	//					value for both comparable objects, otherwise false is 
	//					returned
	bool operator==(const Comparable& comparable) const;


	//-----------------------------  !=  -----------------------------------------
	//	Checks for NOT equality between 2 comparable objects
	//	Preconditions: this and comparable both point to comparable objects
	//	Postconditions: false is returned if the private member "data" is the same
	//					value for both comparable objects, otherwise false is 
	//					returned
	bool operator!=(const Comparable& comparable) const;

	//-----------------------------  <  -----------------------------------------
	//	Checks for less than between 2 comparable objects
	//	Preconditions:	this and comparable both point to comparable objects
	//	Postconditions:	true is returned if the private member "data" of this is
	//					less than the private member "data" of comparable, 
	//					otherwise false is returned
	bool operator<(const Comparable& comparable) const;


	//-----------------------------  >  -----------------------------------------
	//	Checks for greater than between 2 comparable objects
	//	Preconditions:	this and comparable both point to comparable objects
	//	Postconditions:	true is returned if the private member "data" of this is
	//					is greater than the private member "data" of comparable, 
	//					otherwise false is returned
	bool operator>(const Comparable& comparable) const;


private:
	char data;
};

