#include <iostream>
#include <fstream>
#include <bitset>
using namespace std;
int main(){
	
    char a='a';
    bitset<8> bs(a);
    cout << a << endl;
    cout << bs << endl;
    //unsigned char* buff =a;
    std::ofstream myfile;
    //cout << "buff info:" << buff << endl;
    //myfile.open("buff.txt",ios::binary);
    //myfile << buff << std::endl;
    //myfile.write((char*)&buff,sizeof(buff));
    //myfile.close();
    return 1;
}
