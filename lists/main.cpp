#include <QCoreApplication>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << "HELLO WORLD!" << endl;
    list<int> allNums(5,0);
   for(auto iter = allNums.begin(); iter != allNums.end(); iter++){
    cout << *iter << endl;
   }
vector<int> nums;
for(int i=0;i<10;i++) {
    nums.push_back(i);
}
for(int i=0;i<10;i++) {
    cout << nums[i] << endl;
}


    return a.exec();
}
