#include <iostream>
using namespace std;

int digit_counter(int n){
    int number_of_digit=0;
    do
    {
        number_of_digit++;
        n=n/10;
    } while (n>0);
    return number_of_digit;
}

int reverse_number(int n){
    int rev_num = 0;
    int last_digi;
    while (n>0)
    {
        last_digi=n%10;
        rev_num = (rev_num*10)+last_digi;
        n=n/10;
    }
    return rev_num;
    
}

bool is_palindrome(int n){
    int original_number=n;
    long int rev_num = 0;
    int last_digi;
    while (n>0)
    {
        last_digi=n%10;
        rev_num = (rev_num*10)+last_digi;
        n=n/10;
    }

    if (original_number==rev_num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string armstrong(int n){
    int ori_num=n;
    int arm_sum=0;
    do
    {
        int mod=n%10;
        arm_sum =arm_sum+ (mod)*(mod)*(mod);
        n=n/10;
    }while (n>0);
    if (arm_sum==ori_num)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
    
    
}

int main(){
    int n;
    cin>>n;
    cout<<armstrong(n);
    return 0;
}