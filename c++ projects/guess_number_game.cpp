#include<iostream>

using namespace std;
enum level {
    easy=1  ,
    medium,
    hard
};
int main(){
    cout << "NUMBER GUESSING GAME" << endl;
   int levelinput;
   cout << "press 1 for easy, press 2 for medium, press 3 for hard" << endl;
       cout << "select level :" << endl;
    cin >> levelinput;
    switch (levelinput){
case easy : cout << " you get 10 chances" << endl;
break;
case medium : cout << " you get 7 chances" << endl;
break;
case hard : cout << " you get 5 chances" << endl;
default : cout << " invalid level " << endl;
break;
    }
 
}

  