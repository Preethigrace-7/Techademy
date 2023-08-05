#include <iostream>

using namespace std;

void fun_memleak(){
    
    char *ptr=new char('T');
    delete ptr;
    return;
}
int main(){
    fun_memleak();
    return 0;
}
