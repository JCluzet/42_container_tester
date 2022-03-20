#include "../main.hpp"

int main()
{
    vector<int> s1;
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(212121);
    print_vec(s1);

    // operator[]
    vector <int> s2;
    s2 = s1;
    print_vec(s2);
}