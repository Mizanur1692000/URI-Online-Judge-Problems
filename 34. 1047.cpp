#include<iostream>
using namespace std;
int main()
{
  int ih,im,fh,fm;
  cin>>ih>>im>>fh>>fm;
  if(ih==im && im==fh && fh==fm)
  {
    cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
  }
  else if(ih<fh && im<fm)
  {
    cout<<"O JOGO DUROU "<<fh-ih<<" HORA(S) E "<<fm-im<<" MINUTO(S)"<<endl;
  }
  else if(ih<fh && im>fm)
  {
    cout<<"O JOGO DUROU "<<(fh-ih)-1<<" HORA(S) E "<<(fm+60)-im<<" MINUTO(S)"<<endl;
  }
  else if(ih>fh && im<fm)
  {
    cout<<"O JOGO DUROU "<<(fh+24)-ih<<" HORA(S) E "<<fm-im<<" MINUTO(S)"<<endl;
  }
    else if(ih>fh && im>fm)
  {
    cout<<"O JOGO DUROU "<<(fh+24)-ih<<" HORA(S) E "<<(fm+60)-im<<" MINUTO(S)"<<endl;
  }
  return 0;
}
