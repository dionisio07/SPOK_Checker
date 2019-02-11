#include "pda.h"

char s1[10] = "saya";
char s2[10] = "kamu";
char s3[10] = "dia";
char s4[10] = "kami";
char s5[10] = "mereka";
char p1[10] = "mengunci";
char p2[10] = "menutup";
char p3[10] = "menjual";
char p4[10] = "membeli";
char p5[10] = "menangis";
char o1[10] = "mobil";
char o2[10] = "motor";
char o3[10] = "rumah";
char o4[10] = "kaca";
char o5[10] = "daging";
char k1[10] = "dipasar";
char k2[10] = "dirumah";
char k3[10] = "digarasi";
char k4[20] = "kemarin";
char k5[20] = "dikamar";

int cekPanjang(char X[50]){
    int i = 0;
    while(X[i] != '\0'){
        i++;
    }
    return i-1;
}
void start(Stack &S){
    createStack(S);
    push(S,'#');
};
bool isSubject(char X[50]){
    int i = 0;
    bool cek1,cek2,cek3,cek4,cek5;
    cek1 = true;
    cek2= true;
    cek3 = true;
    cek4 = true;
    cek5 = true;
    if(cekPanjang(X)== cekPanjang(s1)){
        while (i<= cekPanjang(X) && i<=cekPanjang(s1)){
            if(X[i]==s1[i]){
                cek1 = cek1&& true;
            }
            else{
                cek1 = cek1&& false;
            }
            i++;
            }
    }
    else{
        cek1 = false;
    }
    if(cekPanjang(X)== cekPanjang(s1)){
        i = 0;
        while (i<= cekPanjang(X) && i<=cekPanjang(s2)){
            if(X[i]==s2[i]){
                cek2 = cek2&& true;
            }
            else{
                cek2 = cek2&& false;
            }
            i++;
        }
    }
    else{
        cek2 = false;
    }
    if(cekPanjang(X)== cekPanjang(s3)){
        i = 0;
        while (i<= cekPanjang(X) && i<=cekPanjang(s3)){
            if(X[i]==s3[i]){
                cek3 = cek3&& true;

            }
            else{
                cek3 = cek3&& false;
            }
            i++;
        }
    }
    else{
        cek3 = false;
    }
    if(cekPanjang(X)== cekPanjang(s4)){
        i = 0;
        while (i<= cekPanjang(X) && i<=cekPanjang(s4)){
            if(X[i]==s4[i]){
                cek4 = cek4&& true;
            }
            else{
                cek4 = cek4&& false;
            }
            i++;
        }
    }
    else{
        cek4 = false;
    }
    if(cekPanjang(X)== cekPanjang(s5)){
        i = 0;
        while (i<= cekPanjang(X) && i<=cekPanjang(s5)){
            if(X[i]==s5[i]){
                cek5 = cek5&& true;
            }
            else{
                cek5 = cek5&& false;
            }
            i++;
        }
    }
    else{
        cek5 = false;
    }

    if(cek1||cek2||cek3||cek4||cek5){
        return true;
    }
    else{
        return false;
    }
}

bool isPredikat(char X[50]){
    int i = 0;
    bool cek1,cek2,cek3,cek4,cek5;
    cek1 = true;
    cek2= true;
    cek3 = true;
    cek4 = true;
    cek5 = true;
    if(cekPanjang(X)== cekPanjang(p1)){
        while (i<= cekPanjang(X) && i<=cekPanjang(p1)){
            if(X[i]==p1[i]){
                cek1 = cek1&& true;
            }
            else{
                cek1 = cek1&& false;
            }
            i++;
        }
    }
    else{
        cek1 = false;
    }
    if(cekPanjang(X)== cekPanjang(p2)){
        i = 0;
        while (i<= cekPanjang(X) && i<=cekPanjang(p2)){
            if(X[i]==p2[i]){
                cek2 = cek2&& true;
            }
            else{
                cek2 = cek2&& false;
            }
            i++;
        }
    }
    else{
        cek2 = false;
    }
    if(cekPanjang(X)== cekPanjang(p3)){
        i = 0;
        while (i<= cekPanjang(X) && i<=cekPanjang(p3)){
            if(X[i]==p3[i]){
                cek3 = cek3&& true;

            }
            else{
                cek3 = cek3&& false;
            }
            i++;
        }
    }
    else{
        cek3 = false;
    }
    if(cekPanjang(X)== cekPanjang(p4)){
        i = 0;
        while (i<= cekPanjang(X) && i<=cekPanjang(p4)){
            if(X[i]==p4[i]){
                cek4 = cek4&& true;
            }
            else{
                cek4 = cek4&& false;
            }
            i++;
        }
    }
    else{
        cek4 = false;
    }
    if(cekPanjang(X)== cekPanjang(p5)){
        i = 0;
        while (i<= cekPanjang(X) && i<=cekPanjang(p5)){
            if(X[i]==p5[i]){
                cek5 = cek5&& true;
            }
            else{
                cek5 = cek5&& false;
            }
            i++;
        }
    }
    else{
        cek5 = false;
    }
    if(cek1||cek2||cek3||cek4||cek5){
        return true;
    }
    else{
        return false;
    }
}
bool isObject(char X[50]){
     int i = 0;
    bool cek1,cek2,cek3,cek4,cek5;
    cek1 = true;
    cek2= true;
    cek3 = true;
    cek4 = true;
    cek5 = true;
    if(cekPanjang(X)== cekPanjang(o1)){
        while (i<= cekPanjang(X) && i<=cekPanjang(o1)){
            if(X[i]==o1[i]){
                cek1 = cek1&& true;
            }
            else{
                cek1 = cek1&& false;
            }
            i++;
        }
        i = 0;
    }
    else{
        cek1 = false;
    }
    if(cekPanjang(X)== cekPanjang(o2)){
        while (i<= cekPanjang(X) && i<=cekPanjang(o2)){
            if(X[i]==o2[i]){
                cek2 = cek2&& true;
            }
            else{
                cek2 = cek2&& false;
            }
            i++;
        }
    }
    else{
        cek2 = false;
    }
    if(cekPanjang(X)== cekPanjang(o3)){
        i = 0;
         while (i<= cekPanjang(X) && i<=cekPanjang(o3)){

            if(X[i]==o3[i]){
                cek3 = cek3&& true;

            }
            else{
                cek3 = cek3&& false;
            }
            i++;
        }
    }
    else{
        cek3 = false;
    }
    if(cekPanjang(X)== cekPanjang(o4)){
        i = 0;
         while (i<= cekPanjang(X) && i<=cekPanjang(o4)){
            if(X[i]==o4[i]){
                cek4 = cek4&& true;
            }
            else{
                cek4 = cek4&& false;
            }
            i++;
        }
    }
    else{
        cek4 = false;
    }
    if(cekPanjang(X)== cekPanjang(o5)){
         i = 0;
         while (i<= cekPanjang(X) && i<=cekPanjang(o5)){
            if(X[i]==o5[i]){
                cek5 = cek5&& true;
            }
            else{
                cek5 = cek5&& false;
            }
            i++;
        }
    }
    else{
        cek5 = false;
    }
    if(cek1||cek2||cek3||cek4||cek5){
        return true;
    }
    else{
        return false;
    }
}
bool isKeterangan(char X[50]){
     int i = 0;
    bool cek1,cek2,cek3,cek4,cek5;
    cek1 = true;
    cek2= true;
    cek3 = true;
    cek4 = true;
    cek5 = true;
    if(cekPanjang(X)== cekPanjang(k1)){
        while (i<= cekPanjang(X) && i<=cekPanjang(k1)){
            if(X[i]==k1[i]){
                cek1 = cek1&& true;
            }
            else{
                cek1 = cek1&& false;
            }
            i++;
        }
    }
    else{
        cek1 = false;
    }
    if(cekPanjang(X)== cekPanjang(k2)){
        i = 0;
        while (i<= cekPanjang(X) && i<=cekPanjang(k2)){
            if(X[i]==k2[i]){
                cek2 = cek2&& true;
            }
            else{
                cek2 = cek2&& false;
            }
            i++;
        }
    }
    else{
        cek2 = false;
    }
    if(cekPanjang(X)== cekPanjang(k3)){
         i = 0;
         while (i<= cekPanjang(X) && i<=cekPanjang(k3)){

            if(X[i]==k3[i]){
                cek3 = cek3&& true;

            }
            else{
                cek3 = cek3&& false;
            }
            i++;
        }
    }
    else{
        cek3 = false;
    }
    if(cekPanjang(X)== cekPanjang(k4)){
         i = 0;
         while (i<= cekPanjang(X) && i<=cekPanjang(k4)){
            if(X[i]==k4[i]){
                cek4 = cek4&& true;
            }
            else{
                cek4 = cek4&& false;
            }
            i++;
        }
    }
    else{
        cek4 = false;
    }
    if(cekPanjang(X)== cekPanjang(k5)){
         i = 0;
         while (i<= cekPanjang(X) && i<=cekPanjang(k5)){
            if(X[i]==k5[i]){
                cek5 = cek5&& true;
            }
            else{
                cek5 = cek5&& false;
            }
            i++;
        }
    }
    else{
        cek5 = false;
    }
    if(cek1||cek2||cek3||cek4||cek5){
        return true;
    }
    else{
        return false;
    }
}

