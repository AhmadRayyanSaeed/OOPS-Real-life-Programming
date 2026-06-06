#include <iostream> 
using namespace std; 
class ABC 
{  private: 
    int size, a, b, c; 
 
   public:  
    
 
   ABC( ): size(50) { }  
      
   void get_values ( ) 
      {  cout<< " Put value for a,  b: ";     cin>>a>>b;   } 
   void sum ()  
      { c = a + b + size; 
        cout<< "\n  Total of a, b and size = "<< c<<endl; 
      } 
   void display( ) 
      { cout<<  "\n I like  c++ very much\n"; 
        cout<< " I am student of computer science.\n"; 
      } 
   int JJJ( ) 
      {  cout<<  "\n C++ is an intresting language:   "; 
         return(3+5); 
      } 
}; 
int main () 
 { 
  ABC M;  

  M.display(); 
  cout<<M.JJJ()<<endl<<endl; 
  M.get_values();
  M.sum(); 
  system("pause"); 
  return 0; 
} 
