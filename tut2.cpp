#include<iostream>
using namespace std;

int main()
{
    int cookies;
  
    cout<<"Enter the Number of Cookies  ";
    cin>>cookies;
    int handle_box=cookies/24;
    cout<<"The cookies will come in "<<handle_box<<" boxes"<<endl;
        int left_cookies=cookies%24;
    cout<<"The "<<left_cookies<<" Will be left"<<endl;

    double handle_carton=handle_box/75;
    cout<<"The boxes will come in "<<handle_carton<<" carton"<<endl;

        int left_carton=handle_box%75;
    cout<<"The "<<left_carton<<" Boxes wiil not come in carton";

    return 0;
}