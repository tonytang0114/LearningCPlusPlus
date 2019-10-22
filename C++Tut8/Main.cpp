#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <math.h> 

using namespace std;

vector<int> GenerateRandVec(int numofNums, int min, int max);
void BubbleSort(vector<int>& theVec);
int Factorial(int number);

double Area(double radius);
double Area(double height, double width);
/*
-----------------------
|  0   |  1  |  2  |
-----------------------
|  10  |  8  |  2  |
-----------------------
*/
void PrintHorzVector(vector<int>& theVec);
/*
    fib(0) = 0
    fib(1) = 1
    fib(2) = 1
    fib(3) = 2
*/

int Fib(int index);

int main(){
    // vector<int> vecVals = GenerateRandVec(10, 1, 50);
    // BubbleSort(vecVals);
    // for(auto x: vecVals)
    //     cout << x << "\n";

    // Recursion
    // cout << "Factorial 3 = " << Factorial(3);
    // vector<int> theVec = {10,8,2,5,9,11,6,14};
    // PrintHorzVector(theVec);
    
    // int index;
    // cout << "Get Fibonacci Index : ";
    // cin >> index;
    // printf("Fib(%d) = %d\n", index, Fib(index));

    // Area
    cout << "Area Circle (c) or Rectange (r) : ";
    char areaType;
    cin >> areaType;

    switch(areaType){
        case 'c':
            cout << "Enter Radius : ";
            double radius;
            cin >> radius;
            cout << "Area = " << Area(radius) << "\n";
            break;
        case 'r':
            cout << "Enter Width : ";
            double height, width;
            cin >> width;
            cout << "Enter Height : ";
            cin >> height;
            cout << "Area = " << Area(height,width) << "\n";
            break;
        default:
            cout << "Please Enter c or r\n";
    }
    return 0;
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

/*
    1. 3*Factorial(2)
    2. 2*Factorial(1)
    3. Return 1
    4. Return 2*1
    5. Return 3*2
*/
int Factorial(int number){
    if (number == 1){
        return 1;
    }
    else {
        int result = number * Factorial(number - 1);
        return result;
    }
}

void PrintHorzVector(vector<int>& theVec){
    int dashes = ceil(theVec.size() * 6);
    for(int n = 0; n < dashes; n++)
        cout << "-";
    cout << "\n";

    for(int n = 0; n < theVec.size(); n++)
        printf("| %2d ", n);
    cout << "|\n";

    for(int n = 0; n < dashes; n++)
        cout << "-";
    cout << "\n";

    for(int n = 0; n < theVec.size(); n++)
        printf("| %2d ", theVec[n]);
    cout << "|\n";

    
    for(int n = 0; n < dashes; n++)
        cout << "-";
    cout << "\n";
}

int Fib(int index){
    if(index < 2){
        return index;
    }else {
        return Fib(index - 1) + Fib(index - 2);
    }
}

double Area(double radius){
    return 3.14159 * pow(radius, 2);
}

double Area(double height, double width){
    return height * width;
}