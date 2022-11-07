#include "filehandler.h"
#include <QApplication>
#include <QFile>
#include <sstream>
#include <QDebug>


int readFile(Team teams[])
{
    ifstream inFile;
    string name;
    string stadium;
    string firstcapacity;
    string secondcapacity;
    string city;
    string state;
    string conference;
    string division;
    string surfaceType;
    string roofType;
    string dateOpened;
    int j = 0;
    enum DataType {
        NAME,
        STADIUM,
        FIRSTCAPACITY,
        SECONDCAPACITY,
        CITY,
        STATE,
        CONFERENCE,
        DIVISION,
        SURFACETYPE,
        ROOFTYPE,
        DATEOPENED
    };

    QFile inputFile(":/new/prefix1/nfl_information.csv");
    if (inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&inputFile);
        while(!in.atEnd())
        {
            QString line = in.readLine();
            QStringList list = line.split(",");
            DataType dt = NAME;
            for (int i = 0; i < list.size(); i++)
            {
                switch (dt)
                {
                case NAME:
                {
                    name = list.at(i).toStdString();
                    dt = STADIUM;
                    break;
                }
                case STADIUM:
                {
                    stadium = list.at(i).toStdString();
                    dt = FIRSTCAPACITY;
                    break;
                }
                case FIRSTCAPACITY:
                {
                    if (list.at(i).toStdString() == "")
                    {
                        firstcapacity = "";
                        break;
                    }
                    firstcapacity = list.at(i).toStdString().substr(1,list.at(i).toStdString().size());
                    dt = SECONDCAPACITY;
                    break;
                }
                case SECONDCAPACITY:
                {
                    if (list.at(i).toStdString() == "")
                    {
                        secondcapacity = "0";
                        break;
                    }
                    secondcapacity = list.at(i).toStdString().substr(0,list.at(i).toStdString().size()-1);
                    dt = CITY;
                    break;
                }
                case CITY:
                {
                    if (list.at(i).toStdString() == "")
                    {
                        city = "";
                        break;
                    }
                    city = list.at(i).toStdString().substr(1,list.at(i).toStdString().size());
                    dt = STATE;
                       break;
                }
                case STATE:
                {
                    if (list.at(i).toStdString() == "")
                    {
                        state = "";
                        break;
                    }
                    state = list.at(i).toStdString().substr(0,list.at(i).toStdString().size()-1);
                    dt = CONFERENCE;
                    break;
                }
                case CONFERENCE:
                {
                    conference = list.at(i).toStdString();
                    dt = DIVISION;
                    break;
                }
                case DIVISION:
                {
                    division = list.at(i).toStdString();
                    dt = SURFACETYPE;
                    break;
                }
                case SURFACETYPE:
                {
                    surfaceType = list.at(i).toStdString();
                    dt = ROOFTYPE;
                    break;
                }
                case ROOFTYPE:
                {
                    roofType = list.at(i).toStdString();
                    dt = DATEOPENED;
                    break;
                }
                case DATEOPENED:
                {
                    if (list.at(i).toStdString() == "")
                    {
                        dateOpened = "0";
                        break;
                    }
                    dateOpened = list.at(i).toStdString();
                    dt = NAME;
                    firstcapacity += secondcapacity;
                    teams[j] = Team(name, stadium, stoi(firstcapacity), city, state, conference, division, surfaceType, roofType, stoi(dateOpened));
                    qDebug() << QString::fromStdString(teams[j].name);
                    j++;
                    break;
                }
                }
            }

        }
        inputFile.close();
        return 1;
    }
    else
    {

        return 0;
    }
}
