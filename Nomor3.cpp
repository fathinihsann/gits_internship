#include <iostream>
using namespace std;

class Time{
public:
int hour,menit,detik;
    void printTime(){
    if (hour==24){
        hour=0;
    }
    cout<<hour<<":"<<menit<<":"<<detik<<endl;
    }

    void printTimeAMPM(){
    int jam=hour-12;
        if(jam==0){
            jam=12;
            cout<<jam<<":"<<menit<<":"<<detik<<" PM"<<endl;
        }else if(hour==0){
            jam=12;
            cout<<jam<<":"<<menit<<":"<<detik<<" AM"<<endl;
        }else if(hour<12){
            cout<<hour<<":"<<menit<<":"<<detik<<" AM"<<endl;
        }else{
            cout<<jam<<":"<<menit<<":"<<detik<< " PM"<<endl;
        }
    }

};

int main()
{
    Time t;
    t.hour=12;
    t.menit=34;
    t.detik=56;
    cout<<"Jam : ";
    t.printTimeAMPM();
    cout<<"Hasil Konversi : ";
    t.printTime();
    return 0;
}
