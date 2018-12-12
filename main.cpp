
#include<bits/stdc++.h>

#include "BigInteger11.h"

using namespace std;



/*string pluss(string sNumber, string bsNumber)
{
    int carry=0,sum=0; string s3="";

    if (sNumber.length()<bsNumber.length()){
            sNumber.resize(bsNumber.length(),0);}

reverse(sNumber.begin(),sNumber.end());
reverse(bsNumber.begin(),bsNumber.end());


        for(int i=0;i<(int)sNumber.length();i++)
        {
            sum=carry+(sNumber[i]-'0')+(bsNumber[i]-'0');
            carry =0;
            if(sum>9){
                sum-=10;
                carry=1;
            }
            s3[i]=sum+'0';

            sum=0;
        }
        reverse(s3.begin(),s3.end());
        return s3;
}
*/
int main()
{
    //



    string s1="5";
    string s2="7";
    BigInteger a1(s1);
    BigInteger a2(s2);
        BigInteger a3(a1+a2);

        return 0;
}
