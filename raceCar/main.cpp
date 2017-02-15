/**************************************
 main.cpp
 Homework 3: Program asks whether to calculate fuel or time for each lap of 6 different tracks.
 Clara Kim
 Due: October 15, 2014
 Version Number: 1
 Compiler: Visual Studios 2010
 ****************************************/

#include <iostream>
using namespace std;

#include "raceClass.h"


void raceClass::calculateFuel()
{
    
    raceClass racingTrack;
    
    racingTrack.tracks[0].name = "Silverstone";
    racingTrack.tracks[0].circuitLength = 5.891; //km
    racingTrack.tracks[0].raceLength = 306.227; //km
    racingTrack.tracks[0].laps = 52;
    racingTrack.tracks[0].timeLap = 90.874; //in seconds
    
    racingTrack.tracks[1].name = "SPA-Francorchamps";
    racingTrack.tracks[1].circuitLength = 7.004;
    racingTrack.tracks[1].raceLength = 308.052;
    racingTrack.tracks[1].laps = 44;
    racingTrack.tracks[1].timeLap = 105.108;
    
    racingTrack.tracks[2].name = "Monte Carlo";
    racingTrack.tracks[2].circuitLength = 3.340;
    racingTrack.tracks[2].raceLength = 260.520;
    racingTrack.tracks[2].laps = 78;
    racingTrack.tracks[2].timeLap = 74.439;
    
    racingTrack.tracks[3].name = "Fuji";
    racingTrack.tracks[3].circuitLength = 5.807;
    racingTrack.tracks[3].raceLength = 307.573;
    racingTrack.tracks[3].laps = 53;
    racingTrack.tracks[3].timeLap = 93.540;
    
    racingTrack.tracks[4].name = "Monza";
    racingTrack.tracks[4].circuitLength = 5.793;
    racingTrack.tracks[4].raceLength = 306.720;
    racingTrack.tracks[4].laps = 53;
    racingTrack.tracks[4].timeLap = 71.046;
    
    racingTrack.tracks[5].name = "Singapore";
    racingTrack.tracks[5].circuitLength = 4.98897;
    racingTrack.tracks[5].raceLength = 304.327;
    racingTrack.tracks[5].laps = 61;
    racingTrack.tracks[5].timeLap = 113.00;
    
    
    cout<<"\nWhich race track: "<<endl;
    cout<<"(a) Silverstone \n";
    cout<<"(b) SPA-Francorchamps \n";
    cout<<"(c) Monte Carlo \n";
    cout<<"(d) Fuji \n";
    cout<<"(e) Monza \n";
    cout<<"(f) Singapore \n"<<endl;
    cin>>track;
    
    switch (track)
    {
        case 'a':
        case 'A':
            fuel = (racingTrack.tracks[0].raceLength / 100);
            
            totalFuel = ((fuel * 50) + 1);
            
            cout<<"\nTrack: "<<racingTrack.tracks[0].name<<endl;
            cout<<"Fuel Required: "<<totalFuel<<" liters"<<endl;
            
            break;
        case 'b':
        case 'B':
            fuel = racingTrack.tracks[1].raceLength / 100;
            
            totalFuel = ((fuel * 50) + 1);
            
            cout<<"\nTrack: "<<racingTrack.tracks[1].name<<endl;
            cout<<"Fuel Required: "<<totalFuel<<" liters"<<endl;
            break;
        case 'c':
        case 'C':
            fuel = racingTrack.tracks[2].raceLength / 100;
            
            totalFuel = ((fuel * 50) + 1);
            
            cout<<"\nTrack: "<<racingTrack.tracks[2].name<<endl;
            cout<<"Fuel Required: "<<totalFuel<<" liters"<<endl;
            break;
        case 'd':
        case 'D':
            fuel = racingTrack.tracks[3].raceLength / 100;
            
            totalFuel = ((fuel * 50) + 1);
            
            cout<<"\nTrack: "<<racingTrack.tracks[3].name<<endl;
            cout<<"Fuel Required: "<<totalFuel<<" liters"<<endl;
            break;
        case 'e':
        case 'E':
            fuel = racingTrack.tracks[4].raceLength / 100;
            
            totalFuel = ((fuel * 50) + 1);
            
            cout<<"\nTrack: "<<racingTrack.tracks[4].name<<endl;
            cout<<"Fuel Required: "<<totalFuel<<" liters"<<endl;
            break;
        case 'f':
        case 'F':
            fuel = racingTrack.tracks[5].raceLength / 100;
            
            totalFuel = ((fuel * 50) + 1);
            
            cout<<"\nTrack: "<<racingTrack.tracks[5].name<<endl;
            cout<<"Fuel Required: "<<totalFuel<<" liters"<<endl;
            break;
        default:
            cout<<"Error: Try again"<<endl;
    }
}


void raceClass::lapTime()
{
    
    raceClass racingTrack;
    
    racingTrack.tracks[0].name = "Silverstone";
    racingTrack.tracks[0].circuitLength = 5.891; //km
    racingTrack.tracks[0].raceLength = 306.227; //km
    racingTrack.tracks[0].laps = 52;
    racingTrack.tracks[0].timeLap = 90.874; //in seconds
    
    racingTrack.tracks[1].name = "SPA-Francorchamps";
    racingTrack.tracks[1].circuitLength = 7.004;
    racingTrack.tracks[1].raceLength = 308.052;
    racingTrack.tracks[1].laps = 44;
    racingTrack.tracks[1].timeLap = 105.108;
    
    racingTrack.tracks[2].name = "Monte Carlo";
    racingTrack.tracks[2].circuitLength = 3.340;
    racingTrack.tracks[2].raceLength = 260.520;
    racingTrack.tracks[2].laps = 78;
    racingTrack.tracks[2].timeLap = 74.439;
    
    racingTrack.tracks[3].name = "Fuji";
    racingTrack.tracks[3].circuitLength = 5.807;
    racingTrack.tracks[3].raceLength = 307.573;
    racingTrack.tracks[3].laps = 53;
    racingTrack.tracks[3].timeLap = 93.540;
    
    racingTrack.tracks[4].name = "Monza";
    racingTrack.tracks[4].circuitLength = 5.793;
    racingTrack.tracks[4].raceLength = 306.720;
    racingTrack.tracks[4].laps = 53;
    racingTrack.tracks[4].timeLap = 71.046;
    
    racingTrack.tracks[5].name = "Singapore";
    racingTrack.tracks[5].circuitLength = 4.98897;
    racingTrack.tracks[5].raceLength = 304.327;
    racingTrack.tracks[5].laps = 61;
    racingTrack.tracks[5].timeLap = 113.00;
    
    cout<<"\nWhich race track: "<<endl;
    cout<<"(a) Silverstone \n";
    cout<<"(b) SPA-Francorchamps \n";
    cout<<"(c) Monte Carlo \n";
    cout<<"(d) Fuji \n";
    cout<<"(e) Monza \n";
    cout<<"(f) Singapore \n"<<endl;
    cin>>track;
    
    switch (track)
    {
        case 'a':
        case 'A':
            do
            {
                cout<<"What lap would you like to know the time for? (1-52)"<<endl;
                cin>>lap;
                    if ((lap>1) && (lap<=racingTrack.tracks[0].laps))
                    {
                        time = (lap * ((lap * 0.5) + racingTrack.tracks[0].timeLap));
                        
                        fuel = (racingTrack.tracks[0].raceLength / 100); //50 liters / 100 km
                        totalFuel = ((fuel * 50) + 1);
                        trackTime = (totalFuel / 10);   //for every 10kg reduce speed 0.4
                        timeReduced = (trackTime * 0.4); //multiply by 0.4
                        
                        finalTime = time - timeReduced; //subtract the time with the 0.4 degration (timeReduced)
                        
                        
                        cout<<"\nTrack: "<<racingTrack.tracks[0].name<<endl;
                        cout<<"Time for lap "<<lap<<": "<<finalTime<<" seconds"<<endl;
                    }
                    else if (lap==1)
                    {
                        cout<<"Time for lap "<<lap<<": "<<racingTrack.tracks[0].timeLap<<endl;
                    }
                    else
                    {
                        cout<<"\nError try again. \n"<<endl;
                    }
            }
            while ((lap<1) || (lap>52));
            
            break;
        
        case 'b':
        case 'B':
            do
            {
                cout<<"What lap would you like to know the time for? (1-44)"<<endl;
                cin>>lap;
                    if ((lap>1) && (lap<=racingTrack.tracks[1].laps))
                    {
                        time = (lap * ((lap * 0.5) + racingTrack.tracks[1].timeLap));
                        
                        fuel = (racingTrack.tracks[1].raceLength / 100);
                        totalFuel = ((fuel * 50) + 1);
                        trackTime = (totalFuel / 10);
                        timeReduced = (trackTime * 0.4);
                        
                        finalTime = time - timeReduced;
                        
                        
                        cout<<"\nTrack: "<<racingTrack.tracks[1].name<<endl;
                        cout<<"Time for lap "<<lap<<": "<<finalTime<<" seconds"<<endl;
                    }
                    else if (lap==1)
                    {
                        cout<<"Time for lap "<<lap<<": "<<racingTrack.tracks[1].timeLap<<endl;
                    }
                    else
                    {
                        cout<<"\nError try again. \n"<<endl;
                    }
            }
            while ((lap<1) || (lap>44));
            break;
        case 'c':
        case 'C':
            do
            {
                cout<<"What lap would you like to know the time for? (1-78)"<<endl;
                cin>>lap;
                    if ((lap>1) && (lap<=racingTrack.tracks[2].laps))
                    {
                        time = (lap * ((lap * 0.5) + racingTrack.tracks[2].timeLap));
                        
                        fuel = (racingTrack.tracks[2].raceLength / 100);
                        totalFuel = ((fuel * 50) + 1);
                        trackTime = (totalFuel / 10);
                        timeReduced = (trackTime * 0.4);
                        
                        finalTime = time - timeReduced;
                        
                        
                        cout<<"\nTrack: "<<racingTrack.tracks[2].name<<endl;
                        cout<<"Time for lap "<<lap<<": "<<finalTime<<" seconds"<<endl;
                    }
                    else if (lap==1)
                    {
                        cout<<"Time for lap "<<lap<<": "<<racingTrack.tracks[2].timeLap<<endl;
                    }
                    else
                    {
                        cout<<"\nError try again. \n"<<endl;
                    }
            }
            while ((lap<1) || (lap>78));
            break;
        case 'd':
        case 'D':
            do
            {
                cout<<"What lap would you like to know the time for? (1-53)"<<endl;
                cin>>lap;
                    if ((lap>1) && (lap<=racingTrack.tracks[3].laps))
                    {
                        time = (lap * ((lap * 0.5) + racingTrack.tracks[3].timeLap));
                        
                        fuel = (racingTrack.tracks[3].raceLength / 100);
                        totalFuel = ((fuel * 50) + 1);
                        trackTime = (totalFuel / 10);
                        timeReduced = (trackTime * 0.4);
                        
                        finalTime = time - timeReduced;
                        
                        
                        cout<<"\nTrack: "<<racingTrack.tracks[3].name<<endl;
                        cout<<"Time for lap "<<lap<<": "<<finalTime<<" seconds"<<endl;
                    }
                    else if (lap==1)
                    {
                        cout<<"Time for lap "<<lap<<": "<<racingTrack.tracks[3].timeLap<<endl;
                    }
                    else
                    {
                        cout<<"\nError try again. \n"<<endl;
                    }
            }
            while ((lap<1) || (lap>53));
            break;
        case 'e':
        case 'E':
            do
            {
                cout<<"What lap would you like to know the time for? (1-53)"<<endl;
                cin>>lap;
                    if ((lap>1) && (lap<=racingTrack.tracks[4].laps))
                    {
                        time = (lap * ((lap * 0.5) + racingTrack.tracks[4].timeLap));
                        
                        fuel = (racingTrack.tracks[4].raceLength / 100);
                        totalFuel = ((fuel * 50) + 1);
                        trackTime = (totalFuel / 10);
                        timeReduced = (trackTime * 0.4);
                        
                        finalTime = time - timeReduced;
                        
                        
                        cout<<"\nTrack: "<<racingTrack.tracks[4].name<<endl;
                        cout<<"Time for lap "<<lap<<": "<<finalTime<<" seconds"<<endl;
                    }
                    else if (lap==1)
                    {
                        cout<<"Time for lap "<<lap<<": "<<racingTrack.tracks[4].timeLap<<endl;
                    }
                    else
                    {
                        cout<<"\nError try again. \n"<<endl;
                    }
            }
            while ((lap<1) || (lap>53));
            break;
        case 'f':
        case 'F':
           do
            {
                cout<<"What lap would you like to know the time for? (1-61)"<<endl;
                cin>>lap;
                    if ((lap>1) && (lap<=racingTrack.tracks[5].laps))
                    {
                        time = (lap * ((lap * 0.5) + racingTrack.tracks[5].timeLap));
                        
                        fuel = (racingTrack.tracks[5].raceLength / 100);
                        totalFuel = ((fuel * 50) + 1);
                        trackTime = (totalFuel / 10);
                        timeReduced = (trackTime * 0.4);
                        
                        finalTime = time - timeReduced;
                        
                        
                        cout<<"\nTrack: "<<racingTrack.tracks[5].name<<endl;
                        cout<<"Time for lap "<<lap<<": "<<finalTime<<" seconds"<<endl;
                    }
                    else if (lap==1)
                    {
                        cout<<"Time for lap "<<lap<<": "<<racingTrack.tracks[5].timeLap<<endl;
                    }
                    else
                    {
                        cout<<"\nError try again. \n"<<endl;
                    }
            }
            while ((lap<1) || (lap>61));
            break;
        default:
            cout<<"Error: Try again"<<endl;
            break;
    }
}



int main()
{
    raceClass   racingTrack;
    char        ans;

    
    do
    {
        cout<<"\nChoose one: "<<endl;
        cout<<"(a) The fuel required for the race. "<<endl;
        cout<<"(b) Lap time for certain lap. "<<endl;
        cout<<"(c) Quit "<<endl;
        cin>>ans;
        
        switch (ans)
        {
            case 'a':
            case 'A':
                racingTrack.calculateFuel();
                break;
            case 'b':
            case 'B':
                racingTrack.lapTime();
                break;
            case 'c':
            case 'C':
                exit(0);
            default:
                cout<<"Error: Try again. "<<endl;
        }
    }
    while ((ans !='c') || (ans !='C'));
    
    
    system ("pause");
    return 0;
    
}