#include <iostream>
//dynamic memory allocation
using namespace std;

int main(){
    string *s=NULL;
    s=new string;
    if(!s){
        cout<<"memory is not allocated\n";
    }
    else{
        *s="Techademy";
        cout<<"S contains ="<< *s <<endl;
    }
    delete s;//is not memory leakage will occur
    return 0;
}
