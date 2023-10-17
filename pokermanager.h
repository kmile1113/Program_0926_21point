#ifndef POKERMANAGER_H
#define POKERMANAGER_H
#include <iostream>
#include<vector>
#include<map>
using namespace std;

class PokerManager
{
private:
    vector<string> color;
    vector<string> point;
    map<string,int>score;
    PokerManager();
    PokerManager(const PokerManager& p);
    static PokerManager* pokermen;
public:

    static PokerManager* getPoker();
    vector<string> getpic();
    vector<string> getpoint();
    map<string,int> getscore();
};

#endif // POKERMANAGER_H
