#include<iostream>
#include<vector>
using namespace std;


// you are given a positive integer n. In one step, you can subtract one of the non-zero digits of n from n itself. The task is to find the minimum number of steps required to reduce n to 0.

int nToZero(int n){  // brute force recursive solution
    if(n == 0) return 0;  // If n is 0, no more steps are needed.

    // If n is a single digit (1-9), it can be reduced to 0 in one step.
    if(n <= 9) return 1;

    // Initialize min to a very large value (INT_MAX) to track the minimum steps.
    int min = INT_MAX;

    // Create a copy of n to extract digits.
    int num = n;
    
    // Extract digits from the number.
    while(num > 0){
        int digit = num % 10;  // Get the last digit of the number.

        // If the digit is non-zero, recursively call nToZero on n - digit.
        if(digit != 0) {
            int k = nToZero(n - digit);
            
            // Update min if a smaller number of steps is found.
            if(min > k) min = k;
        }
        num = num / 10;  // Remove the last digit.
    }

    // Return the minimum number of steps plus one (for the current step).
    return 1 + min;
}

int nToZero(int n, vector<int>& v){  // top to bottom approach, optimal solution
   
    if(n == 0) return 0;
    if(n <= 9) return 1;
    
    // Check if the result for n is already computed and stored in the vector v.
    if(v[n] != -1) return v[n];
    int min = INT_MAX;
    int num = n;

    while(num > 0){
        int digit = num % 10;  
        if(digit != 0) {
            int k = nToZero(n - digit, v);
            if(min > k) min = k;
        }
        num = num / 10;  
    }

    // Store the computed result in the vector v for future use.
    return v[n] = 1 + min;
}

int btt(int n){  // bottom to top approach
    vector<int> v(n+1);
    v[0]=0;
    for(int i=1;i<=9;i++){
      v[i]=1;
    }

    int min;
    int num;
    for(int i=10;i<=n;i++){
       num=i;
       min=INT_MAX;
    while(num > 0){
        int digit = num % 10;  
        if(digit != 0) {
            int k = v[i-digit];
            if(min > k) min = k;
        }
        num = num / 10;  
    }
    v[i]=1+min;
    }
    return v[n];
}


int main(){
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    vector<int> v(n+1, -1);       // Initialize a vector  (for memoization). 
    cout << "Number of minimum steps by brute force :- " << endl << nToZero(n) << endl;
    cout << "Number of minimum steps by top to bottom approach :- " << endl << nToZero(n, v)<<endl;
    cout << "Number of minimum steps by bottom to top approach :- " << endl << btt(n);
}

