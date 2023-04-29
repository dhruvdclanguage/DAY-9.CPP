#include<iostream>

using namespace std;

class x{
	
	public :
		int a;
		int b;
		int c;
		
};
class y : public x{
	
	public :
		
		int setdata(){
			
			a = 5;
			b = 10;
			c = 15;
		}
		
		void getdata(){
			
			int ans = setdata();
			
			cout<<"Cube :"<<a*a*a<<endl;
			cout<<"Cube :"<<b*b*b<<endl;
			cout<<"Cube :"<<c*c*c<<endl;			
		}
};


int main(){
	y obj;

obj.a;
obj.b;
obj.c;
obj.setdata();
obj.getdata();	
	return 0;
}
