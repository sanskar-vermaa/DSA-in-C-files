// #include<iostream>
// using namespace std;


// int binary_deimal(int num){
//     int rem;
//     int mul=1;
//     int ans=0;
//     while(num>0){

//         // reminer 
//      rem=num%10;
//         //qoutient
//         num=num/10;
//         // ans
//      ans=rem*mul+ans;

//         // update multimplier 2^i;
//         mul=mul*2;


//     }
  
//     return ans;
   
// }
// int decimal_octa(int ans){
// int rem;
// int oct=0;
// int mul=1;

// while(num>0){
//     rem=num%8;
//     num=num/8;
//     oct=rem*mul+oct;

//     mul=mul*10;
// }
// cout<<oct;

// }
// int main(){
// int num;
// cout<<" Enter the number :";
// cin>>num;

// int binary =binary_deimal(num);
// cout<<binary_deimal(num);
// decimal_octa(binary);
 


// }

#include<iostream>
using namespace std;

int binary_decimal(int num) {
    int rem;
    int mul = 1;
    int ans = 0;
    while (num > 0) {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    return ans;
}

void decimal_octal(int num) {
    int rem;
    int octal = 0;
    int mul = 1;

    while (num > 0) {
        rem = num % 8;
        num = num / 8;
        octal = rem * mul + octal;
        mul = mul * 10;
    }
    cout << octal;
}

int main() {
    int num;
    cout << "Enter the binary number: ";
    cin >> num;

    int decimalNum = binary_decimal(num);
    cout << "Decimal: " << decimalNum << endl;

    cout << "Octal: ";
    decimal_octal(decimalNum);
    cout << endl;

    return 0;
}
