#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <math.h> 
#include <algorithm>
#include <functional>

using namespace std;
vector<int> GenerateRandVec(int numofNums, int min, int max);
vector<int> GenerateFibList(int num);
int main(){
    vector<int> vecVals = GenerateRandVec(10, 1, 50);
    for(auto val: vecVals)
        cout << val << "\n";

    // Sort a list of values
    // sort(vecVals.begin(), vecVals.end(),
    //     [](int x, int y){return x < y;});
    
    // vector<int> evenVecVals;

    // Copy a list of value into antoher and filter
    // copy_if(vecVals.begin(), vecVals.end(), 
    //     back_inserter(evenVecVals),
    //     [](int x){return (x % 2) == 0;});
    
    // for(auto val: evenVecVals)
    //     cout << val << "\n";

    // Sum a list of values
    // int sum = 0;
    // for_each(vecVals.begin(), vecVals.end(),
    //     [&](int x){sum += x;});
    // cout << "Sum " << sum << "\n";

    // int divisor;
    // vector<int> vecVals2;
    // cout << "List of Values Divisable by : ";
    // cin >> divisor;
    // copy_if(vecVals.begin(), vecVals.end(), 
    //     back_inserter(vecVals2),
    //     [divisor](int x){return (x % divisor) == 0;});

    // Double the values in vector
    // for(auto val: vecVals2)
    //     cout << val << "\n";

    // vector<int> doubleVec;

    // for_each(vecVals.begin(), vecVals.end(),
    //         [&](int x){doubleVec.push_back(x * 2);});

    // for(auto val: doubleVec)
    //     cout << val << "\n";

    // transform two list into one
    // vector<int> vec1 = {1, 2, 3, 4, 5};
    // vector<int> vec2 = {1, 2, 3, 4, 5};
    // vector<int> vec3(5);
    // transform(vec1.begin(), vec1.end(),
    //         vec2.begin(), vec3.begin(),
    //         [](int x, int y){return x + y;});
        
    // for(auto val: vec3)
    //     cout << val << "\n";

    // int age = 43;
    // bool canIVote = (age >= 18) ? true : false;
    // cout.setf(ios::boolalpha); // boolean will be displayed to true / false instead of 1 / 0
    // cout << "Can Derek Vote : " << canIVote << "\n";

    // function<int(int)> Fib =
    // [&Fib](int n) {return n < 2 ? n : 
    //     Fib(n-1)+Fib(n-2);};
    // cout << "Fib 4 : " << Fib(4) << "\n";

    vector<int> listOfFibs = GenerateFibList(10);
    for(auto val: listOfFibs)
        cout << val << "\n";

    return 0;
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

vector<int> GenerateFibList(int num){
    vector<int> listOfFibs;
    int i = 0;
    function<int(int)> Fib =
    [&Fib](int n) {return n < 2 ? n : 
        Fib(n-1)+Fib(n-2);};
    cout << "Fib 4 : " << Fib(4) << "\n";
    while(i < num){
        listOfFibs.push_back(Fib(i));
        i++;
    }
    return listOfFibs;
}