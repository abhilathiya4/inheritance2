#include<iostream>
using namespace std;


class RBI {
	
	public:
	int a=10;
		void roi1(){
		
			cout<<a<<"+";
		}
};

class SBI{

	public:
		int b=30;
		void roi2(){
		
			cout<<b<<"+";
		}
};
class BOB{
	
	public:
		int c = 20;
		void roi3(){
			cout<<c<<"+";
		}
};

class ICICI: public RBI, public SBI , public BOB{
	
	public:
		int d=40;
		void roi4(){
		
		
		cout<<d<<endl;
			
		cout<<"sum = "<<a+b+c+d;
		}
	
};

int main(){
		
	ICICI sum;
	
	sum.roi1();
	sum.roi2();
	sum.roi3();
	sum.roi4();
	return 0;
}
