#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
* this is a program to create and display number lists given a list size and
 the elements of the list */

// display_values is a functiin that takes in a list and the list size amd displays the values of the list 
// input : array , size of array ( Type: int )
// out : Elements are :  values (  Type: int[] )

void display_values(int list[], int size){
    int* ptr;
    ptr = list;
    cout << "Elements of the array are: "; 
    for(int i = 0; i < size ; i ++ ){
        cout << ptr[i] << " "<< endl; 
        }
} 
 

int main() {
    /* 
     * Arrays of integers just store the memory addresses of the integers in them
     * When a pointer is created it is to the address of the first value
     * The address of the first value is also the address of the name of the array 
     * values are attached to the indexed pointers 
*/   
    int size;
    cin >> size;
    int inarr[size];
    for (int i = 0; i < size ; i ++){
        
        int* ptr = inarr;
        int values;
        cin >> values;
        ptr[i] = values;
    }
    
    display_values ( inarr, size);
}
