#include<iostream>
#include<vector>
using namespace std ;



int main(){


 vector<int>vec= {4,2,1,2,1,4,9};

 // size
 cout << vec.size()<<endl;

 //for  each loop 
//  for(int val: vec){
//     cout<<val<<endl;
//  }

int ans=0 ;
for (int val: vec )
{
   ans = ans ^ val; 
}

cout << ans ;
}