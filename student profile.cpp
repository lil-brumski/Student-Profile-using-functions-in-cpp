#include <iostream>
using namespace std;


string stu_name(){
	          string full_name;
	          getline(cin,full_name);
	          return full_name;
}
int stu_age(){
	    int your_age;
	    cin>>your_age;
	    return your_age;	
}
string stu_gender(){
	           string your_gender;
	           cin>>your_gender;
	           if(your_gender == "male" || your_gender == "Male" || your_gender == "female" || your_gender == "Female"){
	           return "You are a "+your_gender+".";
	           }
	           else{
	           	return "Invalid or non-existent gender!";
	           }
	}
	
	
	
int main (){
	    cout<<"Enter your name in the first line; Your age in the second line; and your gender in the third:"<<endl;
	    
	    
	    string name = stu_name();
	    cout<<"Your name is "<<name<<"."<<endl;
	    
	    
	    int age = stu_age();
	    cout<<"You are "<<age<<" years old."<<endl;
	    
	    
	    string gender = stu_gender();
	    cout<<gender;
	    
	    
	    return 0;
}

