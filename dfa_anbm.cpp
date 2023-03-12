//DFA L={a*bb*}
#include<iostream>
#include<string>
bool anbm(char* w , int state){
    if(*w==0 && state==1) return true;
    if(*w==0 && state==0) return false;
    if(*w=='a' && state==1) return false;
    if(*w=='b' && state==0)return anbm(++w,1);
    return anbm(++w,state);
}
int main(){
    char* s;
    s=new char[80];
    std::cin>>s;
    std::cout<<anbm(s,0);
    return 0;
}
