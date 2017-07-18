#include <iostream>
int main()
{
  enum class Color
  {
    RED,
    BLUE
  };
  
  enum class Fruit
  {
    BANANA,
    APPLE
  };
  
  Color color = Color::RED;
  Fruit fruit = Fruit::BANANA;
  
   if (color == fruit) // compile error here, as the compiler doesn't know how to compare different types Color and Fruit: 
        std::cout << "color and fruit are equal\n";
    else
        std::cout << "color and fruit are not equal\n";
 
    return 0;

}

int main2()
{
    enum class Color
    {
        RED,
        BLUE
    };
 
    Color color = Color::RED;
 
    if (color == Color::RED) // this is okay
        std::cout << "The color is red!\n";
    else if (color == Color::BLUE)
        std::cout << "The color is blue!\n";
 
    return 0;
}
