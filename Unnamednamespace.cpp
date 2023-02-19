#include <iostream>
//using namespace std;

namespace Marvellous
{
   class Demo
   {
    public:
          int i,j;
          void fun()
		  { 
		     std::cout <<"Inside funm of Demo from Marvellous\n";
		  }			  
    };
    
}
namespace 
{
 class Demo
     {
	  public:
	       int a,b;
      	 
          void fun()
		  { 
		    std:: cout <<"Inside funm of Demo from Infosystems\n";
		  }	
      };
}

int main()
{
    Demo obj;
 
    obj.fun();
	
	return 0;
}
