#include <iostream>
#include <string>
#include <algorithm>

int main()
{   
    using std::cin;
    using std::cout;
    
    std::string a = "AHJVKAHJVAHJFVAHFVFVFVHAVHFVHAFVAFFKIFAAKFJFAFKAYHFA";
 
    std::transform(a.begin(), a.end(), a.begin(), toupper);
 
    int b[27] = { 0 };
    bool first = false;
    int c = 0, most = 0;
 
    for (size_t i = 0; i < a.size(); i++)
    {
        b[(int)a[i] - 'A']++;
        if (c < b[(int)a[i] - 'A'])
        {
            c = b[(int)a[i] - 'A'];
            most = a[i];
        }
        if (b[(int)a[i] - 'A'] > 1 && !(first))
        {
            first = true;
            cout << "First duplicated char is " << a[i] << "\n";
        }
    }
 
    cout << "Most constant char is " << (char)most << "\n";
}
