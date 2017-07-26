
void foo(int y)
{
    std::cout << "y = " << y << '\n';
 
    y = 6;
 
    std::cout << "y = " << y << '\n';
} // y is destroyed here
 
int main()
{
    int x = 5;
    std::cout << "x = " << x << '\n';
 
    foo(x);
 
    std::cout << "x = " << x << '\n';
    return 0;
}
