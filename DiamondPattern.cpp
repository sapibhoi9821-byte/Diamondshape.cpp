#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Pick a number (1-5): ";
    cin >> n;
     for(int i =1; i<=n; i++) {
         for(int k = n-i; k>0; k--) {
            cout<<" ";
        }

        for(int j = 1; j<=2*i-1; j++) {
            cout<<"*";
        }
        cout<<endl;
     }
     for(int m =n; m>=1; m--) {
          for(int g = n-m; g>0; g--) {
            cout<<" ";
        }

        for(int a = 1; a<=2*m-1; a++) {
            cout<<"*";
        }
        cout<<endl;
     }
    
    return 0;
}