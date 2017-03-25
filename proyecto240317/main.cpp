#include <iostream>

using namespace std;

/*int main()
{
    float x;
    cout<<"ingrese el valor de x:";
    cin>>x;
    float y;
    cout<<"ingrese el valor de y:";
    cin>>y;
    float z= x+y, a=x*y, b =x-y , c=x/y;


    cout <<"la suma de x="<<x<< "y Y="<<y<< "es igual a "<< z << endl;
    cout <<"el producto de x="<<x<< "y Y="<<y<< "es igual a "<< a << endl;
    cout <<"la resta de x="<<x<< "y Y="<<y<< "es igual a "<< b << endl;
    cout <<"la division entre x="<<x<< "y Y="<<y<< "es igual a "<< c << endl;

    return 0;
}
int main()
{
    float x=2,y=3,z=4;
    cout<<"el valor de x+y*z"<<x+y*z;


    return 0;


}*/

/*int main()
{
    float r,p=3.14,c,h,b;
    cout<<"ingrese el valor del radio:";
    cin>>r;
    cout<<"ingrese el valor del lado del cuadrado:";
    cin>>c;
    cout<<"ingrese la altura del triangulo :";
    cin>>h;
    cout<<"ingrese la base del triangulo:";
    cin>>b;



    cout<<"el area del circulo es:"<< r*r*p<< endl;
    cout<<"el area del ccuadrado es:"<< c*c<< endl;
    cout<<"el area del triangulo es:"<< b*h/2<< endl;
    return 0;

}*/

/*int main()
{
    int x=10, y=20,c=y;
    cout<<"x="<<c<<"y Y ="<<x;
    return 0;

}
int main()
{
    float num1;
    cout<<"ingrese un primer numero:"<<endl;
    cin>>num1;
    float num2;
    cout<<"ingrese un segundo numero:"<<endl;
    cin>>num2;
    if(num1<num2)

        cout<<"el mayor numero es:"<<num2<<endl;
    else{
        cout<<"el mayor numero es:"<<num1;

    }
    return 0;


}
int main()
{
    int x=10, y=20;

    cout<<"el valor de x="<<y-x+x<< "y el valor de y ="<<x-y+y;
    return 0;



    return 0;
}*/
int main()
{
    float nm1;
    cout<<"ingrese un primer numero:"<<endl;
    cin>>nm1;
    float nm2;
    cout<<"ingrese un segundo numero:"<<endl;
    cin>>nm2;
    float nm3;
    cout<<"ingrese un tercer numero:"<<endl;
    cin>> nm3;

    if(nm1>nm2)
        if(nm1>nm3)
            cout<<"el mayor numero es:"<<nm1;
        else{
            cout<<"el mayor numero es:"<<nm3;
        }
    if(nm2>nm3)
        cout<<"el mayor numero es:"<<nm2;
    else{
        cout<<"el mayor numero es:"<<nm3;


    }


    return 0;
}
