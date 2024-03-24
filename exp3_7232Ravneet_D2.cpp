#include <iostream>
using namespace std;
// creating class
class room{
    public:
    float length,breadth;
 //using function for input
void get(){
cout << "Enter Length of room: "; cin >> length;
cout << "Enter Breadth of room: "; cin >> breadth;
}
//calculating area
float area(){
float area = length * breadth; return area;
}
//calculating perimeter
float perimeter(){
float per = 2*(length + breadth); return per;
 }
//printing output
void display(){
cout << "Length of room: " << length << endl;
cout << "Breadth of room: " << breadth << endl;
float a = area();//storing value of function in a cout << "Area of room: " << a << endl;
float b = perimeter();//storing value of function in b cout << "Perimeter of room: " << b << endl;

 cout << "************" << endl; }
};
int main(){
room r1,r2,r3,r4,r5;
cout << "_For Room 1_" << endl;
r1.get();
cout << "__________" << endl; r1.display();
cout << "_For Room 2_" << endl;
 r2.get();
cout << "__________" << endl; r2.display();
cout << "_For Room 3_" << endl;
r3.get();
cout << "__________" << endl; r3.display();
cout << "_For Room 4_" << endl;
r4.get();
cout << "__________" << endl; r4.display();
cout << "_For Room 5_" << endl; r5.get();
 cout << "__________" << endl; r5.display();
return 0;
}
