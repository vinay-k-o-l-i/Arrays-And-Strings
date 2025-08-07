//reversing a string
#include<iostream>
#include<string>
  using namespace std;
  int main()
  {
          char str[20],i,j;
    	  cout<<"Enter a string\n";
    	  gets(str);
    	  for(i=0;str[i]!='\0';i++);
    	
          for(j=i-1;j>=0;j--)
    	  {
        	 cout<<str[j];
        }
        
  }

/* output for this code 

Enter a string
vinay
yaniv

*/
