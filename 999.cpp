#include <iostream>
int main(){
    using namespace std; setlocale(0, "");
    cout<<"Времена года:"<<endl<<"[ 1 ] Лето"<<endl<<"[ 2 ] Осень"<<endl<<"[ 3 ] Зима"<<endl<<"[ 4 ] Весна"<<endl;
        int a; cout <<"Выберете время года: "<<endl; cin>>a;
    switch(a){
        case 1:cout<<"Сейчас лето, не стоит одеваться тепло";break;
        case 2:cout<<"Сейчас осень, следует одеться тепло и взять с собой зонт";break;
        case 3:cout<<"Сейчас зима, стоит одеться тепло и взять перчатки";break;
        case 4:cout<<"Сейчас весна, можно одеться легче чем зимой";break;
        default:cout<<"Такого сезона нет!";
    }exit(0);
    
