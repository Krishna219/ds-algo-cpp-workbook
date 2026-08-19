#include<iostream>
using namespace std;

class Student {
	int roll, marks;
	string name;
public:
	Student(int _roll, string _name, int _marks)
		: roll(_roll), name(_name), marks(_marks){}
	void decr_marks(){ this->(--marks);}//this->marks--; works}//marks--; works} //LINE-1
	void show(){ cout << roll << " : " << name << " : " << marks;}
};

int main(){
	Student s(1, "Rajen", 90);
	s.decr_marks();
	s.show();
	return 0;
}
