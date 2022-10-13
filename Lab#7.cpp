#include<iostream>
using namespace std;
class complex{
	private:
		int real;
		int imaginary;
	public:
	    complex(int r=0,int i=0){
	    	real=r;
	    	imaginary=i;
		}	
    friend istream& operator>>(istream&input,complex &c);
	friend ostream& operator<<(ostream&output,complex c);    	
};


 istream& operator>>(istream&input, complex&c){
	cout<<"Please enter real part of complex number: "<<endl;
	input>>c.real;
	cout<<"Please enter imaginary part of complex number: "<<endl;
	input>>c.imaginary;
	return input;
}

 ostream& operator<<(ostream&output,complex c){
	cout<<"The complex object is: "<<endl;
	output<<c.real<<"+i"<<c.imaginary<<endl;
	return output;
}

int main(){
	
	complex c1;
	cin>>c1;
	cout<<c1;
	return 0;
}
