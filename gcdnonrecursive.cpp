/* GCD, non recursive. The entire reason this works is because for x>y gcd(x,y)=gcd(x%y,y)=gcd(y,x%y). Let z=x%y, then, we continue. gcd(y,z)=gcd(y%z,z)=gcd(z,y%z), etc.
*, as shown in the document under the Euclidean algorithm section. There is also a recursive way to do this
*
*/
#include<iostream>

int main(){
    int a,b,r,temp;
    std::cout<<"Please input the two numbers to compute the GCD of"<<std::endl;

    while(std::cin>>a>>b){
        int binit=b; /* This is only done to allow the output of this specific number in the last std::cout */
        int ainit=a; /* Same reason as the previous comment */
        if(b<0 || a <0){
            b=abs(b);
            a=abs(a);
        }
        if(b>a){
            temp=a;
            a=b;
            b=temp;
        };
        while(b!=0){
                r=a%b; /* r is the remainder of a/b, once the remainder is 0, so will b=0 during that same run through of the loop, so we can use r!=0 | b!=0, both should work, but
                using r!=0 can cause problems if you don't do the initial step outside of a loop, as r is not defined in the program outside of the loop. */
                a=b;
                b=r;
        };
        std::cout<<"gcd("<<ainit<<","<<binit<<") is: "<<a<<std::endl;
    }




}
