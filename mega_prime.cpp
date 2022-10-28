#include <bits/stdc++.h>
using namespace std;
 
// function to check digits
bool checkDigits(int n)
{
    // check all digits are prime or not
    while (n) {
        int dig = n % 10;
 
        // check if digits are prime or not
        if (dig != 2 && dig != 3 &&
            dig != 5 && dig != 7)
            return false;
 
        n /= 10;
    }
 
    return true;
}
 
// To check if n is prime or not
bool prime(int n)
{
    if (n == 1)
        return false;
 
    // check for all factors
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
 
    return true;
}
 
// To check if n is Full Prime
int isFullPrime(int n)
{
    // The order is important here for
    // efficiency.
    return (checkDigits(n) && prime(n));
}
 
// Driver code to check the above function
int main()
{
    int n;
    cin>>n;
    if (isFullPrime(n))
       cout << "Mega Prime";
    else
       cout << "Not Mega Prime";
    return 0;
}