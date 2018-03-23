#include <iostream>
#include <string.h>
using namespace std;

class MyString{
private:
	char *Buffer;
public:
	//MyString(const char* Message):Buffer(Message){}
	MyString(const char *Message){
		if(Message != NULL){
			Buffer = new char [strlen(Message) + 1];
			strcpy(Buffer,Message);
		}	
	}
	~MyString(){
		cout << "Destory" << endl;
	}

	void ShowMessage(){
		cout << "The Private Buffer :" << *Buffer << endl;
	}
	
	int GetLength(){
		return strlen(Buffer);
	}
};

void UsingMyClass(MyString Input){
	cout << "What the fuck in the Buffer :" << endl;
	Input.ShowMessage();
	cout << "And how length is it? " << endl;
	cout << "length is :" << Input.GetLength() <<  endl;
}

int main(){
	int bb;
	cout << "sizeof bb : " << sizeof(bb) << endl;
	MyString* word = new MyString("chenshaozhen");
	MyString sentence("liangjiajun");
	word->ShowMessage();
	cout << "Sizeof word:" << sizeof(word) << endl;
	cout << "Sizeof sentence:" << sizeof(sentence) << endl;
	//sentence.ShowMessage();
	//cout << "length is : " << sentence.GetLength() << endl;
	UsingMyClass(sentence);
	return 1;
}
