#include <iostream>
using namespace std;

class MultiLevelParent
{
public:
    void ParentFunc()
    {
        cout << "Hello Friend";
    }
};

class MultiLevelChild : public MultiLevelParent
{
};

class MultiLevelGrandChild : public MultiLevelChild
{
};

int main()
{
    MultiLevelGrandChild mlgcobj;
    mlgcobj.ParentFunc();
    return 0;
}