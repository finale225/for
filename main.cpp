/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int t, a, b;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> a >> b;
        v.push_back(a+b);
    }
    for (int i=0; i<t; i++) {
        cout << v[i] << endl;
    }
}*/

#include <iostream>
using namespace std;

int main(){
    int t, a, b;
    cin >> t ;
    for(int i=0 ;i<t; i++){
        cin >> a >> b ;
        cout << a+b << endl;
    }
}