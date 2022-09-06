#include<bits/stdc++.h>
using namespace std;

const int space = 1e7 + 10;

vector <int> seive(space, 0);
vector<int> hp(space, 0), lp(space, 0);

int main(){

    seive[0] = 1;
    seive[1] = 1;

    for (int i = 2; i*i <= space;i++){
        if(seive[i]==0){
            lp[i] = hp[i] = i;
            for (int j = 2 * i; j < space;j+=i){
                seive[j] = 1;
                //highest prime hocche giye amra jokhon seive[j]=1 banachi it means j ke 1 kortesi so eita prime na ekhon eita hocche i er multipy so ultimately j/i j ke i divide kore so loop cholbe ar value gula store hoite thakbe hp[j]=i kore last prime number jeita divide korbe oitai hobe highest prime
                hp[j] = i;

                // lowest prime hocche sheita jeita diya ek bar divide hoar por er por ar kono prime diye divide gelo oita count hobe na that't why amra flag er moto kore lp[j]=0 hoile condition er vitore dhuke lp[j]=i kore dicchi jeno next er ar kono boro prime jeno ei ta store na hoi 

                // For example 6 ke 2, 3 ei dui prime diye divide kora jay so eikhane condition na thakle lp 3 hoito

                if(lp[j]==0){
                    lp[j] = i;
                }
            }
        }
    }

    for (int i = 1; i <= 10;i++){
        cout << i<<" = "<<lp[i] << " " << hp[i] << endl;
    }

        return 0;
}