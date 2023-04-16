//pointer
#include <iostream>
using namespace std;
int main(){
	int value1 = 5, value2 = 15;
	int *p1, *p2;
	p1 = &value1;
	p2 = &value2;
	*p1 = 10;
	*p2 = *p1;
	p1 = p2;
	*p1 = 20;
	cout <<"value1 is " << value1;
	cout <<"  / value2 is " << value2;
	cout<< sizeof (p1)<< sizeof(&p1)<< endl;
	return 0;
}
