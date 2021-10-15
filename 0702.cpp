#include<iostream>
using namespace std;

double avg(int t[]);

int main() {
    int test[5];
    
    cout<<"“ü—Í"<<endl;
    
    for(int i=0; i<5; i++){
        cin>>test[i];
    }
    double ans = avg (test);
    cout << "•½‹Ï“_"<<ans<<endl;
    return 0;
}