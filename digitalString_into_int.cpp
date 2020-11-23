#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;


int* readString ();
int convertIntoInt () ;

int main () {
   cout<<"*****************************  This program is to convert a digital string to an integer  *****************************\n";
   // calling the function convertIntoString and store the value into variable number;
   int number = convertIntoInt();
   return 0;
}


int* readString () {
   //creating string to read the input 
   string input;
   //reading the input from the user
   getline(cin, input);
   bool boolean = true;
   //checking if the string is numeric or not
   while (boolean) {
      boolean = false;
      for (int i = 0; i < input.length(); i++) {
         if (input[i] >= '0' && input[i] <= '9');
         else {cout<<"please enter a valid input! \nNumeric input.\n"; 
               boolean = true;
               getline(cin, input);
               break;}
      }
   }
   //creating an array 
   static int num[input.length()];
   //converting the string into an array
   for (int i = 0; i < input.length(); num[i] = input[i] ,i++);
   //return the array 
   return num;
}


int convertIntoInt() {
   // calling the function readString and store the string in an array of characters
   int digits[100] = readString();
   //creating an integer variable that has the size of the string
   int size = sizeof(digits) / sizeof(digits[0]) ;
   //creating an integer to store the result
   int integer = 0;
   //for loop to check every character in the array
   for (int i = 0; i < size; i++){
      integer += digits[i] == 0 ? 0 : digits[i] * pow(10, size - 1 - i); 
   }
   return integer;
}
