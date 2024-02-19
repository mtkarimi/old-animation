#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <stdio.h>

// Draw the ground
void drawGround() {
    char pattern[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
    setbkcolor(BLUE);
    setcolor(YELLOW);
    line(0, 396, 640, 396);
    line(0, 397, 640, 397);
    line(0, 398, 640, 398);
    setfillpattern(pattern, GREEN);
    floodfill(320, 400, YELLOW);
}

// Draw a tree
void drawTree() {
    char leafPattern[] = {0xAA, 0xAA, 0xCC, 0xCC, 0xCC, 0xCC, 0xAA, 0xAA};
    char trunkPattern[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
    setbkcolor(BLUE);
    setcolor(GREEN);
    // Leaves
    circle(80, 295, 25);
    setfillpattern(leafPattern, GREEN);
    floodfill(80, 295, GREEN);
    circle(90, 265, 25);
    floodfill(90, 265, GREEN);
    circle(100, 295, 25);
    floodfill(100, 295, GREEN);
    // Trunk
    setcolor(BROWN);
    rectangle(75, 315, 105, 395);
    setfillpattern(trunkPattern, BROWN);
    floodfill(80, 320, BROWN);
}

// Draw mountains
void drawMountains() {
    char pattern[] = {0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x55};
    setbkcolor(BLUE);
    setcolor(BROWN);
    arc(0, 398, 0, 180, 70);
    getarccoords(&arc);
    line(arc.xend, arc.yend, arc.xstart, arc.ystart);
    setfillpattern(pattern, BROWN);
    floodfill(35, 390, BROWN);
}

// Draw clouds
void drawClouds() {
    char pattern[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
    setcolor(WHITE);
    setbkcolor(BLUE);
    // Cloud parts
    arc(150, 50, 50, 310, 20);
    arc(175, 50, 50, 130, 20);
    arc(200, 50, 210, 150, 20);
    arc(175, 55, -180, 0, 20);
    setfillpattern(pattern, WHITE);
    floodfill(175, 50, WHITE);
}

// Draw the sun
void drawSun() {
    char pattern[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
    setcolor(YELLOW);
    setbkcolor(BLUE);
    circle(50, 50, 15);
    setfillpattern(pattern, YELLOW);
    floodfill(50, 50, YELLOW);
}

// Animate a circle moving left to right
void animateCircle1() {
    char pattern[] = {0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA};
    for (int x = 150; x < 266; x++) {
        setcolor(BLUE);
        circle(x, 360, 7);
        setfillpattern(pattern, LIGHTRED);
        floodfill(x, 360, WHITE);
        delay(15);
    }
}

// Animate a second circle moving right to left
void animateCircle2() {
    char pattern[] = {0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA};
    for (int x = 50; x < 316; x++) {
        setcolor(BLUE);
        circle(600 - x, 360, 7);
        setfillpattern(pattern, LIGHTGREEN);
        floodfill(600 - x, 360, WHITE);
        delay(25);
    }
}

// Animate a dog moving across the screen
void animateDog() {
    char pattern[] = {0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA};
    for (int x = 1; x < 120; x++) {
        setcolor(GREEN);
        rectangle(20 + x, 435, 50 + x, 450);
        setfillpattern(pattern, GREEN);
        floodfill(21 + x, 436, GREEN);
        delay(25);
    }
}

// Display a healing message
void displayMessage() {
    for (int color = 1; color < 32; color++) {
        setcolor(color);
        sound(400 - color * 3);
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);
        outtextxy(getmaxx() / 2, getmaxy() / 2, "Heal the World, Make it a better place.");
        delay(200);
        nosound();
    }
}

// Show credits
void showCredits() {
    for (int y = 1; y < 490; y++) {
        settextstyle(SMALL_FONT, HORIZ_DIR, 5);
        outtextxy(getmaxx() / 2, getmaxy() - y, "Programmer: Mohammad Taghi Karimi");
        delay(15);
        cleardevice();
    }
}

// Main function to initialize graphics and draw scenes
int main() {
    int driver = DETECT, mode;
    initgraph(&driver, &mode, "C:\\TC\\BGI");
    setbkcolor(LIGHTBLUE);
    drawSun();
    drawMountains();
    drawClouds();
    drawGround();
    drawTree();
    animateCircle1();
    animateDog();
    animateCircle2();
    displayMessage();
    getch();
    showCredits();
    closegraph();
    return 0;
}
