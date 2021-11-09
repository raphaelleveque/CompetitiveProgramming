#include<bits/stdc++.h>
using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)



class Box {
    private:   
    int length;
    int breadth;
    int height;

    public:
    Box() {
        length = 0;
        breadth = 0;
        height = 0;
    }
    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    int getLength(Box b) {
        return length;
    }
    int getBreadth() {
        return breadth;
    }
    int getHeight() {
        return height;
    }
    long long CalculateVolume() {
        long long volume = length;
        volume *= breadth;
        volume *= height;
        return volume;
    }
    
    friend ostream& operator<<(ostream& os, Box& b){
        os << b.length << " " << b.breadth << " " << b.height;
        return os;
    }

    friend bool operator < (Box& b1,Box& b2) {
        if (b1.length < b2.length)
            return true;
        if (b1.breadth < b2.breadth && b1.length == b2.length)
            return true;
        if (b1.height < b2.height && b1.breadth == b2.breadth && b1.length == b2.length)
            return true;
        return false;
    }
    
};




void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}