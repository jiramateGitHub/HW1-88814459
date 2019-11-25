/*
TASK : HW1_04
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;	
		if(a==b && a==c && b==c){
			cout << "all the same";
		}else{
			if (a==b){
				cout << "neither";
			}else if(a==c){
				cout << "neither";
			}else if(b==c){
				cout << "neither";
			}else{
				cout << "all different";
			}
		}
	return 0;
}	
