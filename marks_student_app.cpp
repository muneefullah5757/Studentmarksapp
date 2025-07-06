#include<iostream>
#include<string>
using namespace::std;
int main(){
	string name;
	int marks_sub1,marks_sub2,marks_sub3;
	float Average;
	bool is_present ,is_not_present ;
	cout<<"enter your name"<<endl;
	cin>>name;
	cout<<"enter you are present or absent say is_presnt=1 or no=0"<<endl;
	cin>>is_present;
	cout<<"he is present"<<is_present<<endl;
	cin>>is_not_present;
	cout<<"he is not present"<<is_not_present<<endl;
	cout<<"enter your three subject marks"<<endl;
	cout<<"enter your  1st subject marks"<<endl;
    cin>>marks_sub1;
	
	cout<<"enter your 2nd subject marks"<<endl;
    cin>>marks_sub2;
    
    cout<<"enter your 3rd subject marks"<<endl;
    cin>>marks_sub3;
    cout<<"your marks infirst subject is "<<marks_sub1<<endl<<"your marks in 2nd subject"<<marks_sub2<<endl<<"your marks in the 23rd sub is "<<marks_sub3<<endl;
    Average=(marks_sub1+marks_sub2+marks_sub3)/3;
    cout<<"the Average marksof your subject is"<<Average<<endl;
    if (Average>=40){
    	cout<<"pass"<<endl;
	}
	else{
		cout<<"Fail"<<endl;
		
	}
	return 0;
}
