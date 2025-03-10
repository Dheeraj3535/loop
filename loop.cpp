#include<iostream>
using namespace std;

int main() {
    for(;;){
        cout << '\n';
    int n;
    cout<<"write a number";
    cin>>n;
    // this program is for triangular star pattern

    for (int abc = 1; abc <= n; abc = abc + 1) {
        for (int space_count = n - abc; space_count >= 1; space_count--) {
            cout << ' ';
        }

        for (int star_count = 1; star_count<abc; star_count++){ 
            cout <<'*';
        } 

        for (int star_count =1; star_count<=abc; star_count++){
            cout<<'*';
        }
        for (int space_count = n - abc; space_count >= 1; space_count--) {
            cout << ' ';
        }
        cout<< '\n';
    }
    }

    }
    
