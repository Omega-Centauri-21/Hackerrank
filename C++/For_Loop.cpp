#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Complete the code.
    int a,b;
    string representation[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight","nine"};
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(i > 9){
            if(i % 2 == 0){cout << "even\n";}
            else{cout << "odd\n";}
        }
        else{
        cout << representation[i] << endl;
        }
    }
    
    
    return 0;
}
