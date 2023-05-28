#include<iostream>
#include<string>
#include <stack>
std::stack<int> st;
bool anbn(char* w , int state){
    if(state==2) return true;
    if(*w==0 && st.empty()) return anbn(w,2);
    if(*w=='a' && state==0) {st.push(0); return anbn(++w,0);}
    if(*w=='b' && state==0 && !st.empty()){st.pop();return anbn(++w,1);}
    if(*w=='b' && state==1 && !st.empty()){st.pop();return anbn(++w,1);}
    return false;
}
int main(){
    char* s;
    s=new char[80];
    std::cin>>s;
    std::cout<<anbn(s,0);
    return 0;
}