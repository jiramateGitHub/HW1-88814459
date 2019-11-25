/*
TASK : HW1_02
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	double price,discount,total;
	cin >> price;
	if(price <= 1000){
		total = price;
	}else if(price >= 1001 && price <= 2000){
		discount = price * 5 / 100;
		total = price - discount;	
	}else if(price >= 2001 && price <= 5000){
		discount = price * 10 / 100;
		total = price - discount;	
	}else if(price >= 5001 && price <= 10000){
		discount = price * 15 / 100;
		total = price - discount;		
	}else if(price >= 10001){
		discount = price * 20 / 100;
		total = price - discount;
	}
	cout << total;
	return 0;
}
