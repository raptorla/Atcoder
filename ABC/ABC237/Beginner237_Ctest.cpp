#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream outputfile("test.txt");
    outputfile<<"s";
    for(int i = 1; i <= 99999; i++){
        outputfile<<"a";
    }
    
    outputfile.close();
}