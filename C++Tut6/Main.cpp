#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> StringToVector(string theString,
    char separator);
string VectorToString(vector<string> vecs, char separator);
string TrimWhitespace(string theString);
vector<int> FindSubstringMatches(string theString, string substring);
string ReplaceAllSubstrings(string theString, string substring, string newString);
int main(){

    // vector<string> vCusts(3);
    // vCusts[0] = "Bob";
    // vCusts[1] = "Sue";
    // vCusts[2] = "Tom";

    // string sCusts = VectorToString(vCusts, ' ');
    // cout << sCusts << "\n";

    // string aStr = "        Just some random words      ";
    // aStr = TrimWhitespace(aStr);
    // cout << "*" << aStr << "*\n";

    // string phrase = "To be or not to be";
    // vector<int> matches = FindSubstringMatches(phrase, "be");
    // for(int i = 0; i < matches.size(); ++i){
    //     cout << matches[i] << "\n";
    // }


    // string x = ReplaceAllSubstrings("to know or not to know or not to know", "know", "be");
    // cout << x << "\n";

    char letterZ = 'z';
    char num3 = '3';
    char aSpace = ' ';

    /*
    isalnum(letterZ)
    isalpha(letterZ)
    isupper(letterZ)
    islower(letterZ)
    isdigit(num3)
    isspace(aSpace)
    */

   string theString ("Make me secret");
   string encryptedStr = CaesarCipher(theString, 5 , true);
   string decrpytedStr = CaesarCipher(encryptedStr, 5 , false);
   cout << "Encrypted" << encryptedStr << "\n";
   cout << "Decrpyted" << decrpytedStr << "\n";


    return 0;
}

vector<string> StringToVector(string theString,
    char separator) {
        vector<string> vecsWords;
        stringstream ss(theString);
        string sIndivStr;

        while(getline(ss, sIndivStr, separator)){
            vecsWords.push_back(sIndivStr);
        }
        return vecsWords;
    }
string VectorToString(vector<string> vecs, char separator)
{
    string result = "";
    for(int i =0; i<vecs.size(); i++){
        result += vecs[i];
        result += separator;
    }
    return result;
}

string TrimWhitespace(string theString){
    string whitespaces(" \t\f\n\r");
    theString.erase(theString.find_last_not_of(whitespaces) + 1);
    theString.erase(0,theString.find_first_not_of(whitespaces));
    return theString;
}

vector<int> FindSubstringMatches(string theString, string substring)
{
    vector<int> matchingIndexes;
    int index = theString.find(substring, 0);
    while(index != string::npos){
        matchingIndexes.push_back(index);
        index = theString.find(substring, index+1);
    }

    return matchingIndexes;

}

string ReplaceAllSubstrings(string theString, string substring, string newString)
{
    vector<int> matches = FindSubstringMatches(theString, substring);
    
    if(matches.size() != 0){
        int lengthDifference = newString.size() - substring.size(); 
        int timesLooped = 0;
        for(auto index: matches){
            theString.replace(index + (timesLooped * lengthDifference),
                    substring.size(),
                    newString);
            // each time the string is replaced. The new length will be changed so
            // we need to keep track the new length using length difference
            timesLooped++;
        }
    }

    return theString;
}