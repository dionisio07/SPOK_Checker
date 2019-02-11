#include <iostream>
#include "pda.h"
using namespace std;

int main()
{

    Stack S;
    S.top = -1;
    char kata1 [20];
    char kata2 [20] ;
    char kata3 [20] ;
    char kata4 [20] ;
    bool cek = false;
    bool status = false;

    int i = 0;
    cout<<"======================================================================="<<endl;
    cout<<"|Subject yang diterima    : saya,kamu,dia,kami,mereka                 |"<<endl;
    cout<<"|Predikat yang diterima   : mengunci,menutup,menjual,membeli,menangis |"<<endl;
    cout<<"|Object yang diterima     : mobil,motor,rumah,kaca,danging            |"<<endl;
    cout<<"|Keterangan yang diterima : dipasar,dirumah,digarasi,kemarin,dikamar  |"<<endl;
    cout<<"|jika kosong silahkan gunakan tanda -                                 |"<<endl;
    cout<<"======================================================================="<<endl;
    cout<<" masukan kata ke -1 :  ";cin>>kata1; cout<<endl;
    cout<<" masukan kata ke -2 :  ";cin>>kata2; cout<<endl;
    cout<<" masukan kata ke -3 :  ";cin>>kata3; cout<<endl;
    cout<<" masukan kata ke -4 :  ";cin>>kata4; cout<<endl;
    start(S);
    if(isSubject(kata1)&& cek == false){
        push(S,'S');
        cek = true;
        if(isPredikat(kata2)&&kata3[0]!= '-'){
            pop(S);
            push(S,'P');
            if(isObject(kata3)&&kata4[0]!='-'){
                pop(S);
                push(S,'O');
                if(isKeterangan(kata4)){
                    pop(S);
                    push(S,'K');
                    pop(S);
                    pop(S);
                    pop(S);
                    status = true;
                }
            }
            else if (isObject(kata3)&&kata4[0]=='-'){
                pop(S);
                pop(S);
                pop(S);
                status = true;
            }
            else if (isKeterangan(kata3)&&kata4[0]=='-'){
                pop(S);
                push(S,'K');
                pop(S);
                pop(S);
                pop(S);
                status = true;
            }
            else if(isKeterangan(kata3)&&kata4[0]!='-'){
                pop(S);
                pop(S);
            }
        }
        else if(isPredikat(kata2)&&kata3[0]=='-'){
            pop(S);
            pop(S);
            pop(S);
            status = true;
        }
        else{
                pop(S);
                pop(S);
            }
    }
    if((isEmpty(S))&& (status = true)){
        cout<<"Kalimat tersebut diterima"<<endl;
    }
    else{
        cout<<"kalimat tersebut tidak diterima"<<endl;
    }
    return 0;
}
