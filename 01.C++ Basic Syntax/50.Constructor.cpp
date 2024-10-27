#include<iostream>
#include<cmath>

class human{
   public:
      std::string name ;
      int age ;
      std::string Occupation;

    human(std::string name ,int age , std::string Occupation){
        this ->name = name;
        this ->age = age;
        this ->Occupation = Occupation;
    }

    void Caneat(){
        std::cout << "I can eat";
    }

    void cansleep(){
        std::cout <<"I can sleep";
    }
};

int main(){
    human human1("Riad",16,"No");
    

    std::cout << human1.name <<std::endl;
    std::cout << human1.age <<std::endl;
    std::cout << human1.Occupation <<std::endl;
    
    human1.Caneat();
    human1.cansleep();
    return 0;
}



