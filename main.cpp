#include <iostream>
#include <cassert>
#include <array>
#include <vector>
#include "Pixel.h"
#include "Renderer.h"

int main() {

    string yesNo;
    cout << "Do you want to see the firework show? (yes/no)" << endl;
    cin >> yesNo;

    vector<Renderer*> container;  // container storing Renderers
    typedef vector<vector<char>> Art;  // 2D vector for each firework design
    typedef vector<Art> Arts;  // vector for all created firework design
    SolidColor* color1 = new SolidColor(Pixel::Color::WHITE);
    SolidColor* color2 = new SolidColor(Pixel::Color::CYAN);
    SolidColor* color3 = new SolidColor(Pixel::Color::MAGENTA);

    RandomColor* randomColor = new RandomColor;
    RandomColor* randomColor2 = new RandomColor;
    container.push_back(color1);  // instance of SolidColor
    container.push_back(color2);  // instance of SolidColor
    container.push_back(color3);  // instance of SolidColor
    container.push_back(randomColor);  // instance of RandomColor
    container.push_back(randomColor);  // instance of RandomColor

    Arts fireworks;  // container for firework1 art
    Art firework1;  // variable for the container with fireworks art
    int row{3};
    int column{5};
    for (int i = 0; i < row; ++i) {
        firework1.push_back(vector<char>(column));
        for (int j = 0; i < j; ++j) {
        }
    }
    // hard code firework1 design
    //    .* *.
    //    *..*
    //    *
    firework1[0][0] = '.';
    firework1[0][1] = '*';
    firework1[0][2] = ' ';
    firework1[0][3] = '*';
    firework1[0][4] = '.';
    firework1[1][0] = '*';
    firework1[1][1] = '.';
    firework1[1][2] = '.';
    firework1[1][3] = '*';
    firework1[1][4] = ' ';
    firework1[2][0] = ' ';
    firework1[2][1] = ' ';
    firework1[2][2] = ' ';
    firework1[2][3] = ' ';
    firework1[2][4] = ' ';

    Art firework2;  // container for firework2 art
    int row2{3};
    int column2{7};
    for (int i = 0; i < row2; ++i) {
        firework2.push_back(vector<char>(column2));
        for (int j = 0; j < column2; ++j) {
        }
    }
    // hard code firework2 design
    //    `o`o`
    //    o`o`o`o
    //    `o`o`
    firework2[0][0] = '`';
    firework2[0][1] = 'o';
    firework2[0][2] = '`';
    firework2[0][3] = 'o';
    firework2[0][4] = '`';
    firework2[0][5] = ' ';
    firework2[0][6] = ' ';
    firework2[1][0] = 'o';
    firework2[1][1] = '`';
    firework2[1][2] = 'o';
    firework2[1][3] = '`';
    firework2[1][4] = 'o';
    firework2[1][5] = '`';
    firework2[1][6] = 'o';
    firework2[2][0] = '`';
    firework2[2][1] = 'o';
    firework2[2][2] = '`';
    firework2[2][3] = 'o';
    firework2[2][4] = '`';
    firework2[2][5] = ' ';
    firework2[2][6] = ' ';

    Art firework3;  // container for firework3 art
    int row3{4};
    int column3{9};
    for (int i = 0; i < row3; ++i) {
        firework3.push_back(vector<char>(column3));
        for (int j = 0; j < column3; ++j) {
        }
    }
    // hard code firework3 design
    //    ^,^,^
    //    ^,^,^,^,^
    //    ^,^,^,^,^
    //    ^,^,^
    firework3[0][0] = '^';
    firework3[0][1] = ',';
    firework3[0][2] = '^';
    firework3[0][3] = ',';
    firework3[0][4] = '^';
    firework3[0][5] = ' ';
    firework3[0][6] = ' ';
    firework3[0][7] = ' ';
    firework3[0][8] = ' ';
    firework3[1][0] = '^';
    firework3[1][1] = ',';
    firework3[1][2] = '^';
    firework3[1][3] = ',';
    firework3[1][4] = '^';
    firework3[1][5] = ',';
    firework3[1][6] = '^';
    firework3[1][7] = ',';
    firework3[1][8] = '^';
    firework3[2][0] = '^';
    firework3[2][1] = ',';
    firework3[2][2] = '^';
    firework3[2][3] = ',';
    firework3[2][4] = '^';
    firework3[2][5] = ',';
    firework3[2][6] = '^';
    firework3[2][7] = ',';
    firework3[2][8] = '^';
    firework3[3][0] = '^';
    firework3[3][1] = ',';
    firework3[3][2] = '^';
    firework3[3][3] = ',';
    firework3[3][4] = '^';
    firework3[3][5] = ' ';
    firework3[3][6] = ' ';
    firework3[3][7] = ' ';
    firework3[3][8] = ' ';

    Art firework4; // container for firework4 art
    int row4{5};
    int column4{11};
    for (int i = 0; i < row4; ++i) {
        firework4.push_back(vector<char>(column4));
        for (int j = 0; j < column4; ++j) {
        }
    }
//        ~@~@~
//        ~*~@~*~@~*~
//        ~*~@$#$@~*~
//        ~*~@~*~@~*~
//        ~@~@~
    firework4[0][0] = '~';
    firework4[0][1] = '@';
    firework4[0][2] = '~';
    firework4[0][3] = '@';
    firework4[0][4] = '~';
    firework4[0][5] = ' ';
    firework4[0][6] = ' ';
    firework4[0][7] = ' ';
    firework4[0][8] = ' ';
    firework4[0][9] = ' ';
    firework4[0][10] = ' ';
    firework4[1][0] = '~';
    firework4[1][1] = '*';
    firework4[1][2] = '~';
    firework4[1][3] = '@';
    firework4[1][4] = '~';
    firework4[1][5] = '*';
    firework4[1][6] = '~';
    firework4[1][7] = '@';
    firework4[1][8] = '~';
    firework4[1][9] = '*';
    firework4[1][10] = '~';
    firework4[2][0] = '~';
    firework4[2][1] = '*';
    firework4[2][2] = '~';
    firework4[2][3] = '@';
    firework4[2][4] = '$';
    firework4[2][5] = '#';
    firework4[2][6] = '$';
    firework4[2][7] = '@';
    firework4[2][8] = '~';
    firework4[2][9] = '*';
    firework4[2][10] = '~';
    firework4[3][0] = '~';
    firework4[3][1] = '*';
    firework4[3][2] = '~';
    firework4[3][3] = '@';
    firework4[3][4] = '~';
    firework4[3][5] = '*';
    firework4[3][6] = '~';
    firework4[3][7] = '@';
    firework4[3][8] = '~';
    firework4[3][9] = '*';
    firework4[3][10] = '~';
    firework4[4][0] = '~';
    firework4[4][1] = '@';
    firework4[4][2] = '~';
    firework4[4][3] = '@';
    firework4[4][4] = '~';
    firework4[4][5] = ' ';
    firework4[4][6] = ' ';
    firework4[4][7] = ' ';
    firework4[4][8] = ' ';
    firework4[4][9] = ' ';
    firework4[4][10] = ' ';

    fireworks.push_back(firework1);  // populate container with Art instances
    fireworks.push_back(firework2);  // populate container with Art instances
    fireworks.push_back(firework3);  // populate container with Art instances
    fireworks.push_back(firework4);  // populate container with Art instances

    PixelBuffer buffer;  // instance of PixelBuffer
    while ((yesNo == "y") || (yesNo == "Y") || (yesNo == "Yes") || (yesNo == "YES")) {  // condition for user input
        buffer.init();  // call init() from Pixel.h
        int randomNum = rand() % 9 + 1;  // generate random number from 1-10
        for (int i = 0; i < randomNum; ++i) {
            int randomVectorSize = rand() % fireworks.size();
            Art temp = fireworks[randomVectorSize];
            int randContainerSize = rand() % container.size();
            Renderer* temp2 = container[randContainerSize];
            temp2->render(temp, buffer);
            buffer.render();
        }
        cout << "Do you want to see the firework show? (Yes/No)" << endl;
        cin >> yesNo;
    }
    for (int i =0; i < container.size(); ++i) {  // cleanup of dynamically created renderers
        delete container[i];
    }
    return 0;
}