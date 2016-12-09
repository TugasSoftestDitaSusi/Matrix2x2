#include <iostream> 
#include <conio.h>
using namespace std;
int matrik1[2][2]; 
int matrik2[2][2]; 
int matrik3[2][2]; 
int temp;
main ()
{ 
//input matrik pertama 
for (int x = 0;x<2;x++){          
for (int y =0;y<2;y++){ 
cout <<"masukan nilai matrik pertama baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : "; 
cin>>matrik1[x][y]; 
} 
} 
cout<<endl;
//output matrik pertama 
cout<<"Matrik Pertama :"<<endl; 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
cout <<matrik1[x][y]<<"   "; 
} 
cout<<endl; 
} 
cout<<endl;
//input matrik kedua 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
cout <<"masukan nilai matrik kedua baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : "; 
cin>>matrik2[x][y]; 
} 
} 
cout<<endl;
//output matrik kedua 
cout<<"Matrik Kedua :"<<endl; 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
cout <<matrik2[x][y]<<"   "; 
} 
cout<<endl; 
}
//rumus perkalian matrik 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
matrik3[x][y]=0; 
for (int z =0;z<2;z++){ 
temp=matrik1[x][z]*matrik2[z][y]; 
matrik3[x][y]=matrik3[x][y]+temp; 
} 
} 
}
//output matrik hasil perkalian 
cout<<endl; 
cout<<"Matrik hasil perkalian :"<<endl; 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
cout <<matrik3[x][y]<<"   "; 
} 
cout<<endl; 
} 
getch(); 
}
