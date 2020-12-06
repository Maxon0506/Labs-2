#include <iostream>
#include <math.h>
using namespace std;
int main(void) {
   int i1,i2;
   start:
cout<<"Введи перше число";
cin>>i1;
cout<<"Введи друге число ";
cin>>i2;
    int i3;
    
cout<<"Меню:"<<"\n";
cout<<"0 - вихід"<<"\n";
cout<<"1 - додавання"<<"\n";
cout<<"2 - віднімання"<<"\n";
cout<<"3 - множення"<<"\n";
cout<<"4 - ділення"<<"\n";
cout<<"Оберіть"<<"\n";
cin>>i3;

switch(i3){
    case 1: cout<<i1+i2<<endl; goto start; 
    case 2: cout<<i1-i2<<endl; goto start;
    case 3: cout<<i1*i2<<endl; goto start;
    case 4: if(i2==0) {
        cout<<"Division by 0"<<endl; goto start;
    } 
            else {
         cout<<(double)i1/i2<<endl; goto start;
    }
    case 0: goto end;
    default: cout<<"Неправильний ввід"<<endl; goto start;
}



end:
cout<<"End";
return 0;
}
