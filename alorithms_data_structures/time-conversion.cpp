//Algorithms - Problem 8

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string time;
    cin >> time;
    int SIZE = time.size();
    string newFormat = time.substr(0, 8); //new time format
    string mode = time.substr(SIZE - 2);//parse night day and store
    string hour = time.substr(0, 2);//store hour
    if(mode == "PM" && hour != "12"){
        int hh = stoi(hour);
        hh = (hh + 12) % 24;
        stringstream strm; //creates a stream buffer to use in the output
        strm << hh;
        newFormat[0] = strm.str()[0];
        newFormat[1] = strm.str()[1];
    } 
    else if(mode == "AM" && hour == "12"){//simple check for day/night
        newFormat[0] = newFormat[1] = '0';
    }
    cout << newFormat;
    return 0;
}