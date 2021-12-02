#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <numeric>
#include <iostream>
using namespace std;

string greet(vector<string> v){
      
      return  v.empty() ?  
      "Hello, my friend": "Hello, "+accumulate(v.begin(), v.end(), string(""));
}
int main(){
cout<<greet({});
cout<<"\n";
cout<<greet({"Bob"});
}