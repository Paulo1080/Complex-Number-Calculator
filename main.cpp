#include <iostream>
#include <cmath>
#define PI 3.14159265

using namespace std;

struct valores{
    float x1,x2,x3,x4;
};

valores inserir_valores();
valores inserir_2valores ();
void calc_potencia();
float calc_mod(valores z);
float calc_arg(valores z);
valores calc_conj(valores z);
void escolher_saida(valores z);
valores produto_k(valores z);
valores soma_comp(valores z);
valores sub_comp(valores z);
valores prod_comp(valores z);
valores div_comp(valores z);
valores rad_comp(valores z);
valores log_comp(valores z);
valores exp_comp(valores z);
valores pot_comp(valores z);
valores seno_comp(valores z);
valores cos_comp(valores z);
valores tg_comp(valores z);

int main()
{
    int o;
    while (o != 17)
    {
    cout<<"\n\n********************************";
    cout<<"\nCALCULADORA DE NUMEROS COMPLEXOS";
    cout<<"\n\n1.Potencias de i";
    cout<<"\n2.Modulo de um complexo";
    cout<<"\n3.Argumento principal de um compleo";
    cout<<"\n4.Conjugado de um complexo";
    cout<<"\n5.Produto de um complexo por constante";
    cout<<"\n6.Soma de dois complexos";
    cout<<"\n7.Subtracao de dois complexos";
    cout<<"\n8.Produto entre dois complexos";
    cout<<"\n9.Divisao entre dois complexos";
    cout<<"\n10.Radiciacao de dois complexos";
    cout<<"\n11.Logaritimo de um complexo";
    cout<<"\n12.Exponencial natural de um complexo";
    cout<<"\n13.Potencia de um complexo";
    cout<<"\n14.Seno de um complexo";
    cout<<"\n15.Cosseno de um complexo";
    cout<<"\n16.tangente de um complexo";
    cout<<"\n17.sair";

    cout<<"\nEscolha uma opcao: ";
    cin>>o;

    if(o==1){
        calc_potencia();

    }else if(o==2){
        valores z;
        z=inserir_valores();
        cout<<"\nModulo = "<<calc_mod(z);



    }else if(o==3){
        valores z;
        z=inserir_valores();
        cout<<"O valor do argumento eh: "<<calc_arg(z)<<" graus";

    }else if(o==4){
        valores z,i;
        z=inserir_valores();
        i=calc_conj(z);
        escolher_saida(i);
    }else if(o==5){
        valores z,i;
        z=inserir_valores();
        i=produto_k(z);
        escolher_saida(i);
    }else if(o==6){
        valores z,i;
        z=inserir_2valores();
        i=soma_comp(z);
        escolher_saida(i);
    }else if(o==7){
        valores z,i;
        z=inserir_2valores();
        i=sub_comp(z);
        escolher_saida(i);
    }else if (o==8){
        valores z,i;
        z=inserir_2valores();
        i=prod_comp(z);
    }else if (o==9){
        valores z,i;
        z=inserir_2valores();
        i=div_comp(z);
    }else if (o==10){
        valores z,i;
        z=inserir_valores();
        i=rad_comp(z);

    }else if(o==11){
        valores z,i;
        z=inserir_valores();
        i=log_comp(z);

    }else if(o==12){
        valores z,i;
        z=inserir_valores();
        i=exp_comp(z);
    }else if(o==13){
        valores z,i;
        z=inserir_2valores();
        i=pot_comp(z);
    }else if(o==14){
        valores z,i;
        z=inserir_valores();
        i=seno_comp(z);
    }else if (o==15){

        valores z,i;
        z=inserir_valores();
        i=cos_comp(z);
    }else if (o==16){
        valores z,i;
        z=inserir_valores();
        i=tg_comp(z);
    }

    }
    return 0;
}
    valores inserir_2valores(){
        valores v;
        float x,y,z,k;
        cout<<"\nInforme o valor real do primeiro complexo: ";
        cin>>x;
        cout<<"Informe o valor imaginario do primeiro complexo: ";
        cin>>y;
        cout<<"\nInforme o valor real do segundo complexo: ";
        cin>>z;
        cout<<"Informe o valor imaginario do segundo complexo: ";
        cin>>k;
        v.x1=x;
        v.x2=y;
        v.x3=z;
        v.x4=k;
        return v;




    }
    valores inserir_valores(){
        valores v;
        float x,y;
        cout<<"\nInforme o valor real: ";
        cin>>x;
        cout<<"Informe o valor imaginario: ";
        cin>>y;
        v.x1=x;
        v.x2=y;
        return v;
}


    void calc_potencia(){

    int n,r=0;
    cout<<"\nInforme o valor da potencia: ";
    cin>>n;
    r=n%4;
    if(r==0){
        cout<<"valor de i elevado ah "<<n<<": 1";
    }
    else if(r==1){
        cout<<"valor de i elevado ah "<<n<<": i\n";
    }else if(r==2){
        cout<<"valor de i elevado ah "<<n<<": -1\n";
    }else if(r==3){
        cout<<"valor de i elevado ah "<<n<<": -i\n";
    }else{
        cout<<"valor de i elevado ah "<<n<<": 1\n";
    }
}
    float calc_mod(valores z){

        float r;
        r=sqrt(pow(z.x1,2)+pow(z.x2,2));
        return r;
}
        float calc_arg(valores z)
        {
            float r=0;
            r=atan(z.x2/z.x1);
            r=(180*r)/PI;

        if(z.x1<0&&z.x2>0){
            r=180+r;
        }
        else if(z.x1<0&&z.x2<0){
            r=(-180)+r;
        }
        if(r<0){
            r=360+r;
        }

        return r;

        }

        valores calc_conj(valores z){
            z.x1=z.x1;
            z.x2=z.x2*(-1);
            return z;


        }
        void escolher_saida(valores i){
        int e;
        cout<<"Esolha 1-Retangular  ou  2-Trigonometrica:";
        cin>>e;

        if(e==1){
            cout<<"\nz="<<i.x1<<"+("<<i.x2<<")i";
        }
        else{
            cout<<"\nz="<<calc_mod(i)<<" . cis("<<calc_arg(i)<<")";

        }
}
        valores produto_k(valores z){
            float k;
            cout<<"Digite o valor da constante: ";
            cin>>k;
            z.x1=z.x1*k;
            z.x2=z.x2*k;
            return z;


        }
        valores soma_comp(valores z){
        z.x1=z.x1+z.x3;
        z.x2=z.x2+z.x4;
        return z;
        }

        valores sub_comp(valores z){
        z.x1=z.x1-z.x3;
        z.x2=(z.x2)-(z.x4);
        return z;

        }

        valores prod_comp(valores z){
        float a,b,i,j,r=0,r2=0;
        int e;
        a=sqrt(pow(z.x1,2)+pow(z.x2,2));
        b=sqrt(pow(z.x3,2)+pow(z.x4,2));
        r=atan(z.x2/z.x1);
        r=(180*r)/PI;

        if(z.x1<0&&z.x2>0){
            r=180+r;
        }
        else if(z.x1<0&&z.x2<0){
            r=(-180)+r;
        }
        if(r<0){
            r=360+r;
        }
        r2=atan(z.x4/z.x3);
        r2=(180*r2)/PI;

        if(z.x3<0&&z.x4>0){
            r2=180+r2;
        }
        else if(z.x3<0&&z.x4<0){
            r2=(-180)+r2;
        }
        if(r2<0){
            r2=360+r2;
        }

        i=a*b;
        j=r+r2;

        cout<<"Esolha 1-Retangular  ou  2-Trigonometrica:";
        cin>>e;

        if(e==1){
            cout<<"\nz="<<i*cos((j/180)*PI)<<"+("<<i*sin((j/180)*PI)<<")i";
        }
        else{
            cout<<"\nz="<<i<<" . cis("<<j<<")";

        }
        }

        valores div_comp(valores z){

        int e;
        float a,b,i,j,r=0,r2=0;

        a=sqrt(pow(z.x1,2)+pow(z.x2,2));
        b=sqrt(pow(z.x3,2)+pow(z.x4,2));
        r=atan(z.x2/z.x1);
        r=(180*r)/PI;

        if(z.x1<0&&z.x2>0){
            r=180+r;
        }
        else if(z.x1<0&&z.x2<0){
            r=(-180)+r;
        }
        if(r<0){
            r=360+r;
        }
        r2=atan(z.x4/z.x3);
        r2=(180*r2)/PI;

        if(z.x3<0&&z.x4>0){
            r2=180+r2;
        }
        else if(z.x3<0&&z.x4<0){
            r2=(-180)+r2;
        }
        if(r2<0){
            r2=360+r2;
        }

        i=a/b;
        j=r-r2;

        cout<<"Esolha 1-Retangular  ou  2-Trigonometrica:";
        cin>>e;

        if(e==1){
            cout<<"\nz="<<i*cos((j/180)*PI)<<"+("<<i*sin((j/180)*PI)<<")i";
        }
        else{
            cout<<"\nz="<<i<<" . cis("<<j<<")";

        }
        }
        valores rad_comp(valores z){

            int e;
            float a,b,c,d,x,y;
            cout<<"\nInsira o indice n";
            cin>>d;

            a=log(calc_mod(z));
            b=calc_arg(z);
            c=(b*PI)/180;

            x=exp(((1/d)*a)+((1/d)*c*(-1)));
            y=((1/(d)*c)+((1/d)*a));


            cout<<"Esolha 1-Retangular  ou  2-Trigonometrica:";
            cin>>e;

            if(e==1){
                cout<<x*cos(y)<<"+("<<x*sin(y)<<")i";

            }else{
                cout<<" z^w= "<<"e^"<<((z.x3*a)+(z.x4*c*(-1)))<<" . cis ("<<((z.x3*c)+(z.x4*a))<<")";
            }
        }

        valores log_comp(valores z){
            int e;
            float a,b;
            a=calc_mod(z);
            b=calc_arg(z);

            cout<<"Esolha 1-Retangular  ou  2-Trigonometrica:";
            cin>>e;

            if(e==1){
                cout<<"Log z= "<<log(a)<<" + ("<<(b*PI)/180<<")i";
            }else{
                cout<<"Log z= "<<log(a)<<" . cis ("<<(b*PI)/180<<")";

        }
        }

        valores exp_comp(valores z){

            int e;
            float a,b,c,d;
            a=exp(z.x1)*cos(z.x2);
            b=exp(z.x1)*sin(z.x2);
            c=calc_mod(z);
            d=calc_arg(z);

            cout<<"Esolha 1-Retangular  ou  2-Trigonometrica:";
            cin>>e;

            if(e==1){
                cout<<" e^z= "<<a<<" + ("<<b<<")";
            }else{
                cout<<" z= "<<c<<" . cis ("<<(d*PI)/180<<")";

        }
        }

        valores pot_comp(valores z){

            int e;
            float a,b,c,x,y;

            a=log(calc_mod(z));
            b=calc_arg(z);
            c=(b*PI)/180;

            x=exp((z.x3*a)+(z.x4*c*(-1)));
            y=((z.x3*c)+(z.x4*a));

            cout<<"Esolha 1-Retangular  ou  2-Trigonometrica:";
            cin>>e;

            if(e==1){
                cout<<x*cos(y)<<"+("<<x*sin(y)<<")i";

            }else{
                cout<<" z^w= "<<"e^"<<((z.x3*a)+(z.x4*c*(-1)))<<" . cis ("<<((z.x3*c)+(z.x4*a))<<")";
            }
        }

            valores seno_comp(valores z){

            int e;
            float x,y;

            y=(cos(z.x1)*(exp((-1)*z.x2)-exp(z.x2)))/(-2);
            x=(sin(z.x1)*(exp((-1)*z.x2)+exp(z.x2)))/2;

            cout<<"Esolha 1-Retangular  ou  2-Trigonometrica:";
            cin>>e;

            if(e==1){
                cout<<"sen(z)= "<<x<<"+("<<y<<")i";

            }else{
                cout<<"sen(z)= "<<calc_mod(z)<<" . cis("<<(calc_arg(z)*PI)/180<<")";
            }
        }




            valores cos_comp(valores z){

            int e;
            float x,y;

            x=(cos(z.x1)*(exp((-1)*z.x2)+exp(z.x2)))/2;
            y=(sin(z.x1)*(exp((-1)*z.x2)-exp(z.x2)))/2;

            cout<<"Esolha 1-Retangular  ou  2-Trigonometrica:";
            cin>>e;

            if(e==1){
                cout<<"sen(z)= "<<x<<"+("<<y<<")i";

            }else{
                cout<<"sen(z)= "<<calc_mod(z)<<" . cis("<<(calc_arg(z)*PI)/180<<")";
            }
        }
            valores tg_comp(valores z){

            int e;
            float w,x,y,k;

            y=(cos(z.x1)*(exp((-1)*z.x2)-exp(z.x2)))/(-2);
            x=(sin(z.x1)*(exp((-1)*z.x2)+exp(z.x2)))/2;
            w=(cos(z.x1)*(exp((-1)*z.x2)+exp(z.x2)))/2;
            k=(sin(z.x1)*(exp((-1)*z.x2)-exp(z.x2)))/2;

            float a,b,i,j,r=0,r2=0;

        a=sqrt(pow(x,2)+pow(y,2));
        b=sqrt(pow(w,2)+pow(k,2));
        r=atan(y/x);
        r=(180*r)/PI;

        if(x<0&&y>0){
            r=180+r;
        }
        else if(x<0&&y<0){
            r=(-180)+r;
        }
        if(r<0){
            r=360+r;
        }
        r2=atan(k/w);
        r2=(180*r2)/PI;

        if(w<0&&k>0){
            r2=180+r2;
        }
        else if(w<0&&k<0){
            r2=(-180)+r2;
        }
        if(r2<0){
            r2=360+r2;
        }

        i=a/b;
        j=r-r2;

        cout<<"Esolha 1-Retangular  ou  2-Trigonometrica:";
        cin>>e;

        if(e==1){
            cout<<"\nz="<<i*cos((j/180)*PI)<<"+("<<i*sin((j/180)*PI)<<")i";
        }
        else{
            cout<<"\nz="<<i<<" . cis("<<j<<")";

        }


            }









