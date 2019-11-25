/*
TASK : HW1_05
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	int n,m=0;
	cin >> n;
	m = n;
	if(n >= 1 && n <= 1000 ){
		if(n % 4 == 0 || n >= 4){
			m = n -(n / 4);
		}
		cout << m;
	}else{
		cout << "Please Input <= 1,000" << endl;
	}
	return 0;
}	
