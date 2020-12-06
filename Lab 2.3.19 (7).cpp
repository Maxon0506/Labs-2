#include<iostream>
using namespace std;
int main() {
  long n,a;
  M:
  cout<< "Введіть число:";
  cin>>n;
  long m=1;
  long k=1;
 
  if (n==1 || n==2){
   cout<<"1";
 }
  else if (n>=3){
   for(int i=2; i<n; i++){
  a= k+m;
  m=k;
  k=a;
 }
   cout<<a;
 }
else{
  cout<<"Ви ввели не вірне число:"<<endl;
  goto M;
}
  return 0;
}
