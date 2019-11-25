/*
TASK : HW1_08
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	int n,i,j,k;
	cin >> n;
	for(i=0;i<n;i++){
		for(j=n;j>i;j--){
			cout << " ";
		}
		for(k=0;k<j+1;k++){
			cout << "*";
		}
	cout << endl;
	}
	return 0;
}
/* int n,i,j,k;
	cin >> n;
	for(i=n;i>=1;i--){
		for(j=1;j<i;j++){
			cout << " ";
		}
		for(k=n;k>=i;k--){
			cout << "*";
		}
	cout << endl;
	}
*/ 
