# C-Eulier

### Description

This is a collection of all the most challenging problems encountered while learning to write c++ code

# Challenges

## creat_intarr

![https://unsplash.com/@jamessutton_photography](https://unsplash.com/photos/qXn5L9BqRbE )

### Description
This specific eulier entailed creating an array of integers
> Involved figuring out that cpp integer arrays are to be considered as memmory addresses
> Also that the first value in the integer array shares the same memory address as the name of the integer array itself

ie

```cpp
using namespace std;

int rand_numbers[5] = { 1, 2, 3, 4, 5];

// memory address of rand_numbers
int addr = &rand_numbers;

// create a pointer for the first value
int* randptr;

// returns true
cout >> randptr[0] == addr << endl;
```

### Aids and Tips

...Source that led to the discovery of the fact that int arrays are part of collective memory addresses was from [this stackoverflow post](https://stackoverflow.com/questions/36265109/adding-integers-to-arrays-in-c].

...The posting in turn led to [tutorialspoint](https://www.tutorialspoint.com/cprogramming/c_pointer_arithmetic.htm) where i found the basics of pointers and addresses for creating arrays.

...For a more detailed explanation of how this works [click here](https://www.geeksforgeeks.org/pointers-c-examples/)

hopefully this helps you as much as it did help me.

## create_intvectors

![https://unsplash.com/@ashkfor121](https://unsplash.com/photos/11YQuWPQ9Bw)

### Description

This is a program that takes in:

1. space-separated integers; the number of arrays and the number of operations in each array.

*console input*

> 2 2

*code*

```cpp
#include <iostream>
#include <vectors>

using namespace std;

int main(){
 vector <int*> numcol

 int no_arr, no_ops;
 cin >> no_arr >> no_ops;
}
```

2. space-sepoarated integers; size a b c where size is the size of each array and a b c are the elements of the array

*console input*
> 3 1 2 4
> 5 6 7 9 4 8

*code*
```cpp
int* create_list(int size){
    int* numarr = new int[size];
    for (int i = 0 ; i < size ; i ++){
        // first adr
        int* numptr = numarr;
        int values;
        cin >> values;
        numptr[i] = values;
    }
    return numarr;
}

...main()

int list;
int size;
for (list = 0; list < maxval; list++){
    // get the size of each array
    cin >> size;
    // create each array
    int* element = create_list(size);
    numcol.push_back(element);
}
```

3. space-separated values; array position depending on the number of querries this values give the position of the desired element from each array

*console input*
> 0 1
> 1 3

*program return*
> 2
> 9

*code*
```cpp
void q_display(int* list, int pos){
    int a = list[pos];
    printf("%d \n", a);
}

...main()

int query;
int glist, gpos;

for (query = 0 ; query < queries; query++){
    cin >> glist >>gpos;
    int* elist;
    elist = numcol.at(glist);

    q_display(elist, gpos);
}
```

### Aids and Tips

Learning about vectors [geeksforgeeks vectors](https://www.geeksforgeeks.org/vector-in-cpp-stl/)

Returning arrays from c++ functions [geeksforgeeks local array](https://www.geeksforgeeks.org/return-local-array-c-function/)

Vectors used as pointers [slaystudy vectors](https://slaystudy.com/c-vector-of-pointers-to-objects/)

# Author
### Damunza
