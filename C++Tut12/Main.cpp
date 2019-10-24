#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <fstream>

using namespace std;

// class Box {
// public:
//     double length, width, breadth;
//     string boxString;
//     Box(){
//         length = 1, width = 1, breadth = 0;
//     }
//     Box(double l, double w, double b){
//         length = l;
//         width = w;
//         breadth = b;
//     }

//     //Other Unary Operators : --, *(pointer dereference),
//     // -> (Member Selectino), !, &(Address of), +, -
//     Box& operator++ (){
//         length++;
//         width++;
//         breadth++;
//         return *this;
//     }

//     operator const char*(){
//         ostringstream boxStream;
//         boxStream << "Box : " <<
//             length << ", " <<
//             width << ", " <<
//             breadth;
//         boxString = boxStream.str();
//         //Returns a pointer to an array that contains a null-terminated sequence of characters
//         return boxString.c_str();
//     }

//     Box operator + (const Box& box2){
//         Box boxSum;
//         boxSum.length = length + box2.length;
//         boxSum.width = width + box2.width;
//         boxSum.breadth = breadth + box2.breadth;
//     }

//     double operator [] (int x){
//         if (x == 0){
//             return length;
//         } else if (x == 1){
//             return width;
//         } else if (x == 2){
//             return breadth;
//         } else {
//             return 0;
//         }
//     }

//     bool operator == (const Box& box2){
//         return ((length == box2.length) &&
//                 (width == box2.width) &&
//                 (breadth == box2.breadth));
//     }

//     bool operator < (const Box& box2){
//         double thisSize = length + width + breadth;
//         double box2Size = box2.length + box2.width + box2.breadth;
//         if (thisSize < box2Size){
//             return true;
//          } else{
//              return false;
//          }
//     }

//     bool operator > (const Box& box2){
//         double thisSize = length + width + breadth;
//         double box2Size = box2.length + box2.width + box2.breadth;
//         if (thisSize > box2Size){
//             return true;
//          } else{
//              return false;
//          }
//     }

//     void operator = (const Box& boxToCopy){
//         length = boxToCopy.length;
//         width = boxToCopy.width;
//         breadth = boxToCopy.breadth;
//     }

// };

int main()
{
    //Box (overload operators)
    // Box box(10, 10, 10);
    // ++box;
    // cout << box << "\n";
    // Box box2(5,5,5);
    // cout << "Box1 + Box2 = " << box+box2 << "\n";
    // cout << "Box Length : " << box[0] << "\n";
    // cout << boolalpha;
    // cout << "Are boxes equal : " << (box == box2) << "\n";
    // cout << "Is box < : " << (box < box2) << "\n";
    // cout << "Is box > : " << (box > box2) << "\n";
    // box == box2;
    // cout << box << "\n";

    ofstream writeToFile;
    ifstream readFromFile;
    string txtToWrite = "";
    string txtFromFile = "";

    writeToFile.open("test.txt", ios_base::out |
                                     ios_base::trunc);
    if (writeToFile.is_open())
    {
        writeToFile << "Beginning of File\n";
        cout << "Enter data to write : ";
        getline(cin, txtToWrite);
        writeToFile << txtToWrite;
        writeToFile.close();
    }

    readFromFile.open("test.txt", ios_base::in);
    if (readFromFile.is_open())
    {
        while (readFromFile.good())
        {
            getline(readFromFile, txtFromFile);
            cout << txtFromFile << "\n";

            vector<string> vect = StringToVector(txtFromFile, ' ');
            int charCount;
            int wordsInLine = vect.size();
            cout << "Words in Line : " << wordsInLine << "\n";
            for (auto word : vect)
            {
                for (auto letter : word)
                {
                    charCount++;
                }
            }
            int avgNumChars = charCount / wordsInLine;
            cout << "Avg Word Length : " << avgNumChars << "\n";
        }
        readFromFile.close();
    }
    return 0;
}


vector<string> StringToVector(string theString,
                              char separator)
{
    vector<string> vecsWords;
    stringstream ss(theString);
    string sIndivStr;

    while (getline(ss, sIndivStr, separator))
    {
        vecsWords.push_back(sIndivStr);
    }
    return vecsWords;
}