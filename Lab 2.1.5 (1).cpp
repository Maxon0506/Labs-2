#include <iostream>


using namespace std;


int main(void) {
cout << "Enter a year: ";
int year;

cin >> year;
if(year%4==0 && year%400==0){
    cout<< "leap year";
}
else {cout<<"common YEAR";}

}
