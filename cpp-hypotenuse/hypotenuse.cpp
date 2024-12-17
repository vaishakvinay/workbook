//calculate hypotenuse

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double x,y;
    double hypotenuse;

    cout<<"enter the value of side 1 in cm"<<'\n';
    cin>>x;

    cout<<"enter the value of side 2 in cm"<<'\n';
    cin>>y;

    hypotenuse = sqrt(pow(x,2)+pow(y,2));
     
    cout<<"hypotenuse is : "<<hypotenuse<<'\n';
}