#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <algorithm>

using namespace std;
int main() {

    // char cString[] = {'A', ' ', 'S', 't', 'r', 'i', 'n', 'g', '\0'};

    // cout << "Array Size " << sizeof(cString) << "\n";

    // vector<string> strVec(10);

    // string str("I'm a string");
    // strVec[0] = str;

    // cout << str.front() << "" << str.back() << "\n";
    // cout << "Length " << str.length() << "\n";
    // string str2(str);
    // strVec[1] = str2;
    // string str3(str,4);
    // strVec[2] = str3;
    // string str4(5, 'x');
    // strVec[3] = str4;
    // strVec[4] = str.append(" and your not");
    // str += " and your not";
    // str.append(str, 34, 37);
    // strVec[5] = str;
    // str.erase(13, str.length() - 1);
    // strVec[6] = str;

    // if(str.find("string") != string::npos)
    //     cout << "1st index " << str.find("string") << "\n";
    
    // cout << "Substr " << str.substr(6, 6) << "\n";

    // reverse(str.begin(), str.end());
    // cout << "Reverse " << str << "\n";

    // transform(str2.begin(), str.end(), str2.begin(), ::toupper);
    // cout << "Upper " << str2 << "\n";
    // transform(str2.begin(), str.end(), str2.begin(), ::tolower);
    // cout << "Lower " << str2 << "\n";

    // a - z : 97 - 122
    // A - Z : 65 - 90

    // string normalStr, secretStr = "";

    // cout << "Enter your string in uppercase : ";
    // cin >> normalStr;

    // for(char c: normalStr)
    //     secretStr += to_string((int)c - 23);

    // cout << "Secret : " << secretStr << "\n";

    // normalStr = "";

    // for(int i = 0; i < secretStr.length(); i+=2){
    //     string sCharCode = "";
    //     sCharCode += secretStr[i];
    //     sCharCode += secretStr[i+1];

    //     int nCharCode = stoi(sCharCode);
    //     char chCharCode = nCharCode + 23;
    //     normalStr += chCharCode;
    // }

    // cout << "Original : " << normalStr << "\n";
    // for(auto y: strVec)
    //     cout << y << "\n";

    // Math functions
    cout << "abs(-10)" << abs(-10) << "\n";


    return 0;
}