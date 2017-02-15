/**************************************
 raceClass.h
 Homework 3: struct raceCar inside of class raceClass
 Clara Kim
 Due: October 15, 2014
 Version Number: 1
 Compiler: Visual Studios 2010
 ****************************************/

#ifndef raceCar_raceClass_h
#define raceCar_raceClass_h

class raceClass
{
    int     lap;
    double  fuel;
    int     totalFuel;
    int     trackTime;
    double  timeReduced;
    double  time;
    double  finalTime;
    char    ans;
    char    track;

    struct raceCar
    {
        int     laps;
        string  name;
        double  gas;
        double  circuitLength;
        double  raceLength;
        double  timeLap;
        
    };
    
    raceCar tracks[6];
    
    public:
        void calculateFuel();
        void lapTime();
    
};

#endif
