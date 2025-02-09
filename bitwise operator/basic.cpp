#include<iostream>
#include<vector>
using namespace std;

// what are bitwise operators -> applied on the corresponding bits of data..
// logical operators are work on the boolean like && || etc ...

// basic bitwise operatons
// and - & , or - | , not - ~ , xor - ^


// left shift << , x<<1 -> x*2 , x<<2 -> x*2*2 , x<<3 -> x*2*2*2
// right shift >> , x>>1 -> x/2 , x>>2 -> x/2*2 , x>>3 -> x/2*2*2

int binary_to_decimal(string &binary){
    int n=binary.size();
    int result=0;
    for(int i=n-1;i>=0;i--){
      char ch=binary[i];
      int num=ch-'0';
      result+= num*(1 << (n-i-1)); // left shift  
    }
    return result;
}

string decimal_to_binary(int num){
      string binary="";

      while(num>0){
          if(num%2==0){
            // num is even
            binary='0'+ binary;
          }
          else binary='1'+binary;

         num/=2;
      }    
      return binary;
}

// find the number of set bits for any integer n
// set bits mean bits who have the value 1 , 0 is called unset bit

int number_of_set_bits(int n){
    int count=0;
    while(n>0){
       if(n%2!=0) count++;
       n/=2;
    }
    return count;
}

// method 2

int number_of_set_bits2(int n){  // brian kerniglen's algorithm
    int count=0;
    while(n>0){
      count++;
      n=n&(n-1);
    }
    return count;
}

// Given an integer n, find the maximum power of two that is smaller than n

 int maximum_power(int num){  // by  brian kerniglen's algorithm
     int save=0;
     int count=0;
     while(num>0){
      count++;
      save=num;
      num=num&(num-1);
     }
     if(count==1) return save/2;
     return save;

 }

 // incomplete do it

 int maximum_power2(int num){  // by  brian kerniglen's algorithm
    int k=1;
    int x=num;
    int y=num>>k;

    while(x!=y){
       x=x|y;
        
    }
    return 0;
 }

// Given an integer n, flip all its bits i.e. if the given bit is 1, change it to 0 and vice versa.

int flip_all_bits(int number){
    return 0;
}

// Calculate the minimum number of bit flips to convert from one number to another.

void minimum_number_of_bits_flip(int num1 , int num2){  
    int result=num1^num2;
   cout<< number_of_set_bits2(result);
   return;
}

// Given an integer array where every element occurs twice except one occurs only once. Find that unique element.

// important point -> XOR have the commutative property 
// we can swap the the numbers before operations
// 2+4+5=5+2+4

int unique_element(int arr[], int size){

    int store=arr[0];
    for(int i=1;i<size;i++){
       store =store^arr[i];
    }
    return store;
}

// Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only

int Two_unique_elements(int arr[], int size){
     
   
}

//Given an integer array. Find the length of longest subarray which has maximum possible bitwise AND value.



int main(){
    
    // input for function 1

    // string binary;
    // cout<<"Enter the binary string "<<endl;
    // cin>>binary;
    // cout<<binary_to_decimal(binary)<<endl;  

     // input for function 2

    // int num;
    // cout<<"Enter the number "<<endl;
    // cin>>num;
    // cout<<decimal_to_binary(num);

     // input for function 3

    // int number;
    // cout<<"Enter the number "<<endl;
    // cin>>number;
    // cout<<"The number of set bits are :- "<<number_of_set_bits(number)<<endl;
    // cout<<"Inbuilt function :- "<<__builtin_popcount(number)<<endl; // inbuilt function for count set bits
    // cout<<"The number of set bits by method 2 are :- "<<number_of_set_bits2(number);

    // cout<<"Maximum power smaller than given number "<<maximum_power(number);
    
    // minimum_number_of_bits_flip(23,31);

    // int arr[]={4,4,1,3,2,3,5,1,5};
    // cout<<unique_element(arr,9);

    cout<<(2^3)<<" ";
    cout<<(7^17)<<" "; 
    cout<<(18^19)<<" ";
    cout<<(23^20)<<" ";



} 