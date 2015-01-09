#include<iostream>
using namespace std;

main()
{
      int tst;
      cin>>tst;
      while(tst--)
      {
                  int no,row,seat;
                  cin>>no;
                  if(no==1) {cout<<"poor conductor\n";}
                  else
                  {
                      row=((no-2)/5)+1;
                      cout<<row<<" ";
                      if((no%10)>=2) seat=no%10;
                      else seat=(no%10)+10;
                      switch(seat)
                      {
                                  case 2:case 11: cout<<"W L\n"; break;
                                  case 3:case 10: cout<<"A L\n"; break;
                                   case 4:case 9: cout<<"A R\n"; break;
                                    case 5:case 8: cout<<"M R\n"; break;
                                     case 6:case 7: cout<<"W R\n"; break;
                                     
                                     }
                      
                      }//end of else
                      
                      }//end of while
                      }//end of all
