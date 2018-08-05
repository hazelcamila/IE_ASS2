#include <iostream>

using namespace std;
int main ()
{
int stepnum;
cout << "Enter step number for cooking adobo\t";
cin>> stepnum;

switch(stepnum)
{
        case 1:
        cout<<"Heat the garlic and onion in oil on medium heat";
        break;
        case 2:
        cout<<"Add the chicken and stir";
        break;
        case 3:
        cout<<"Add the soy sauce, vinegar, peppercorn, salt, sugar, water, and bay leaves";
        break;
        case 4:
        cout<<"Bring the chicken to a boil";
        break;
        case 5:
        cout<<"Let the chicken simmer for 20 to 30 minutes";
        break;
        case 6:
        cout<<"Serve and enjoy";
        break;
        default:
        cout<<"Invalid step number, maybe you are not cooking adobo";
        break;

}
return 0;
}