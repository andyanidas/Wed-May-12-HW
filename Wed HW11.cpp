#include<iostream>;

using namespace std;
int main(){
	char weekday;
	cout<<"Enter you weekday: ";
	cin>>weekday;
	
	if(weekday=='1'){
		cout<<"Monday";
	}else if (weekday=='2'){
		cout<<"Tuesday";
	}else if (weekday=='3'){
		cout<<"Wednesday";
	}else if (weekday=='4'){
		cout<<"Thursday";
	}else if (weekday=='5'){
		cout<<"Friday";
	}else if (weekday=='6'){
		cout<<"Saturday";
	}else if (weekday=='7'){
		cout<<"Sunday";
	}else{
		cout<<"You have entered inviled input";
	}
	










	return 0;
}
