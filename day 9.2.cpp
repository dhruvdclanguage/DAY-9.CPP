#include<iostream>

using namespace std;

class p{
	
	public :
		
		float F =100;
		
		
};
class q : public p{
	
	public :
	    
		void Fehrenheit(){
			
	//	 T(°F) = T(°C) × 9/5 + 32; //
		 
		cout<<((N * 9.0 / 5.0) + 32.0)<<endl;
		 
		}
};
class r : q{
	
	public :
		
		float F = 100;
		
		
	public :
		
		
		void Kelvin(){
			
			K = 273.5 + ((F - 32.0) * (5.0/9.0));
			
	cout << "Temperature in Kelvin ( K ) = "<< Fahrenheit_to_Kelvin( F ) ;
			
		}
};


int main(){

q obj;

obj.temperature;
obj.Fehrenheit();
	return 0;
}
