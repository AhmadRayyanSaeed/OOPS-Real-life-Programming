
#include <iostream> 
using namespace std; 
class JobTime 
{  
  private: 
         int  H, M,  S; 
  public:  // public data, functions prototyping 
      void  Get_Time( ); 
      void  Calc_Time(JobTime, JobTime); 
      void  Display_Time( ); 
 };// End of class definition 
  
     void  JobTime::Get_Time( ) 
        {  cout<< " Put Time as     H   M   S:     "; 
           cin>>H>>M>>S; 
        } 
 
     void  JobTime::Calc_Time(JobTime T1, JobTime T2 )   
        { if( T1.S > T2.S ) { T2.M--; T2.S+=60;} 
      S = T2.S - T1.S; 
          if( T1.M > T2.M ) { T2.H--; T2.M+=60;} 
      M = T2.M - T1.M; 
      H = T2.H - T1.H; 
        } 
 
void  JobTime::Display_Time(  )     
{ cout <<"\n\n\n   Consumed Time  =  "; 
cout<<H<<"  Hours, "<<M<<" Minutes and " <<S<<" Seconds"<<endl; 
} 
 
int main( ) 
{    // objects creation 
    JobTime  StartTime, EndTime, Consume_Time;   
     
   cout<<"\n\n Put Start Time: "<<endl; 
    StartTime.Get_Time( ); 
   cout<<"\n\n Put Finish Time: "<<endl; 
     EndTime.Get_Time( ); 
   // Objects as arguments in the following function 
    Consume_Time.Calc_Time(StartTime, EndTime ); 
    Consume_Time.Display_Time( ); 
  
    return 0; 
} 
