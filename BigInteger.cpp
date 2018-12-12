
#include "BigInteger11.h"
#include<bits/stdc++.h>
#include<algorithm>




using namespace std;

BigInteger:: BigInteger(string sNumber){
    this -> sNumber = sNumber;
    cout<<this ->sNumber<<endl;
}


 int BigInteger :: length()const{
        return (int)sNumber.length();

}

string BigInteger :: getNum(){
    return sNumber;
}

bool BigInteger::operator == (const BigInteger& b)const{
    bool Equal=1;
    if(sNumber.length()!=b.sNumber.length())
    {
        Equal=0;
    }
    else{
        for(int i=0;i<(int)sNumber.length();i++)
        {
            if(sNumber[i]==b.sNumber[i]){
                continue;
            }
            else{
                Equal=0;
            }
        }

    }
return Equal;
}
     BigInteger BigInteger :: operator + ( BigInteger& b)
     {
            if(sNumber.length()>b.sNumber.length())
            {
                swap(sNumber,b.sNumber);
                //resize(sNumber.length(),'0');
            }


                reverse(sNumber.begin(),sNumber.end());
            reverse(b.sNumber.begin(),b.sNumber.end());

            while(sNumber.length()<b.sNumber.length())
            {
                sNumber.push_back('0');
            }

        int carry=0,sum=0; string s3="";
        for(int i=0;i<(int)sNumber.length();i++)
        {

            sum=(sNumber[i]-'0')+(b.sNumber[i]-'0')+carry;
            carry =0;
            if(sum>9){
                sum-=10;
                carry=1;

            }
            s3 += sum+48;

            sum=0;

        }
        if((sNumber[0]-'0')+(b.sNumber[0]-'0')>9)
            s3+='1';

        reverse(s3.begin(),s3.end());
        return BigInteger(s3);
}
bool BigInteger :: operator < (const BigInteger& b)const{
       return sNumber.length()<b.sNumber.length();
       bool LessThan=1;
       if(sNumber.length()==b.sNumber.length())
       {
           for(int i=0;i<(int)sNumber.length();i++)//when removing (int),the compiler warning!
           {
               if(sNumber[i]<b.sNumber[i])
               {
                   continue;
               }
               else{
                LessThan=0;
               }
           }
           return LessThan;
       }

}

bool BigInteger ::operator!=(const BigInteger& b)const{

        bool NEqual=1;
        if(sNumber.length()!=b.sNumber.length())
        {
            return NEqual;
        }
        else{
            for(int i=0;i<(int)sNumber.length();i++)
            {
                if(sNumber[i]!=b.sNumber[i])
                {
                    continue;
                }
                else{

                    NEqual=0;;
                }
            }

        }
        return NEqual;
}
bool BigInteger :: operator > (const BigInteger& b)const{
       return sNumber.length()>b.sNumber.length();
       bool GThan=1;
       if(sNumber.length()==b.sNumber.length())
       {
           for(int i=0;i<(int)sNumber.length();i++)//when removing (int),the compiler warning!
           {
               if(sNumber[i]>b.sNumber[i])
               {
                   continue;
               }
               else{
                GThan=0;
               }
           }
           return GThan;
       }

}



