#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <numeric>
#include <iostream>

using namespace std;

string greet(vector<string> v){
      
     if(v.empty()) return "Hello, my friend.";  

if(v.size()==1){
      for(auto s:v){

      for(auto c:s){
      if(!isupper(c)){
      return "Hello, "+accumulate(v.begin(), v.end(), string(""))+".";
 }}}
      
      return "Hello "+accumulate(v.begin(), v.end(), string(""))+"!";

}

if(v.size()==2){
return "Hello, "+v[0]+" and "+v[1]+".";
}
   
    return {};
}
       
      
        

int main(){
cout<<greet({});
cout<<"\n";
cout<<greet({"Bob"});
cout<<"\n";
cout<<greet({"JERRY"});
cout<<"\n";
cout<<greet({"Jill", "Jane"});
}