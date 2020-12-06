#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int pow;
    long num =1;
    cout<<"Enter a number : ";
    cin>>pow;
     if(pow==0)
        {
            cout<<"another number";
        }
    if(pow<=63 && pow>=1){
        int i;
        for (i=1; i<=pow; i++){
            num=num*2;
            
        }
       
        cout<<num;        
    }
}
