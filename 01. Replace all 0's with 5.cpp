// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    int num = n;
    int sum = 0, place = 1;
    if(num == 0){
        return 5;
    }
    while(num > 0){
        int digit = num % 10;
        if(digit == 0){
            sum = sum + place * 5;
        }
        place = place * 10;
        num = num / 10;
    }
    return n + sum;
}
