#include <iostream>
using namespace std;


int main(){
char button ;
cout<<"input lowercase alphabet : ";
cin>> button;

// if(button== 'a'){
//     cout<<"Hello kutiya"<<endl;
// }
// else if(button== 'b'){
//     cout<<"Hello Piddu"<<endl;
// }
// else if(button=='c'){
//     cout<<"Hello meri jaan"<<endl;
// }
// else if(button=='d'){
//     cout<<"Hello dear"<<endl;
// }
// else if(button=='e'){
//     cout<<"Hello chutiye"<<endl;
// }
// else if(button=='f'){
//     cout<<"Hello mote"<<endl;
// }
// else if(button=='g'){
//     cout<<"Hello kb aa rhi una"<<endl;
// }
// else if(button=='h'){
//     cout<<"Hello intense cool"<<endl;
// }
// else if(button=='i'){
//     cout<<"Hello sexy"<<endl;
// }
// else if(button=='j'){
//     cout<<"Hello aaj vdo call krey"<<endl;
//     cout<<"sb soo gyi kya??"<<endl;
// }
// else{
//     cout<<"I am loving you more"<<endl;
// }

switch (button)
{
case 'a':
cout<<"Hello World"<<endl;
    break;
case 'b':
cout<<"Namaste World"<<endl;
    break;
case 'c':
cout<<"Namaste Kutumb"<<endl;
    break;
case 'd':
cout<<"Pranam World"<<endl;
    break;
case 'e':
cout<<"Ola World"<<endl;
    break;

default:
cout<<"I am still learning..."<<endl;
    break;
}

return 0;   
}