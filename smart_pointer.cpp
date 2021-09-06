#include<iostream>
#include<memory>
class Entity{
public:
    Entity() {std::cout << "Create Entity\n";}
    ~Entity() {std::cout << "Destroy Entity\n";}
};


int main(){
  
    std::unique_ptr<Entity>;
    std::cout << "hi~\n";
}
