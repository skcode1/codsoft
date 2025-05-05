#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    srand(123456);
    int rand_no1 = rand();
    int rand_no2 = rand();
    int rand_no3 = rand();
    int rand_no4 = rand();
     cout << "First Random Number : " << " " << rand_no1 << endl;
     cout << "Second Random Number : " << " " << rand_no2 << endl; 
     cout << "Third Random Number : " << " " << rand_no3 << endl;
     cout << "Fourth Random number :" << " " << rand_no4 << endl;
}