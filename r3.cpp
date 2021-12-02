#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <numeric>
#include <iostream>

using namespace std;

string greet(vector<string> v){
      
     if(v.empty()) return "Hello, my friend.";  

      for(auto s:v){

      for(auto c:s){
      if(!isupper(c)){
      return "Hello, "+accumulate(v.begin(), v.end(), string(""))+".";
 }}}
      
      return "Hello, "+accumulate(v.begin(), v.end(), string(""))+"!";
      
      
    
}
       
      
        

int main(){
cout<<greet({});
cout<<"\n";
cout<<greet({"Bob"});
cout<<"\n";
cout<<greet({"JERRY"});
}