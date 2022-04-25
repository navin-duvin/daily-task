/*
Write a program to print the following pattern

                        $

                  $          $

             $         $         $

         $       $         $         $

*/

using namespace std;
#include <iostream>

int main(){
	int n=5;
	for(int i = 1;i <= n;i++){
		for(int j = 0;j < n - i;j++){
			cout<<" ";
		}
		for(int k = 0;k < i;k++){
			cout<<"$ ";
		}
		cout<<"\n";
	}
	return 0;
}
