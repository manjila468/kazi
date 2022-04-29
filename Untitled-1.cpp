// 1.WAP to define a class mountain with datamembers name, location and height. use constructor to initalize details of mountain.
// and display the mountain with maximum height among two mountains.
#include <iostream>
#include <string>
class Mountain
{
private:
    char name[50];
    char location[50];
    float height;

public:
    void display();
   
    Mountain(name1[20], location1[20], height1)
    {
        strcpy(name1, name);
        strcpy(location1, location);
        height1 = height;
    }
    friend void cmp(char, char, int)

} int main()
{
    Mountain m1("Ganesh Himal", "Sindupalchowk", "8080");
    Mountain m2("mount Everest", "Solubhumbu", "8848");
    m1.cmp(m1,m2);



    //m1.display();
    //m2.display();
    return 0;
}
void Mountain::cmp(Mountain m1, Mountain m2)
{
    
}