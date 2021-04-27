#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/

// Write your code here
template<typename T>void printArray(vector<T> a){
    for(T i:a)
    cout<<i<<endl;
}

int main() {
