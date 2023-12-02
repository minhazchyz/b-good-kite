/*
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,z=0,y=0;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];


        }
        sort(a,a+n);
        int y=a[0]+1;
        for(int j=1;j<n;j++){
           // int y=a[0]+1;
            int z=z*a[j];

        }
        int y=y*z;
        cout<<y;
    }
    return 0;
}
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        long long z = 1;
        for (int j = 1; j < n; j++) {
            z *= a[j];
        }

        long long y = (a[0] + 1) * z;

        cout << y << endl;
    }

    return 0;
}
