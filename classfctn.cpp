#include<iostream>
using namespace std;
class cube{
    private:
    double ht;
    double wdt;
    double ln;
    public:
    double inp(){
        cout<<"enter height:"<<endl;
        cin>>ht;
        cout<<"enter width:"<<endl;
        cin>>wdt;
        cout<<"enter length:"<<endl;
        cin>>ln;
    }
    double volume(){
        double vol=ht*wdt*ln;
        cout<<"the volume is"<<vol<<endl;
        return vol;
    }
    
};
int main()
{
    cube cb1;
    double volchk;
    cb1.inp();
    cb1.volume();
    volchk=cb1.volume();
    if(volchk>50){
        cout<<"the volume is greater than 50, classified as big"<<endl;
    }
    else{
        cout<<"the volume is smaller than 50, classified as small"<<endl;
    }
}
