#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int a=0;
   int b=0;
   int c=0;
   int disc=0;
 int x1,x2;  
 
   cout << "Enter the cofficent's of the quadratic equations(ax 2 + bx + c )";
   cin >> a;
   cin >> b;
   cin >> c;
   disc = b*b-(4*a* c);
   cout<<"The discremenet of equation="<<disc<<endl;
   if (disc==0){
    cout << "THE equation has only one real root" ;
   }
   else if (disc <0)
   {
    cout << "The equation has two complex imaginary roots ";
   }
   else if (disc >=0)
   {
    
    cout << "The equtaion has two real roots "<<endl;
       x1 = (-b+sqrt(disc) /(2*a));
     x2 = (-b-sqrt(disc) /(2*a));
    cout << "The value of the roots of the quadratic equation are "<< x1 << " and " << x2 <<  endl;

   }
  else{
    cout<<"Error";
  }





}
