#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"please enter you name:"<< name<<endl;
    cin >> name;
    if (name.length() <= 7){
        cout << "hello" << " " << name <<"!" << " " << "welcome to the world of coding" << endl;
    } 
    else {
        cout<< "user not recognised" << endl;
    }
 return 0;   
}