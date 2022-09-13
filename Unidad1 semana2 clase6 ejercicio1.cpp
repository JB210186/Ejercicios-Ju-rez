#include <iostream>
#include <sstream>
using namespace std;
string convertir(int a){
    stringstream buf;
    string res;
    buf<<a;
    res=buf.str();
    return res;
}
int main(){
    int sum=0;
    string cad="";
    for(int i=0;i<=100;i=i+2){
        cad=cad+" "+convertir(i);
        sum = sum +i;
    }
    cout<<cad<<endl;
    cout<<sum;
   return 0;
}