//It is my code. Output is ok but in uri it shows presentation error
/*
#include<iostream>
using namespace std;
int main()
{
  int start,end,duration;
  cin>>start>>end;
  if(end==0)
  {
    end=24;
    duration=24-start+end;
    if(duration>24)
    {
      duration=duration-24;
    }
    cout<<"O JOGO DUROU "<<duration<<" HORA (S)";
  }
  else
  {
    duration=24-start+end;
    if(duration>24)
    {
      duration=duration-24;
    }
    cout<<"O JOGO DUROU "<<duration<<" HORA (S)";
  }
  return 0;
}
*/
#include<iostream>
using namespace std;

int main()
{
  int start,end;
  cin>>start>>end;
  if(start==end)
  {
    cout<<"O JOGO DUROU 24 HORA(S)\n";
  }
  else if(start>end)
  {
    cout<<"O JOGO DUROU "<<(24-start)+end<<" HORA(S)\n";
  }
  else if(start<end)
  {
    cout<<"O JOGO DUROU "<<(end-start)<<" HORA(S)\n";
  }
  return 0;
}
