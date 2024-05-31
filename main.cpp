#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdlib>
using namespace std;

int dzialanie;

int main()


{
while (true)
{
//menu glowne

    cout <<"MENU GLOWNE"<<endl;
    cout <<"---------------"<<endl;
    cout <<"1. Kalkulator"<<endl;
    cout <<"2. Kalkulator BMI"<<endl;
    cout <<"3. Konwerter Jednostek"<<endl;
    cout <<"4. Zamiana St.C na St.F"<<endl;
    cout <<"5. Zamiana St.F na St.C"<<endl;
    cout <<"6. Wyjscie"<<endl;
    cout <<"Co chcesz zrobic.(1-6): ";
    cin>>dzialanie;
    cout <<""<<endl;
    cout <<""<<endl;

//kalkulator

int kalkulator; float liczba1, liczba2, wynik;
    if (dzialanie==1)
        {
        cout<<"Kalkulator. Co chcesz zrobic ?"<<endl;
        cout<<"------------------------------"<<endl;
        cout<<"1. Suma"<<endl;
        cout<<"2. Roznica"<<endl;
        cout<<"3. Iloczyn"<<endl;
        cout<<"4. Iloraz"<<endl;
        cout<<"Wybierz 1-4: ";
        cin>>kalkulator;
        cout <<""<<endl;
        cout <<"_______________"<<endl;
        system("cls");
        switch (kalkulator)
        {
        case 1:
            {
            cout<<"Wybrano sume"<<endl;
            cout<<"------------------"<<endl;
            cout<<"Podaj pierwsza liczbe: ";
            cin>>liczba1;
            cout<<"Podaj druga liczbe: ";
            cin>>liczba2;
            wynik=liczba1+liczba2;
            cout<<"Suma liczb wynosi: "<<wynik<<endl;
            cout <<""<<endl;
            cout <<"_______________"<<endl;
            break;
            }
        case 2:
            {
            cout<<"Wybrano roznice"<<endl;
            cout<<"------------------"<<endl;
            cout<<"Podaj pierwsza liczbe: ";
            cin>>liczba1;
            cout<<"Podaj druga liczbe: ";
            cin>>liczba2;
            wynik=liczba1-liczba2;
            cout<<"Roznica liczb wynosi: "<<wynik<<endl;
            cout <<""<<endl;
            cout <<"_______________"<<endl;
            break;
            }
        case 3:
            {
            cout<<"Wybrano iloczyn"<<endl;
            cout<<"------------------"<<endl;
            cout<<"Podaj pierwsza liczbe: ";
            cin>>liczba1;
            cout<<"Podaj druga liczbe: ";
            cin>>liczba2;
            wynik=liczba1*liczba2;
            cout<<"Iloczyn liczb wynosi: "<<wynik<<endl;
            cout <<""<<endl;
            cout <<"_______________"<<endl;
            break;
            }
        case 4:
            {
            cout<<"Wybrano iloraz"<<endl;
            cout<<"------------------"<<endl;
            cout<<"Podaj pierwsza liczbe: ";
            cin>>liczba1;
            cout<<"Podaj druga liczbe: ";
            cin>>liczba2;
            wynik=liczba1/liczba2;
            if (liczba2==0)
                {
                cout<<"NIE MOZNA DZIELIC PRZEZ ZERO!!"<<endl;
                cout <<""<<endl;
                cout <<"_______________"<<endl;
                }
            else
                {
                wynik=liczba1/liczba2;
                cout<<"Iloraz liczb liczb wynosi: "<<wynik<<endl;
                cout <<""<<endl;
                cout <<"_______________"<<endl;
                break;
                }
            }
        default:
            cout<<"Nie ma takiej opcji w menu!"<<endl;
        }
        }



 //kalkulator BMI

float waga, wzrost, BMI, wm;
    if (dzialanie==2)
        {
        cout<<"KALKULATOR BMI"<<endl;
        cout<<"---------------"<<endl;
        cout<<"Podaj Swoja Wage (kg): ";
        cin>>waga;
        cout<<"Podaj Swoj Wzrost (cm): ";
        cin>>wzrost;
        cout <<""<<endl;
        cout <<"_______________"<<endl;
        system("cls");
        wm = wzrost/100;
        BMI = waga/(wm*wm);


        cout<<"TWOJE BMI TO: "<<setprecision(4)<<BMI<<endl;

        if (BMI<= 18.5)
            {
            cout<<"Masz Niedowage!!!"<<endl;
            cout <<"_______________"<<endl;
            cout <<""<<endl;
            }
        else if (BMI<=24.9)
            {
            cout<<"TWoja Waga Jest Prawidlowa. Gratuluje!"<<endl;
            cout <<"_______________"<<endl;
            cout <<""<<endl;
            }
        else if (BMI<=29.9)
            {
            cout<<"Nadwaga!!"<<endl;
            cout <<"_______________"<<endl;
            cout <<""<<endl;
            }
        else if (BMI>29,9)
            {
            cout<<"Otylosc! Zadbaj o prawid³owa diete"<<endl;
            cout <<"_______________"<<endl;
            cout <<""<<endl;
            }
        }



 //konwerter jednostek
float num, odp; int konwerter;
    if (dzialanie==3)
    {
        cout<<"Konwerter Jednostek"<<endl;
        cout<<"---------------------"<<endl;
        cout<<"1. Centymetry na metry"<<endl;
        cout<<"2. Metry na kilometry"<<endl;
        cout<<"3. Kilometry na mile"<<endl;
        cout<<"4. Centymetry na milimetry"<<endl;
        cout<<"Wybierz 1-4: ";
        cin>>konwerter;
        cout<<""<<endl;
        cout<<""<<endl;

        switch (konwerter)
            {
            case 1:
                {
                cout<<"Centymetry na metry"<<endl;
                cout<<"---------------------"<<endl;
                cout<<"Podaj wartosc w cm: ";
                cin>>num;
                odp= num/100;
                system("cls");
                cout<<num<<" cm to: "<<odp<<" m"<<endl;
                cout<<""<<endl;
                cout<<""<<endl;
                break;
                }
            case 2:
                {
                cout<<"Metry na Kilometry"<<endl;
                cout<<"---------------------"<<endl;
                cout<<"Podaj wartosc w m: ";
                cin>>num;
                odp= num/1000;
                system("cls");
                cout<<num<<" m to: "<<odp<<" km"<<endl;
                cout<<""<<endl;
                cout<<""<<endl;
                break;
                }
            case 3:
                {
                cout<<"Kilometry na Mile"<<endl;
                cout<<"---------------------"<<endl;
                cout<<"Podaj wartosc w km: ";
                cin>>num;
                odp= num*0.62;
                system("cls");
                cout<<num<<" km to: "<<odp<<" mil"<<endl;
                cout<<""<<endl;
                cout<<""<<endl;
                break;
                }
            case 4:
                {
                cout<<"Centymetry na milimetry"<<endl;
                cout<<"---------------------"<<endl;
                cout<<"Podaj wartosc w cm: ";
                cin>>num;
                odp= num*10;
                system("cls");
                cout<<num<<" cm to: "<<odp<<" mm"<<endl;
                cout<<""<<endl;
                cout<<""<<endl;
                break;
                }
            default:
                 cout <<"Nie ma takiej opcji!"<<endl;



            }
    }


// zamiana st.C na st.F

float tempc, stf;

    if (dzialanie==4)
        {
        cout<<"Zamiana st.C na st.F"<<endl;
        cout<<"---------------------"<<endl;
        cout<<"Podaj wartosc w st.C: ";
        cin>>tempc;
        stf = ((tempc* 9/5) + 32);
        system("cls");
        cout<<tempc<<" Stopni C to "<<setprecision(4)<<stf<<" stopni F"<<endl;
        cout <<"_______________"<<endl;
        cout <<""<<endl;
        }

// zamiana st.C na st.F

float tempf, stc;

    if (dzialanie==5)
        {
        cout<<"Zamiana st.F na st.C"<<endl;
        cout<<"---------------------"<<endl;
        cout<<"Podaj wartosc w st.F: ";
        cin>>tempf;
        stc = ((tempf-32)*5)/9;
        system("cls");
        cout<<tempf<<" Stopni F to "<<setprecision(4)<<stc<<" stopni C"<<endl;
        cout <<"_______________"<<endl;
        cout <<""<<endl;
        }

    if (dzialanie==6)
        {
       break;
        }
}






    return 0;

}
