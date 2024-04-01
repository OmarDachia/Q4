#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout << "#4:-> Write a program to print area of circle, rectangle & square.";
  cout << "\n==============================================================================";
  cout << "\nProgram Start here:->" << endl;
  cout << "\n++++++++++++++++++++\n";

  double radius=0, w=0, l=0, cycle=0, rectangle =0, sqaure =0;
  cout << "Type radiu: ";
  cin >> radius;

  cout << "Type the Width: "<<endl;
  cin >> w;

  cout << "Type the Length: ";
  cin >> l;

  cycle = (22/7)* pow(radius,2);
  rectangle = l*w;
  sqaure = pow(l,2);

  cout << "The Area of cycle "<< cycle <<endl;
  cout << "Area of rectangle " << rectangle  <<endl;
  cout << "Area of Square "<< sqaure <<endl;


  return 0;
}

