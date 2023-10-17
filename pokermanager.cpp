#include "pokermanager.h"
#include<vector>
#include<ctime>
#include<cstdlib>
#include<algorithm>
PokerManager* PokerManager::pokermen=NULL;
PokerManager::PokerManager()
{
    color.push_back("ºÚÌÒ");
    color.push_back("ºìÌÒ");
    color.push_back("Ã·»¨");
    color.push_back("·½¿é");
    point.push_back("2");
    point.push_back("3");
    point.push_back("4");
    point.push_back("5");
    point.push_back("6");
    point.push_back("7");
    point.push_back("8");
    point.push_back("9");
    point.push_back("10");
    point.push_back("J");
    point.push_back("Q");
    point.push_back("K");
    point.push_back("A");
    score.insert(pair<string,int>("2",2));
    score.insert(pair<string,int>("3",3));
    score.insert(pair<string,int>("4",4));
    score.insert(pair<string,int>("5",5));
    score.insert(pair<string,int>("6",6));
    score.insert(pair<string,int>("7",7));
    score.insert(pair<string,int>("8",8));
    score.insert(pair<string,int>("9",9));
    score.insert(pair<string,int>("10",10));
    score.insert(pair<string,int>("J",10));
    score.insert(pair<string,int>("Q",10));
    score.insert(pair<string,int>("K",10));
    score.insert(pair<string,int>("A",11));
}

PokerManager::PokerManager(const PokerManager &p)
{

}

PokerManager *PokerManager::getPoker()
{
    if(pokermen==NULL){
        pokermen =new PokerManager;
        return pokermen;
    }

}

vector<string> PokerManager::getpic()
{
    return color;
}

vector<string> PokerManager::getpoint()
{
    return point;
}

map<string,int> PokerManager::getscore()
{
    return score;
}



