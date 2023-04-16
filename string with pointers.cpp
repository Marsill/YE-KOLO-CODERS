#include <iostream>
using namespace std;
int main (){
 char message[]="Vacation is near ";
char *ptr_message= message;
 cout<<"Message: ";
 while(*ptr_message!= '\0'){
 	cout<<*ptr_message;
 	*ptr_message++;
 }return 0;
}

