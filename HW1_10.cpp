/*
TASK : HW1_10
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	int num,i,j,k,l,n;
	cin >> num;
	for(i=0;i<num;i++){
		for(j=num;j>=i;j--){
			if(j>i){
				cout << " ";
			}else{
				for(k=0;k<j+1;k++){
				cout << "*";
				}
				for(l=0;l<j;l++){
				cout << "*";
				}
			}
		}
		cout << endl;
	}
	return 0;
}

