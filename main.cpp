#include <iostream>
#include<pokermanager.h>
#include<poker.h>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    PokerManager* p=PokerManager::getPoker();
    vector<Poker> pokerBox;
    for(int i=0;i<p->getpic().size();i++){
        for(int j=0;j<p->getpoint().size();j++){
            Poker pk(p->getpic()[i],p->getpoint()[j],p->getscore()[p->getpoint()[j]]);
            pokerBox.push_back(pk);
        }
    }
srand(time(0));
    for(int i = 0;i<50;i++){
        int r1 = rand()%52;
        int r2 = rand()%52;

        Poker p = pokerBox[r1];
        pokerBox[r1] = pokerBox[r2];
        pokerBox[r2] = p;
    }


    for(int i =0;i<pokerBox.size();i++){
        cout <<pokerBox[i].color << pokerBox[i].point << endl;
    }
    return 0;
}

