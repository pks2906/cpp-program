#include <iostream>
#include <vector>
#include <string>
using namespace std;
void printShoppingList(vector<string> s)
{
    for (auto i = s.begin(); i != s.end(); ++i) 
        cout << *i << " ";                      
}
int main()
{
    string str;
    cout << "Enter what you want to search ?\n"; 
    cin >> str;

    vector<string> s;
    s.push_back("eggs"); 
    s.push_back("milk");
    s.push_back("sugar");
    s.push_back("chocolate");
    s.push_back("flour");

    cout << "\nInitial shopping list: \n"; 
    printShoppingList(s);

    s.pop_back(); 
    cout << "\n\nAfter removing last item from shopping list: \n";
    printShoppingList(s);

    s.push_back("coffee"); 
    cout << "\n\nAfter appending coffee item in shopping list: \n";
    printShoppingList(s);

    int flag = 0;
    cout << "\n\nFinding " << str << " item in shopping list: \n";
    for (auto i = s.begin(); i != s.end(); ++i)
    { 
        if (*i == str)
        {
            flag = 1; 
            cout << "present";
        }
    }
    if (flag == 0) 
        cout << "Not present";

    cout << "\n\nFind milk item and remove it from shopping list: \n";
    for (auto i = s.begin(); i != s.end(); ++i)
    {                     
        if (*i == "milk") 
            s.erase(i);   
    }
    printShoppingList(s);

    return 0;
}