#include <iostream>
using namespace std;
struct n{
double total;
};n tot;
void garis(){cout<<" =====================================================";}
double nilai(string jenis){
double angka;
cout<<" Masukan Nilai "<<jenis<<"   : ";cin>>angka;
return angka;}
double hasil(float uts,float uas,float tugas,float absen){
    tot.total=(uts*20/100)+(uas*30/100)+(tugas*35/100)+(absen*15/100);
    cout<<" Total Nilai : "<<tot.total<<endl;{
    if(tot.total>=81) cout<<" BIJIMU A";
    else if(tot.total>=61) cout<<" BIJIMU B";
    else if(tot.total>=41) cout<<" BIJIMU C";
    else if(tot.total>=21) cout<<" BIJIMU D";
    else cout<<" BIJIMU E";}
return tot.total;}
main(){double uts,uas,tugas,absen;
garis();cout<<endl;
uts=nilai("UTS  ");
uas=nilai("UAS  ");
tugas=nilai("Tugas");
absen=nilai("Absen");
garis();cout<<endl;
hasil(uts,uas,tugas,absen);cout<<endl;
garis();}
