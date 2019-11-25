/*
TASK : HW1_06
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	int n,i;
	int number,max,min;
	cin >> n;
	if(n >= 1 && n <= 1000){
		for(i=0;i<n;i++){
			cin >> number;
 			if(i==0){
				max = number;
        		min = number;
 			}else if(number > max){
				max = number; 	
 			}else if(number < min){
				min = number;
			}
		}
	cout << min << endl;
	cout << max << endl;
	}else{
		cout << "Please Input <= 1,000" << endl;
	}
	return 0;
}	
