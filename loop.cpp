#include<iostream>
using namespace std;

int main() {
    for(;;){
    int pattern;
    std::cout<<"enter the patten type\n";
    cin>>pattern;
    if(pattern<1||pattern>2){
        std::cout<<"invalid\n";
        continue;
    }
        int n;
        std::cout<<" number of lines\n ";
    cin>>n;
    
    // this program is for triangular star pattern

   if (pattern==1) {
    std::cout<<"you interested in first pattern \n";

    for (int abc = 1; abc <= n; abc = abc + 1) {
        for (int space_count = n - abc; space_count >= 1; space_count-- ) {
            std::cout << ' ';
        }

        for (int star_count = 1; star_count<=abc; star_count++){ 
            std::cout <<'*'; 
        }
        std::cout<<'\n';
    }
   }

    else {
           std::cout<<"you are interested in second pattern\n";
    for (int abc = 1; abc <= n; abc = abc + 1) {
            for (int space_count = n - abc; space_count >= 1; space_count--) {
                std::cout << ' ';
            }
    
            for (int star_count =1; star_count<abc; star_count++){ 
                std::cout<<'*';
            } 
    for (int star_count =1; star_count<=abc; star_count++){
            std::cout<<'*';
        }
        for (int space_count = n - abc; space_count >= 1; space_count--) {
            std::cout << ' ';
 }    
         std::cout<<'\n';      
 }
}
}
    }

    
    
