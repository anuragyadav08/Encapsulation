

#include <iostream>

using namespace std;
class sum
{
    private:
        int x,y;
    public:
        void set(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        void put()
        {
                int result;
                result=x+y;
                cout<<result;
        }
};

int main()
{
    sum obj;
    obj.set(8,12);
    obj.put();
    return 0;
}
