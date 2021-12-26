#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size_of_array;
    cin >> size_of_array;
    int karr[size_of_array];
    for(int i = 0; i < size_of_array; i++){
        cin >> karr[i];
    }
    
    //print func.
    for (int n = size_of_array - 1; n > -1; n-- ){
        cout << karr[n] << " ";
    } 
    return 0;
}
