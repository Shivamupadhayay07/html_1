#include<iostream>
#include<string>
using namespace std ;


int dataTypes(string type) {
	// Write your code here

	if  (type == "integer")
	cout<<"4"<<endl;


	else if (type == "long")
	cout<<"8"<<endl;
	
	
	else if (type == "float")
	cout<<"4"<<endl;
	
	else if (type == "double")
	cout<<"8"<<endl;
	
	else if (type == "character")
	cout<<"1"<<endl;

else
    return -1;
}

int main()
{
	char string[10];
    
	cin>>string;
	dataTypes(string );

	return 0;

}
