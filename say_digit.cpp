#include<iostream>
using namespace std;

void saydigit(int number, string arr[]) {
    if (number == 0)
    {
        return ;
    }
    int digit = number%10;
    number = number/10;

    saydigit(number,arr);
    cout<<arr[digit]<<" ";

    
}

int main(){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int number;
    cin>>number;

    cout<<endl;

    saydigit(number,arr);
    
}