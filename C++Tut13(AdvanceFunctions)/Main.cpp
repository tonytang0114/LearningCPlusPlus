#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <functional>

using namespace std;
// bool IsItOdd(int num){
//     if(num % 2 == 0){
//         return false;
//     } else {
//         return true;
//     }
// }

// vector<int> ChangeList(vector<int> list, 
//         function<bool(int)> func){
//     vector<int> oddList;
//     for(auto i: list){
//         if(func(i)){
//             oddList.push_back(i);
//         }
//     }
//     return oddList;
// }

// double MultBy2(double num){
//     return num * 2;
// }

// double DoMath(function<double(double)> func, double num){
//     return func(num);
// }

// double MultBy3(double num){
//     return num * 3;
// }

vector<char> GetHAndTList(vector<char> possibleValues, int numberValuesToGenerate){
    srand(time(NULL));
    vector<char> hAndTList;
    for(int x = 0; x < numberValuesToGenerate; ++x){
        int randIndex = rand() % 2;
        hAndTList.push_back(possibleValues[randIndex]);
    }
    return hAndTList;
}

int GetNumberOfMatches(vector<char> list, char valueToFind){
    int numOfMatches = 0;
    for(char c: list){
        if(c == valueToFind){
            numOfMatches++;
        }
    }
    return numOfMatches;
}

int main()
{
    // auto times2 = MultBy2;
    // cout << "5 * 2 = " << times2(5) << "\n";
    // cout << "6 * 2 = " << DoMath(times2, 6) << "\n";
    // vector<function<double(double)>> funcs(2);
    // funcs[0] = MultBy2;
    // funcs[1] = MultBy3;
    // cout << "2 * 10 = " << funcs[0](10) << "\n";

    // vector<int> listOfNums {1,2,3,4,5};
    // vector<int> oddList = ChangeList(listOfNums,
    //         IsItOdd);

    // cout << "List of Odds\n";
    // for(auto i: oddList){
    //     cout << i << "\n";
    // }

    vector<char> possibleValues{'H', 'T'};
    vector<char> hAndTList = GetHAndTList(possibleValues, 100);
    cout << "Number of Heads : " << GetNumberOfMatches(hAndTList, 'H') << "\n";
    cout << "Number of Tails : " << GetNumberOfMatches(hAndTList, 'T') << "\n";
    
    return 0;
}
