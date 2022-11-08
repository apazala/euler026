#include <iostream>

using namespace std;

#define TARGET 1000
int main()
{
    int maxlen = -1;
    int maxnum = -1;
    for(int n = 1; n <= TARGET; n++){
        int len = 0;
        if(n%2 == 0 || n %5 == 0)
            continue;
            
        int k = 10%n;

        while(k != 1 && k != 0){
            k*=10;
            k%=n;
            len++;
        }
        if(k==0) continue;

        if(len > maxlen){
            maxlen = len;
            maxnum = n;
        }
    }

    cout << maxnum << endl;

}