#include "team.h"

Team:: Team():
    name(""), stadium(""), capacity(0), state(""), city(""), conference(""), division(""), surfaceType(""), roofType(""), dateOpened(0)
{}

Team::Team(string name, string stadium, int capacity, string state, string city, string conference, string surfaceType, string division, string roofType, int dateOpened): name(name), stadium(stadium), capacity(capacity), state(state), city(city), conference(conference), division(division), surfaceType(surfaceType), roofType(roofType), dateOpened(dateOpened)
{}
