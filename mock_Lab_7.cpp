#include<iostream>
using namespace std;
class square{
	private:
		int length;
		int width;
    friend istream& operator>>(istream&input,square &s);
	friend ostream& operator<<(ostream&output,square s);    	
};


 istream& operator>>(istream&input,square&s){
	cout<<"Enter the length and width of square"<<endl;
	input>>s.length;
	input>>s.width;
	return input;
}

 ostream& operator<<(ostream&output,square s){
	cout<<"The length and width of square is"<<endl;
	output<<s.length<<endl;
	output<<s.width;
	return output;
}

int main(){
	
	square s1;
	cin>>s1;
	cout<<s1;
	return 0;
}
