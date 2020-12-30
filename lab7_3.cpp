/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/
#include<iostream>

using namespace std;

int main (){
    int age,hei,pro;
    cout<<"Enter your age: ";
    cin>>age;
    
    if(age<=20){
        cout<<"Enter your height: ";
        cin>>hei;
        if(hei<=160){
          cout<<"Your status = FRIEND"  ;
        }else{
            cout<<"Enter your property: ";
            cin>>pro;
            if(pro>69000000){
            cout<<"Your status = MARRIED";  
            }else{
            cout<<"Your status = ONE-NIGHT-STAND";    
            }
        }
    }
    
    if(age<=30){
      cout<<"Enter your property: ";
      cin>>pro;
      if(pro>10000000){
       cout<<"Your status = BEST FRIEND";   
      }else{
       cout<<"Your status = UNFRIEND";   
      }
    }
    
}
