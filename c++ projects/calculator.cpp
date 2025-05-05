#include<iostream>
using namespace std;

void centerAlignText(const string &text, int width) {
    int padding = (width - text.length()) / 1;  //Calculate the left padding
    for (int i = 0; i < padding; ++i) {
        cout << " ";  // Print the left padding
    }
    cout << text << endl;  // Print the text
}
int main(){
     string text ="calculator";
     int width = 60;
     centerAlignText(text, width);
     cout <<" type + for addition"<<endl;
     cout<<"type - for substraction"<<endl;
     cout<<"type * for multiplication"<<endl;
     cout<<"type / for division"<<endl;
     cout<<"type % for modulous"<<endl;




     int a , b;
     cout << "enter the first number:" <<endl;
     cin >> a ;
cout << "enter the second number:" <<endl;
cin>> b;
char operation;
cout << "enter the operation :"<<endl;
cin >> operation;
switch(operation){
    case '+' : 
    cout << a << "+" << b << "=" << a+b <<endl;
    break;
    case '-' :
    cout << a << "-" << b << "=" << a-b <<endl;
    break;
    case '*' :
    cout << a << "*" << b << "=" << a*b <<endl;
    break;
    case '/' :
    if(b==0){
        cout << "invalid"<<endl;
    }
        else {
            cout << a << "/" << b << "=" << a/b <<endl;
        }
        break;
        case '%' :
        if(b==1){
cout << "invalid "<<endl;
        }
else {
    cout << a << "%" << b << "=" << a%b <<endl;
}
break;
default : 
cout<< "invalid operation" << endl;
break;
        
    
} 
return 0;
}