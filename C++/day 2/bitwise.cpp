//Write a program by using Bitwise operators (left and right shift).


#include <iostream>

using namespace std;

void leftshift(int num){
    int left;
    cout<<"Enter the left shift number:";
    cin>>left;
    cout<<"Left shift:"<<(num<<left)<<endl;
}
void rightshift(int num){
    int right;
    cout<<"Enter the right shift number:";
    cin>>right;
    cout<<"Right shift:"<<(num>>right)<<endl;
}
int main()
{
    int num;
    cout<<"Enter the number:\n";
    cin>>num;
    leftshift(num);
    rightshift(num);
    return 0;
}
