/*
TASK : HW1_07
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	int i,j,height,length;
	cin >> height ;
	cin >> length;
	for(i=1;i<=height;i++){
		for(j=1;j<=length;j++){
			if(i==1){
				cout << "*";
			}else if(j==1){
				cout << "*";
			}else if(i==height){
				cout << "*";
			}else if(j==length){
				cout << "*";
            }else{
            	cout << " ";
			} 
		}
		cout << endl;
	}
	return 0;
}	
