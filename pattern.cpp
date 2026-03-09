#include<iostream>
using namespace std;

int main(){

    int n = 5;

    cout << "\n1. Simple Pyramid\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout << "\n2. Inverted Pyramid\n";
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout << "\n3. Half Diamond\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }

    cout << "\n4. Diamond Pattern\n";
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=n;j>i;j--) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }

    cout << "\n5. Floyd Triangle\n";
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    cout << "\n6. Pascal Triangle\n";
    for(int i=0;i<n;i++){
        int num2=1;
        for(int j=0;j<=i;j++){
            cout<<num2<<" ";
            num2 = num2*(i-j)/(j+1);
        }
        cout<<endl;
    }

    cout << "\n7. Number Pyramid\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout << "\n8. Palindrome Triangle\n";
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--) cout<<j;
        for(int j=2;j<=i;j++) cout<<j;
        cout<<endl;
    }

    cout << "\n9. Alphabet Pyramid\n";
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    cout << "\n10. Hollow Pyramid\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i || i==n)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    cout << "\n11. Right Half Diamond\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }

    cout << "\n12. Hourglass Pattern\n";
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }

    cout << "\n13. Reverse Number Triangle\n";
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout << "\n14. Centered Star Pyramid\n";
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }

    cout << "\n15. Reverse Centered Pyramid\n";
    for(int i=n;i>=1;i--){
        for(int j=n;j>i;j--) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }

    cout << "\n16. Full Diamond\n";
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=n;j>i;j--) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }

}