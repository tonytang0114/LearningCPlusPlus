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

// struct Shape {
//     double length, width;

//     Shape(double l = 1, double w = 1){
//         length = l;
//         width = w;
//     }

//     double Area(){
//         return length * width;
//     }
// private:
//     int id;
// };

// struct Circle: Shape{
//     Circle(double width){
//         this->width = width;
//     }

//     double Area(){
//         return 3.14159 * pow((width/2),2);
//     }
// };

// class Customer {
// private:
// // friend class can access private and protected members 
// // of other class in which it is declared as friend.
//     friend class GetCustomerData;
//     string name;

// public:
//     Customer(string name){
//         this->name = name;
//     }  
// };

// class GetCustomerData{
// public:
//     static string GetName(Customer& customer){
//         return customer.name;
//     }
// };

// class Shape{
// public:
//     virtual double Area() = 0;
// };

// class Circle : public Shape{
// protected:
//     double width;
// public:
//     Circle(double w){
//         width = w;
//     }

//     double Area() override{
//         return 3.14159 * pow((width/2), 2);
//     }
// };

// class Rectangle : public Shape{
// protected:
//     double height, width;
// public:
//     Rectangle(double h, double w){
//         height = h;
//         width = w;
//     }
//     double Area() override final{
//         return height * width;
//     }
// };

// void ShowArea(Shape& shape){
//     cout << "Area : " << shape.Area() << "\n";
// }

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

int main(){
    // Shape shape(10, 10);
    // cout << "Square Area : " << shape.Area() << "\n";
    // Circle circle(10);
    // cout << "Circle Area : " << circle.Area() << "\n";

    // Shape rectangle{10,15};
    // cout << "Rectange Area : " << rectangle.Area() << "\n";

    // Customer tom("tom");
    // GetCustomerData getName;
    // cout << "Name : " << getName.GetName(tom) << "\n";

    // Polymorphism in c++
    // Rectangle rectangle(10, 5);
    // Circle circle(10);
    // ShowArea(rectangle);
    // ShowArea(circle);

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

    return 0;
}