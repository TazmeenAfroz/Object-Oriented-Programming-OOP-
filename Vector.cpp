/*Here vector means an image in graphics. Vector graphics is a form of computer graphics in
which visual images are created directly from geometric shapes defined on a Cartesian plane
Create a class template called Vector that contains a single private member variable
v of type V. The class should have a constructor that initializes v. Additionally, the
class should have a public member function called calculateDotProduct which
accepts an object of the same template type as an argument. This function should
call the calculateDotProduct function of the passed object and return the result.
Create two classes called My2DVector that contain two private data members x, and
y, and My3DVector which contain three private member variables x, y, and z.
My2DVector should have a constructor that initializes x and y, while My3DVector
should have a constructor that initializes all three variables. Both classes should have
a default constructor that initializes variables to zero. Additionally, each class should
have a public member function called calculateDotProduct which accepts an object
of the same type as an argument and returns the dot product of the two vectors.
Overload the stream extraction and insertion operators (<< and >>) for both
My2DVector and My3DVector classes. The << operator should print the vector in
the format (x, y) for My2DVector and (x, y, z) for My3DVector. The >> operator
should prompt the user to enter the values of x, y, and z and assign them to the
corresponding member variables.
In the main() function, create two objects of type My2DVector and two objects of
type My3DVector. Using these objects, create two objects of type Vector. Then, use
the calculateDotProduct function of each vector object to calculate the dot product
of the two corresponding vectors. Finally, output the vectors and their respective dot
products.*/
#include<iostream>
using namespace std;


template <class V>

class Vector {
    V v;
public:
      Vector(V var = 0) {
        v = var;
    }
    int calculateDotProduct(V v0)
     {

        return v.calculateDotProduct(v0);
    }
};


class My2DVector{
 
 int x,y;
 
friend ostream &operator<<(ostream &c, My2DVector &v1);
friend istream &operator>>(istream &c, My2DVector &v1);

 public:
    My2DVector(int x = 0 ,int y = 0)
    {
        this->x = x;
        this->y = y;
    }
 int calculateDotProduct(My2DVector v1)
 {
   My2DVector z;
   int ans;
    z.x = x*v1.x;
    z.y = y*v1.y;
    ans = z.x+z.y;
    return ans;
 }

};


class My3DVector{
int x1,y1,z1;

friend ostream &operator<<(ostream &c, My3DVector &v1);
friend istream &operator>>(istream &c, My3DVector &v1);

public:
    My3DVector(int x1 = 0,int y1 = 0,int z1 = 0)
    {
        this->x1 = x1;
        this->y1 = y1;
        this->z1 = z1;
    }
    int calculateDotProduct(My3DVector v2)
    {  int ans;
        My3DVector z2;
        z2.x1 = x1*v2.x1;
        z2.y1 = y1*v2.y1;
        z2.z1 = z1*v2.z1;
        ans = z2.x1+z2.y1+z2.z1;
        return  ans;
    }


    };


ostream &operator<<(ostream &c, My2DVector &v1)
{
   c << "(" << v1.x<<","  << v1.y << ")"<< endl;

    return c;
}

istream &operator>>(istream &c,My2DVector &v1)
{
    cout<<"Enter the value of x and y"<<endl;
    c>>v1.x>>v1.y;
    return c;

}

ostream &operator<<(ostream &c, My3DVector &v1)
{
   c << "(" << v1.x1<<","  << v1.y1 <<"," << v1.z1 << ")"<< endl;

    return c;
}

istream &operator>>(istream &c,My3DVector &v1)
{
    cout<<"Enter the value of x and y and z"<<endl;
    c>>v1.x1>>v1.y1>>v1.z1;
    return c;

}

int main()
{ 
    My2DVector v1,v2;
    cin>>v1;
    cin>>v2;
     cout<<v1;
     cout<<v2;
    Vector<My2DVector> v0(v1);
     int ans1;
    ans1 = v0.calculateDotProduct(v2);
   cout<<"Dot product of 2D vector is : "<<ans1<<endl;

    My3DVector v3,v4;
    cin>>v3;
    cin>>v4;
    cout<<v3;
    cout<<v4;
     Vector<My3DVector> v6(v3);
     int ans2;
    ans2 = v6.calculateDotProduct(v4);

    cout<<"Dot product of 3D vector is : "<<ans2<<endl;
    return 0;
}
