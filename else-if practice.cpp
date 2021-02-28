#include<iostream>
using namespace std;
int main()
{

   int Eng, Math, Physics,sum;
    double Average;
	cout<<"Enter Marks English:";
	cin>>Eng;
	cout<<"Enter Marks  Math:";
	cin>>Math;
    cout<<"enter Marks Physics:";
    cin>>Physics;
    sum=Eng+Math+Physics;
	cout<<"Sum="<<sum<<endl;
	Average=sum/3;
	cout<<"Average="<<Average<<endl; 
   if(Average<=90)
   cout<<"Your Grade is A"<<endl;
   else if(Average<=70)
   cout<<"Your Grade is B"<<endl;
   else if(Average<=50)
   cout<<"Your Grade is C"<<endl;
   else 
   cout<<"Student is fail"; 
}
		

 
