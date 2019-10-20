#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>

using namespace std;

vector<int> GenerateRandVec(int numofNums, int min, int max);
void BubbleSort(vector<int>& theVec);


int main(){
    
}

void BubbleSort(vector<int>& theVec)
{
    int i = theVec.size() - 1;
    while(i >= 1){
        int j = 0;
        while(j < i){
            printf("\nIs %d > %d\n", theVec[j], theVec[j-1]);
            if(theVec[j] >= theVec[j+1]){
                cout << "Switch\n";

                int temp = theVec[j];
                theVec[j] = theVec[j+1];
                theVec[j+1] = temp;
            } else{
                cout << "Don't Switch\n";
            }
            j += 1;
            for(auto k: theVec)
                cout << k << ", ";
        }
        cout << "\nEnd of Round\n";
        i -= 1;
    }
}

vector<int> GenerateRandVec(int numofNums, int min, int max)
{
    vector<int> vecValues;
    srand(time(NULL)); //Generate random values based on time
    int i = 0, randVal = 0;

    while(i < numofNums){
        randVal = min + rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }

    return vecValues;
}