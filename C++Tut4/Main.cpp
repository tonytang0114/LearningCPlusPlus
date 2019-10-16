#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

// Function prototype
vector<int> Range(int start, int max, int step);

int main() {

    /*
    How tall is the tree : 5

    #
   ###
  #####
 #######
#########

    1. Decrement spaces one each time through the loop
    2. Increment the hashes by 2 each time
    3. Save spaces to the stump by calculating tree height - 1
    4. Decrement from tree hegiht until equals zero
    5. Print spaces and then hashes for each row
    6. Print stump sapces then one hash
    */
    
    // cout << "How tall is the tree : ";
    // int treeHeight = 0, spaces = 0, hashes = 1,
    //         stumpSpaces = 0;
    // cin >> treeHeight;
    // spaces = treeHeight -1;
    // stumpSpaces = treeHeight - 1;
    
    // while(treeHeight != 0){
    //     for(auto x: Range(1, spaces, 1))
    //         cout << " ";
    //     for(auto x: Range(1, hashes, 1))
    //         cout << "#";
    //     cout << "\n";

    //     spaces -= 1;
    //     hashes += 2;
    //     treeHeight -= 1;
    // }

    // for(auto x: Range(1, stumpSpaces, 1)){
    //     cout << " ";
    // }

    // cout << "#";

    double num1 = 0, num2 = 0;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    try {
        if(num2 == 0){
            throw "Division by zero is not possible";
        } else{
            printf("%.1f / %.1f = %.2f", num1, num2, (num1/num2));
        }        
    }
    // str is basically a pointer to the (const)string literal.
    catch(const char* exp){
        cout << "Error : " << exp << "\n";
    }
    

    return 0;
}

// Functions

vector<int> Range(int start, int max, int step)
{
    int i = start;
    vector<int> range;
    while(i <= max){
        range.push_back(i);
        i += step;
    }

    return range;
}
// End functions