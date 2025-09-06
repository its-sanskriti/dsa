#include<iostream>
// #include "Hero.cpp"
using namespace std;

class Hero{
     public: 
    int gethealth(){
        return health;
    }
  //parameterised constructor
   Hero(int health){
    cout<<"this- "<<this<<endl;
    this-> health = health;
   }
   
 Hero(int health,char defence){
    
    this-> health = health;
    this-> defence =  defence;
   }
//    --copy constructor why pass by refernece not get it stuck n loop of just passing copies
   Hero(Hero& temp){
    cout<<"copy constructor"<<endl;
    this-> health = temp.health;
    this-> defence =  temp.defence;
   }

void print(){
    cout<<"health"<<this->health<<endl;
    cout<<"defence"<<this->defence<<endl;
}
    //constructor made 
    
    Hero(){
    cout<<"constructor called"<<endl;
          }
    char getdefence(){
        return defence;
    }
   void setdefence(char ch){
      defence = ch;
    }
   void sethealth(int n){
      health = n;
     }
    //  private:
    int health;
    char defence;
};


//private can only be accessed in specified class only 
//public can be accessed anywhere

int main(){

//copy constructor
Hero R(70,'A');
R.print();
Hero S(R);
S.print();
//-----


//same addres this store object ka current addres
// Hero ramesh(10);
// cout<<"address of ramesh"<<&ramesh<<endl;



//constructor called
// cout<<"hii"<<endl ;
// Hero a ;
// cout<<"yepp"<<endl;

// Hero *h = new Hero;


//     Hero a;//static memory allocation;

//     Hero* b = new Hero;//dynamic memory allocation
//     cout<<" health"<<a.getdefence()<<endl;
//     a.setdefence('A');
//     cout<<"level is "<<a.defence<<endl;
//     cout<<" health"<<(*b).getdefence()<<endl;
//     (*b).setdefence('c');
//     cout<<"level is "<<(*b).defence;

// cout<<" health"<<b->getdefence()<<endl;
//     b->setdefence('c');
//     cout<<"level is "<<b->defence;


    // Hero ramesh;
    // cout<<"ramesh health"<<ramesh.gethealth()<<endl;
    // ramesh.sethealth(70);
    // cout<<"ramesh health"<<a.getdefence()<<endl;
    // ramesh.setdefence('A');
    // cout<<"level is "<<ramesh.defence;
    // cout<<"ramesh is "<<ramesh.gethealth()<<endl;
    // cout<<"ramesh is "<<ramesh.getdefence()<<endl;
    // cout<<"size of "<<sizeof(ramesh);
}