#include<iostream>

class human{
   public:
      std::string name ;
      int age ;
       std::string Occupation;

    void Caneat(){
        std::cout << "I can eat";
    }

    void cansleep(){
        std::cout <<"I can sleep";
    }
};

int main(){
    human human1;

    human1.name = "Human1";
    human1.age = 33;
    human1.Occupation = "Nothing";

    std::cout << human1.name <<std::endl;
    std::cout << human1.age <<std::endl;
    std::cout << human1.Occupation <<std::endl;
    
    human1.Caneat();
    human1.cansleep();
    return 0;
}