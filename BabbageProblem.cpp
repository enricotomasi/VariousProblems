#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    long long int n = -1;
    cout << "Babbage problem general solution" << endl;
    cout << "Insert the number: ";
    cin >> n;
    
    //cout << endl << "Number: " << n << endl;
    
    int nn = (int)(log10(n)) + 1;
    
    //cout << "Number of digits: " << nn << endl;

    long long int i = 1;
    
    while (true)
    {
        long long int sq = pow(i, 2);
        long long int sqc = sq % (long long int)pow(10, nn);
        
        //cout << n << " " << sq << " " << sqc << endl;
        
        if (sqc == n)
        {
            cout << "Found! " << i << " square: " << sq << endl;
        }
        
        i++;
    }

    return 0;
