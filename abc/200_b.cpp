#include <iostream>
using namespace std;
int main(){
    uint64_t N;
    int K;
    cin >> N >> K;
    for (int i=0; i<K; ++i){
        if(N%200 == 0){
            N /= 200;
        }else{
            N *= 1000;
            N += 200;
        }
    }
    cout << N << endl;
}