#include <iostream>

using namespace std;

class hero{
public:
	int skills;
	float power;
protected:
	int superskill;
public:
	hero(int numberofskills,float poweroflife):skills(numberofskills),power(poweroflife){
		cout << "Selected A Hero!" << endl;
		superskill = 0;
	}

	void one(){
		cout << "qqq" << endl;
	}
	
	void one(int a){
		cout << "www" <<endl;
	}
};

class PA:public hero{
public:
	PA():hero(4,1000.0){
		cout << "I picked PA!" << endl;
	}
	
	void two(){
		cout << "PA's two " << endl;
	}
	
	void SetPower(float p){
		power = p;
	}
	
	void booom(){
		cout << "hero super skill " << superskill << endl;
	}
};

int main(){
	PA pa;
	PA zhibao;
	zhibao.SetPower(100.0);
	pa.SetPower(50.0);
	cout << "zhibao's power :  " << zhibao.power  << "  0x"  << &zhibao.power << endl;
	cout << "pa's power : " << pa.power << "  0x" << &pa.power << endl;
	return 1;
}
