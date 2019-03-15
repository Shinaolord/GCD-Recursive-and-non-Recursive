#include <iostream>

int usergcd(int a, int b){
    int temp;

        if(a<0 || b < 0){
            a=abs(a);
            b=abs(b);
        }
        if(b>a){
          temp=b;
          b=a;
          a=temp;
        }
        if(b==0){
            return a;
        }
        else{
            return usergcd(b, a%b);
        }

};

int main(){
    std::cout<<"Input two numbers to compute the GCD of:"<<std::endl;
    int a,b;
    while(std::cin>>a>>b){

        std::cout<<"gcd("<<a<<","<<b<<") is "<< usergcd(a,b)<<std::endl;
    }
    return 0;
}
