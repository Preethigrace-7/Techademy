#include <iostream>
//dynamic memory allocation
using namespace std;

int main(){
    int *p=NULL;
    p=new int;
    if(!p){
        cout<<"memoery is not allocated\n";
    }
    else{
        *p=76;
        cout<<"value of p ="<< *p <<endl;
    }
    float *r=new float(54.23);
    cout<<"value of r="<< *r <<endl;
    
    int n=5;
    int *w=new int[n];
    if(!w){
        cout<<"memory is not allocated\n";
    }
    else{
        for(int i=0;i<n;i++){
            w[i]=i+1;
        }
        cout<<"stored values are=";
        for(int i=0;i<n;i++){
            cout<<w[i]<<" ";
            }
            cout<<"\n";
    }
   
    string *s=NULL;
    s=new string;
    if(!s){
        cout<<"memory is not allocated\n";
    }
    else{
        *s="Techademy";
        cout<<"S contains ="<< *s <<endl;
    }
    delete p;//if not memory leakage will occur
    delete r;
    delete []w;
    delete s;
    return 0;
}
