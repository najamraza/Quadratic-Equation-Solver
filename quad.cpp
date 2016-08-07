#include <iostream>
#include <cmath>
#include <conio.h>
int main()
{
    float b,c;
    char x=253;
    float discri,discrim,root,idiscrim;
    double iroot,a;
    using namespace std;
    cout <<" Enter Co-efficient OF x"<<x<<":";
    cin>>a;
    cout<<"\nEnter Co-Efficient of x :";
    cin>>b;
    cout<<"\nEnter constant :";
    cin>>c;
    discri=abs((pow(b,2)-(4*a*c)));  //*takes mod of discriminant.
    cout<<" \nDiscriminant = "<<discri<<endl;
    discrim=(pow(b,2)-(4*a*c));
    idiscrim=(4*a*c)-pow(b,2);
    iroot=sqrt(idiscrim);
    root=sqrt(discrim);
    if(pow(b,2)>(4*a*c)){
        cout<<"\nX1 :"<<(-b+root)/(2*a);
        cout<<"\nX2 :"<<(-b-root)/(2*a);
    }

    if(pow(b,2)<(4*a*c))
{       cout<<"\nx1 ="<<-0.5*(b/a)<<"+"<<iroot/(2*a)<<"i";
        cout<<"\nX2="<<-(b/(2*a))<<"-"<<0.5*(iroot/a)<<"i"<<endl;
}
       getch();
    return 0;
}
