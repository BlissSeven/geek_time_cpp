#include <iostream>
#include <type_traits>

#if __cpp_concepts < 201811

#include <experimental/ranges/concepts>
#include <experimental/ranges/range>
using std::experimental::ranges::integral;

#define CONCEPT concept bool

#else

#include <concepts>

#define CONCEPT concept

#endif

using namespace std;

template <integral N>
N half(N n)
{
    return n / 2;
}

int main()
{
    cout << half(20) << endl;
    // Uncomment the following line to see errors
    // cout << half(nullptr) << endl;
}
