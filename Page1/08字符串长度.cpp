#include <iostream>
using namespace std;

int str_len(char *str);

int main(){
    char *str = new char[100];
    cin>>str;
    cout<<str_len(str);
    delete str;
    return 0;
}

int str_len(char *str){
//请在这里完成你的函数
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}
