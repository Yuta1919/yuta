#include<iostream>
using namespace std;

double avg(int t[]);

int main() {
    int test[5];
    
    cout<<"����"<<endl;
    
    for(int i=0; i<5; i++){
        cin>>test[i];
    }
    double ans = avg (test);
    cout << "���ϓ_"<<ans<<endl;
    return 0;
}