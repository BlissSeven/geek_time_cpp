#include <experimental/ranges/algorithm>
#include <experimental/ranges/iterator>
#include <experimental/ranges/ranges>
#include <iostream>

int main()
{
    using namespace std::experimental::ranges;
    int a[] = {1, 7, 3, 6, 5, 2, 4, 8};
    copy(a, ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    auto r = reverse_view(a);
    a[0] = 9;
    copy(r, ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
}
