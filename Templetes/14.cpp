//Problem 7: Fitness Tracking Application
//A fitness app stores:
//? Steps walked (int)
//? Calories burned (float)
//? Distance covered (double)
//Task
//Create a template function findGoalAchievement() that determines whether the achieved
//value exceeds the target value.
//Example
//findGoalAchievement(12000,10000);
//findGoalAchievement(4.8,5.0);


#include <iostream>
using namespace std;

template <class T>
void findGoalAchievement(T achieved, T target)
{
    if (achieved > target)
        cout << "Goal Achieved" << endl;
    else
        cout << "Goal Not Achieved" << endl;
}

int main()
{
    findGoalAchievement(12000, 10000);
    findGoalAchievement(4.8, 5.0);
    findGoalAchievement(350.5f, 300.0f);

    return 0;
}
