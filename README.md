# C-Eulier 

### Description 

This is a collection of all the most challenging problems encountered while learning to write c++ code 

# Challenges

## creat_intarr

### Description 
This specific eulier entailed creating an array of integers 
> Involved figuring out that cpp integer arrays are to be considered as memmory addresses 
>Also that the first value in the integer array shares the same memory address as the name of the integer array itself 

ie

```cpp
using namespace std;

int rand_numbers[5] = { 1, 2, 3, 4, 5];

// memory address of rand_numbers 
int addr = &rand_numbers;

// create a pointer for the first value 
int* randptr;

cout >> randptr[0] == addr << endl;
// returns true 

```

### Aids and Tips
Source that led to the discovery of the fact that int arrays are part of collective memory addresses was from [this stackoverflow post](https://stackoverflow.com/questions/36265109/adding-integers-to-arrays-in-c].
The posting in turn led me to [tutorialspoint](https://www.tutorialspoint.com/cprogramming/c_pointer_arithmetic.htm) where i found the basics of pointers and addresses for creating arrays.
![By Frank Vessia https://unsplash.com/@frankvex/portfolio](https://images.unsplash.com/photo-1574974560650-985fb5c87e3c?ixid=MXwxMjA3fDB8MHxzZWFyY2h8Mnx8aWRlYXxlbnwwfHwwfA%3D%3D&ixlib=rb-1.2.1&auto=format&fit=crop&w=500&q=60)

##### For a more detailed explanation of how this works [click here](https://www.geeksforgeeks.org/pointers-c-examples/)
hopefully this helps you as much as it did help me 

### Next ...

## Author 
Damunza 
