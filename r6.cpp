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
   
      return "Hello, "+ v[0]+" and "+v[1]+".";

}

/////

if(v.size()==3){
    
    vector<string> re2;
    vector<string> re3;
    int k=1;
    int re2_count=0;
     for(auto s:v){
k=1;
      for(auto c:s){
      if(!isupper(c)){

       re2.push_back(s) ;
       k=0;
       break;
 }

 }
  if(k==0)continue;
 re3.push_back(s);
 }



if(re2.size()==3){

    return "Hello, "+ re2[0]+", "+re2[1]+" and "+re2[2]+".";
}
else if(
re3.size()==1&&
re2.size()==2
)
return "Hello, "+ re2[0]+", "+re2[1]+"."+" AND HELLO "+re3[0]+"!";
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
cout<<"\n";
cout<<greet({"Amy", "Brian", "Charlotte"});
cout<<"\n";
cout<<greet({"Amy", "BRIAN", "Charlotte"});
}