#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int g_iRandNum = 0;
const double PI = 3.1459;

int main(int argc, char** argv) {

    // bool bMarried = true;
    // char chMyGrade = 'A';
    // unsigned short int u16Age = 43;
    // short int siWeight = 180;
    // int nDays = 7;
    // long lBigNum = 1100000;
    // float fPi = 3.15159;
    // double dbBigFloat = 1.11111111111;
    // long double ldPi = 3.14159;
    // auto whatWillIBe = true;

    // std::cout << "Min bool " << 
    //         std::numeric_limits<bool>::min() << "\n";

    // std::cout << "Max bool " << 
    //     std::numeric_limits<bool>::max() << "\n";



    // double dbBigFloat = 1.111111111;
    // double dbBigFloat2 = 1.11111111;
    // float dbFloatSum = dbBigFloat + dbBigFloat2;

    // printf("dbFloatSum Precision : %.20f\n", dbFloatSum);

    // printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");

    // return 0;

    // std::string sQuestion("Enter Number 1 :");
    // std::string sNum1, sNum2;
    // std::cout << sQuestion; 
    // getline(std::cin, sNum1);
    // std::cout << "Enter Number 2 : ";
    // getline(std::cin, sNum2);

    // int nNum1 = std::stoi(sNum1);
    // int nNum2 = std::stoi(sNum2);

    // printf("%d + %d = %d\n", nNum1, nNum2, (nNum1+nNum2));

    // km = miles * 1.60934
    // Enter Miles: 5
    // 5 miles equals 5 * 1.60934

    std::string sMiles;
    double dMiles, dKilometers;
    std::cout << "Enter Miles : ";
    getline(std::cin, sMiles);
    dMiles = std::stod(sMiles); //stod (convert string to double)
    dKilometers = dMiles * 1.60934;
    printf("%.1f miles equals %.4f kilometers\n", dMiles, dKilometers);
    return 0;
}