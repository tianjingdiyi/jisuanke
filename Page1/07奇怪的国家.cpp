#include<stdio.h>
#include<string.h>
//#include<iostream>
//using namespace std;
main()
{
    char n1[51];
    char n2[51];
    char n3[51]="";
    gets(n1);
    gets(n2);
    //puts(n3);
    for(int i=0;i<strlen(n1);i++)
    {
        if(n1[i]==n2[i])
        {
            n3[i]='1';
        }
        else
            n3[i]='0';
    }
    puts(n3);
}
