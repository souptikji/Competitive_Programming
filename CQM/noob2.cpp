#include<iostream>
using namespace std;

main() {
        int N = 100000000;
        int p[N];
        for(int f = 2; f * f < N; f++) {
            if(p[f] == 0)
                for(int k = f; k < N; k += f)
                    p[k]++;
        }
        for(int i = 1; i <= 8; i++) {
            int c = 0, j;
            for(j = 1; j < N && c < i; j++)
                if(p[j] == i)
                    c++;
            if(c == i)
            cout<<i<<" = "<<--j<<endl;
                
        }
    }
