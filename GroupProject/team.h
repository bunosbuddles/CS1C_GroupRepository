#ifndef TEAM_H
#define TEAM_H

#include <iostream>
using namespace std;


struct Region {
    string conference;
    string divison;
};

struct Location {
    string state;
    string city;
};

class Team {

public:
    string name;
    string stadium;
    int capacity;
    string state;
    string city;
    string conference;
    string division;
    string surfaceType;
    string roofType;
    int dateOpened;
    Team();
    Team(string name, string stadium, int capacity, string state, string city, string conference, string surfaceType, string division, string roofType, int dateOpened);



};



#endif // TEAM_H
