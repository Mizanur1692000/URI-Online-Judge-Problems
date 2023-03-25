#include<iostream>
using namespace std;
int main()
{
  double A,B,C,D,E,F,temp;
  cin>>A>>B>>C;

  if(A<B)
  {
    temp=A;
    A=B;
    B=temp;
  }
  if(A<C)
  {
    temp=A;
    A=C;
    C=temp;
  }
  if(B<C)
  {
    temp=B;
    B=C;
    C=temp;
  }
  D=A*A;
  E=B*B;
  F=C*C;
  if(A >= (B + C))
  {
    cout<<"NAO FORMA TRIANGULO"<<endl;
  }
  else{
  if(D==(E+F))
  {
    cout<<"TRIANGULO RETANGULO"<<endl;
  }
  if(D > (E + F))
  {
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
  }
  if(D < (E + F))
  {
    cout<<"TRIANGULO ACUTANGULO"<<endl;
  }
  if(A==B && B==C)
  {
    cout<<"TRIANGULO EQUILATERO"<<endl;
  }
  else if(A==B || A==C || B==C)
  {
    cout<<"TRIANGULO ISOSCELES"<<endl;
  }
  }
  return 0;
}
