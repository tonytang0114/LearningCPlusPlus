#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;

int main(){

    // string sAge = "0";
    // cout << "Enter your age : ";
    // getline(cin, sAge);
    // int nAge = stoi(sAge);

    // if ((nAge >= 1) && (nAge <= 18)){
    //     cout << "Important Birthday\n";
    // } else if ((nAge == 21) || (nAge == 50)) {
    //      cout << "Important Birthday\n";
    // } else if ((nAge >= 65)){
    //      cout << "Important Birthday\n";
    // }else{
    //      cout << "Not an Important Birthday\n";
    // }

    // int arrnNums[10] = {1};

    // int arrnNums2[] = {1,2,3};

    // int arrnNums3[5] = {8,9};

    // cout << "1st Value : " << arrnNums3[0] << "\n";
    // arrnNums3[0] = 7;
    // cout << "1st Value : " << arrnNums3[0] << "\n";

    // cout << "Array size : " << sizeof(arrnNums3) / sizeof(*arrnNums3)<< "\n"; //how many byte we are working

    // int arrnNums4[2][2][2] = 
    // {
    //     {
    //         {1,2}, {3,4}
    //     },
    //     {
    //         {5,6}, {7,8}
    //     }
    // };

    // cout << arrnNums4[1][1][1] << "\n"; 


    //vectors are resizable
    //string stream

    // vector<int> vecnRandNums(2);
    // vecnRandNums[0] = 10;
    // vecnRandNums[1] = 20;
    // vecnRandNums.push_back(30);
    // cout << "Last Index : " << 
    //     vecnRandNums[vecnRandNums.size() - 1] << "\n";

    // string sSentence = "This is a random string";
    // vector<string> vecsWords;
    // stringstream ss(sSentence);
    // string sIndivStr;
    // char cSpace = ' ';

    // while(getline(ss, sIndivStr, cSpace)) {
    //     vecsWords.push_back(sIndivStr);
    // }

    // for(int i=0; i < vecsWords.size(); ++i){
    //     cout << vecsWords[i] << "\n";
    // }

    // Enter calculation (ex. 5 + 6) : 10 - 6
    // 10.0 - 6.0 = 4.0
    // Please enter only +, -, *, /

    double dbNum1 = 0, dbNum2 = 0;
    string sCalc = "";
    vector<string> vecsCalc;

    cout << "Enter calculation (ex. 5 + 6) : ";
    getline(cin, sCalc);

    stringstream ss(sCalc);
    string sIndivStr;
    char cSpace = ' ';

    while(getline(ss, sIndivStr, cSpace)){
        vecsCalc.push_back(sIndivStr);
    }

    dbNum1 = stoi(vecsCalc[0]);
    dbNum2 = stoi(vecsCalc[2]);
    string operation = vecsCalc[1];

    if(operation == "+") {
        printf("%.1f + %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 + dbNum2));

    } else if (operation == "-"){
        printf("%.1f - %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 - dbNum2));
    } else if (operation == "*"){
        printf("%.1f * %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 * dbNum2));
    } else if (operation == "/"){
        printf("%.1f / %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 / dbNum2));
    } else {
        cout << "Please enter only +, -, *, /";
    }


    return 0;
}