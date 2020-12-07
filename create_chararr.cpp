#include <iostream>

using namespace std;

/* 
* A program that creates a character array from a provided string 
*/

int main(){
  // getting the string input
	string input;
	getline(cin, input);

  // get the size of the given input to create an array
	int arrsize = input.length();
	char letters[arrsize];

  //populating the array
	int i;
	for (i = 0 ; i < arrsize; i ++){
		letters[i] = input[i];
  }
	cout << letters<< endl;
}
