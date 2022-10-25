#include<iostream>
using namespace std;

int shift(int* a, int* b, int* c);
int main()
{
    int x, y, z;
    
    cout<<"enter x: "<<endl;
    cin>> x ;
    cout<<"enter y: "<<endl;
    cin>> y;
    cout<<"enter z: "<<endl;
    cin>> z ;
    
    cout<<"before shifting "<< x<<" "<<y<<" " <<z <<endl; 
    shift(&x, &y, &z);
     cout<<"after shifting "<< x<<" "<<y<<" " <<z <<endl; 
}
int shift(int* a, int* b, int* c)
{
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
    
}