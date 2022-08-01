#include <iostream>

using namespace std;

const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;

typedef struct time{
    int hour;
    int minutes;
    int seconds;
}Time;

Time fixTime(Time time)
{
    time.minutes += time.seconds / SECONDS_PER_MINUTE;
    time.hour += time.minutes / MINUTES_PER_HOUR;
    time.hour %= HOURS_PER_DAY;
    time.seconds %= SECONDS_PER_MINUTE;
    time.minutes %= MINUTES_PER_HOUR;
    return time;
}
Time* timeArray(int &n)
{
    Time *result;
    cout << "How many results do you want to insert?: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter hour, min, sec: ";
        cin >> result[i].hour >> result[i].minutes >> result[i].seconds;
        result[i] = fixTime(result[i]);  
    }
    return result;
}
void printArray(Time times[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout 
        << (times[i].hour < 10 ? "0" : "") << times[i].hour << ":"
        << (times[i].minutes < 10 ? "0" : "") << times[i].minutes << ":"
        << (times[i].seconds < 10 ? "0" : "") << times[i].seconds << endl;
    }
}

int main()
{
    int n = 0;
    Time *times = timeArray(n);
    printArray(times, n);
}