#ifndef BIGINTEGER11_H_INCLUDED
#define BIGINTEGER11_H_INCLUDED

#include<bits/stdc++.h>

using namespace std;
class BigInteger{
    public:

        BigInteger(){}
    string getNum();
    BigInteger(string sNumber);
    int length()const;
    bool operator == (const BigInteger& b)const;
    bool operator < (const BigInteger& b)const;
    bool operator != (const BigInteger& b)const;
    bool operator > (const BigInteger& b)const;
    BigInteger operator + ( BigInteger& b);
    string sNumber;






};









#endif // BIGINTEGER11_H_INCLUDED
