#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>

using namespace std;
vector<string> StringToVector(string theString, char separator);
void SolveForX(string equation);
vector<int> Range(int start, int max, int step);
bool IsPrime(int num);
vector<int> GetPrimes(int maxPrime);
vector<int> GenerateRandVec(int numofNums, int min, int max);
int main()
{
    // cout << "Enter an equation to solve ";
    // string equation = "";
    // getline(cin, equation);
    // SolveForX(equation);

    // int num = 0;
    // cout << "Number to Check : ";
    // cin >> num;

    // cout.setf(ios::boolalpha);
    // cout << " is " << num << " Prime" << IsPrime(num);

    // cout << "Generate Primes up to ";
    // int maxPrime;
    // cin >> maxPrime;
    // vector<int> primeList = GetPrimes(maxPrime);
    // for(auto x : primeList)
    //     cout << x << "\n";

    vector<int> vecVals = GenerateRandVec(100, 5, 50);
    for(auto x: vecVals)
        cout << x << "\n";
    

    return 0;
}

void SolveForX(string equation){
    vector<string> vecEquation = 
        StringToVector(equation, ' ');
    int num1 = stoi(vecEquation[2]);
    int num2 = stoi(vecEquation[4]);
    int xVal = num2 - num1;
    cout << "x = " << xVal << "\n";
}

vector<string> StringToVector(string theString, char separator)
{
    vector<string> vecsWords;
    stringstream ss(theString);
    string sIndivStr;
    while(getline(ss, sIndivStr, separator)){
        vecsWords.push_back(sIndivStr);
    }
    return vecsWords;
}

bool IsPrime(int num)
{
    int separator = sqrt(num);
    for(int i=2;i<separator;++i){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

vector<int> GetPrimes(int maxPrime){
    vector<int> PrimesList;
    for(int i = 0; i<maxPrime; ++i){
        if(IsPrime(i)){
            PrimesList.push_back(i);
        }
    }
    return PrimesList;
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

vector<int> Range(int start, int max, int step)
{
    int i = start;
    vector<int> range;
    while(i <= max){
        range.push_back(i);
        i+=step;
    }
    return range;
}

