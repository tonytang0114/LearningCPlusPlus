#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

// Function prototype
void AssignAge3(int* pAge);
void DoubleArray(int* arr, int size);
vector<int> Range(int start, int max, int step);

int main() {
    
    // vector<int> myVec2(10);
    // iota(begin(myVec2), end(myVec2), 0); //Add 0, 1, 2 , 3 ... 10 to myVec2

    // for(auto y: myVec2){
    //     if ((y % 2) == 0)
    //         cout << y << "\n";
    // }

    // int age = 43;
    // int *pAge = NULL;

    // pAge =&age;

    // cout << "Address : " << pAge << "\n";
    // cout << "Value at Address : " << *pAge << "\n";

    // int intArray[] = {1,2,3,4};
    // int* pIntArray = intArray;

    // * dereference operator
    // cout << "1st " << *pIntArray << " Address" << pIntArray << "\n";
    // pIntArray++;
    // cout << "2nd " << *pIntArray << " Address" << pIntArray << "\n";
    // pIntArray--;
    // cout << "1st " << *pIntArray << " Address" << pIntArray << "\n";

    // int age = 43;
    // AssignAge3(&age);
    // cout << "Pointer Age" << age << "\n";

    // int arr[] = {1,2,3,4};
    // DoubleArray(arr , 4); // pass the array itself only
    // for(int i = 0; i < 4; ++i){
    //     cout << "Array " << arr[i] << "\n";
    // }
    // return 0;

    // vector<int> range = Range(1, 10, 2);
    // for(auto y: range) cout << y << "\n";

    double investment = 0.0, interestRate = 0.0;
    cout << "How much to invest : ";
    cin >> investment;
    cout << "Interest Rate : ";
    cin >> interestRate;

    interestRate *= .01;
    for(auto y: Range(1, 10, 1)) {
        investment += (investment * interestRate);
    }

    cout << "Value after 10 years : " << investment << "\n";
    
    return 0;

}

// Functions
void AssignAge3(int* pAge){
    *pAge = 22;
}

void DoubleArray(int* arr, int size){
    cout << &arr << "\n";
    for(int i = 0; i < size; i++){
        arr[i] = arr[i]*2;
    }
}

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