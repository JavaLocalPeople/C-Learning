namespace Foo
{
	namespace Goo
	{
		const int g_x = 5;
	}
}
 
namespace Boo = Foo::Goo; // Boo now refers to Foo::Goo
 
int main()
{
	std::cout << Boo::g_x; // This is really Foo::Goo::g_x
	return 0;
}
