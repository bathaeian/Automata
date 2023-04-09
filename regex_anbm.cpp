#include<iostream>
#include<string>
#include<regex>
bool anbm(std::string w ){
    std::regex str_expr ("a*bb*"); 
    if (std::regex_match (w,str_expr)) return true;
    else return false;
}
int main(){
    std::string s;
    std::cout<<"Exp?";
    std::cin>>s;
    while(*s.begin()!='q'){
        std::cout<<anbm(s);
        std::cout<<"\nfor quit type q: ";
        std::cin>>s;
    }
    return 0;
}