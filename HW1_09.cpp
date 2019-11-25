/*
TASK : HW1_09
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	int num,i,j,n;
	cin >> num;
	for(i=0;i<=num;i++){
		n=1;
		for(j=0;j<i;j++){
			cout << n << " ";
			n=n+1;
		}
		cout  << endl;			
	}
	for(i=num-1;i>0;i--){
		n=1;
		for(j=0;j<i;j++){
			cout << n << " ";
			n=n+1;
		}
		cout  << endl;			
	}
	return 0;
}

