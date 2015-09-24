#include<iostream>
#include <ctime>

using namespace std;

int main()
{
    int tS = time(0);  // t = total ,c = current, s=second , m=minute , h = hour
    int cS = tS % 60;
    int tM = tS / 60;
    int cM = tM % 60;
    int tH = tM / 60;
    int cH = tH % 24;
    cout << "Current time is:" << cH << ":" << cM << ":" << cS << " GMT";
    return 0;
 } 
