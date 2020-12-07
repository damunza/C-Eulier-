#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* 
create_lists is a function that creates lists from inputs
input: number of elements , the elemenst
output: integer list

return: pointer to address of list
*/
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

/*
q_display displays the output of the queries provided 
input : array , position in array 
output: int at the position

return: None
*/
void q_display(int* list, int pos){
    int a = list[pos];
    printf("%d \n", a);
}

int main() {
    /*
    * Vector called numcol that takes in maxval arrays
    * queries is the number of queries on each of the given arrays
    * size is the number of values in each child array 
    * * element points to the array created
    * group is the index of individual arrays in the vector
    * glist is the the actual array 
    * gpos is the position of the element required from the array 
    */ 
    vector <int*> numcol;
    
    // first inputs 
    // size of vector 
    // number of queries 
    
    int maxval, queries;
    
    cin >> maxval >> queries;
    // populate vector 
    int list;
    int size;
    for (list = 0; list < maxval; list++){
        // get the size of each array 
        cin >> size;
        // create each array 
        int* element = create_list(size);
        numcol.push_back(element);
    }
    
    // querry the vector 
    int query;
    int glist, gpos;
    
    for (query = 0 ; query < queries; query++){
        cin >> glist >>gpos;
        int* elist;
        elist = numcol.at(glist);

        q_display(elist, gpos);
    }
    return 0;
}
