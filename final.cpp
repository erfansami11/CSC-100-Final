#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
int main()
{
    int stype;
    int rectangle_area, radious, area, width, length, height;
    float circle_area, triangle_area;
    const double PI = 3.14;
    cout<<"Geometry App \n######################################\nWelcome to the Geometry App!\n#######################################\nI will let you calculate the area and perimeter of 2-D shapes, and volume of 3-D shapes.\n**************************************";
    amain:cout<<"\nPlease enter a choice from below: \nwhat Are The Dimensions Of Your Shape? \n1) 2-D\n2) 3-D\n3) Exit \nPlease enter choice: ";
    cin>>stype;
    if(stype<=0){
      cout<<"Wrong Selection, Please Select Again!!";
      goto amain;
    }else if(stype>=4){
      cout<<"Wrong Selection, Please Select Again!!";
      goto amain;
    }else{
      //Main Part starts here!!!
          if(stype==1){
            //All 2d functions and operation starts here....
            char menu;
            amain2:
            cout<<"*************************************\nYou picked 1.";
            cout<<"\n1)2-D Shapes\n\tWhat shape would you pick?\n\ta) Circle\n\tb) Square\n\tc) Rectange\n\td) Trapezium\n\te) Parallelogram\n\tf) Rhombus\n\tg) Triangle\n\tType 'x' to exit from this menu.";
            cout<<"\n\tPlease pick a shape:";
            cin>>menu;
            switch (menu) {
              case 'a':
                cout << "\t\tEnter the radious of a circle";
                cin >> radious;
                cout << "\t\tEnter the area of a circle. \n";
                circle_area= PI * radious * radious;
                cout << "\t\tErea of the circle is " << circle_area << endl;
                goto amain2;
              break;
              ////////////////
              case 'b':
                cout<<"\tit's a!!";
              break;
              ///////////////
              case 'c':
                cout << "\t\tEnter the width of a rectangle";
                cin >> width;
                cout << "\t\tEnter the length of the rectangle";
                cin >> length;
                cout << "\t\tEnter the area of the rectangle";
                rectangle_area = width*length;
                cout << "\n\t\tRectangular Area =" << rectangle_area;
                goto amain2;
              break;
              ////////////////
              case 'd':
                cout<<"\tit's a!!";
              break;
              ///////////////
              case 'e':
                cout<<"\tit's a!!";
              break;
              //////////////
              case 'f':
                cout<<"\tit's a!!";
              break;
              /////////////
              case 'g':
                cout << "\t\tEnter the length of a triangle";
                cin >> length;
                cout << "\t\tEnter the height of a triangle";
                cin >> height;
                triangle_area = length * height /2;
                cout << "\t\tTriangle Area=" << triangle_area;
                goto amain2;
              break;
              /////////////
              case 'x':
                goto amain;
              break;
              default:
                cout<<"Wrong input, try again!!\n";
                goto amain2;
              break;
              ///////////////
            }
           
          }else if(stype==2){
            cout<<"*************************************\nYou picked 2.";
          }else if(stype==3){
            cout<<"*************************************\nYou picked 3) Exit.\n#####################################\nSee you again!\nGoodbye!\n ####################################";
          }
      }
     
 
}
