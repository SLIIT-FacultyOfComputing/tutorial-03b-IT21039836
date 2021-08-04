#include <iostream>
#include <iomanip>

using namespace std;

void volume(int height, int width, int length);

struct Box1{
  int HeigthBox1;
  int WidthBox1;
  int LengthBox1;
}
   Box2{
  int HeigthBox2;
  int WidthBox2;
  int LengthBox2;
}

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> HeightBox1;
    cout << "Enter Box 1 Width : ";
    cin >> WidthBox1;
    cout << "Enter Box 1 Length : ";
    cin >> LengthBox1;
    
    cout << "Enter Box 2 Height : ";
    cin >> HeightBox2;
    cout << "Enter Box 2 Width : ";
    cin >> WidthBox2;
    cout << "Enter Box 2 Length : ";
    cin >> LengthBox2;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( HeigthBox1,WidthBox1 ,LengthBox1 )+ volume( HeigthBox2,WidthBox2 ,LengthBox2 );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    
}
void volume(int height, int width, int length){
  return (height * width * length)+(height * width * length);
}

// Implement the functions here
