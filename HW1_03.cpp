/*
TASK : HW1_03
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	int i,a,sum=0;
	cin >> a;
	if(a >= 1 && a <= 20000){	
		for(i=0;i<=a;i++){
			if(a >= 10){
				sum = sum+2;
				a = a-10;
			}else{
				continue;
			}
		}
	cout << sum;
	}else{
		cout << "Please Input <= 20,000" << endl;
	}
	return 0;
}
