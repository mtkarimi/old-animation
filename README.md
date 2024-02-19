# Animated Scene Project - 2000

This repository hosts the source code of a unique project I developed during my computer science studies in the year 2000. At the time, it represented a significant achievement as I was the only person at my university to undertake and successfully implement such a graphical programming project using the Borland Graphics Interface (BGI) in C.

## Project Overview

The project is a graphical C program that creates a dynamic and animated scene. It includes various elements such as the sun, mountains, clouds, the ground, trees, moving objects (like circles and a dog), and displays engaging text messages with sound effects. This was achieved through meticulous programming and leveraging the capabilities of BGI for 2D graphics, demonstrating early graphical programming skills and creativity.

### Features

- **Dynamic Elements**: The scene dynamically changes, featuring animations such as moving circles, an animated dog, and a scrolling text message.
- **Interactive**: Pauses for user input to proceed, enhancing engagement.
- **Sound Integration**: Utilizes the PC speaker to add sound effects, enriching the user experience.

---

# Graphical C Program for Animated Scene Using BGI

This repository contains a graphical C program designed to create an animated scene leveraging the Borland Graphics Interface (BGI). It features an assortment of elements including the sun, mountains, clouds, ground, trees, and moving objects such as circles and a dog, alongside displaying text messages with effects to enrich the user experience.

## Overview of Components and Functionality

### Including Headers
- **Standard Libraries**: Utilizes `stdio.h` for input-output operations and `stdlib.h` for general utilities.
- **Console I/O**: `conio.h` for console operations, notably `getch()` to pause execution awaiting a key press.
- **Graphics**: `graphics.h` for 2D graphics through BGI, and `dos.h` for DOS-specific operations, mainly the `delay()` function.

### Function Definitions
Each function contributes to the scene:
- `ground()`: Establishes the ground.
- `tree()`: Constructs a tree with foliage and trunk.
- `mount()`: Creates a mountain landscape.
- `cloud()`: Generates clouds.
- `sun()`: Illustrates the sun.
- `circle1()` and `circle2()`: Animate moving circles.
- `dog()`: Animates a dog figure.
- `heal()`: Displays "Heal the World, Make it better place." with sound and color effects.
- `bye()`: Shows scrolling text crediting the programmer.

### Main Function
- Initializes the graphics system and background color.
- Sequentially invokes functions to build the scene and animate elements.
- Pauses for user interaction with `getch()`.
- Concludes with the `bye()` function for credits, then exits graphics mode.

### Graphics and Animation Techniques
- Employs `setfillpattern` and `floodfill` for detailed shapes.
- Achieves animation by redrawing elements with delays for movement illusion.
- Utilizes sound and color changes in `heal()` for message emphasis.

### Utility and Effects
- Demonstrates basic BGI graphics functions for creating engaging scenes.
- Shows how graphics in C can be used for both educational and entertainment purposes, with interactive and dynamic text presentations.

### Reflections

Reflecting on this project, it stands as a testament to my early dedication and capability in the realm of computer programming. Despite the challenges and the high standards set by my lecturers—who believed in my potential to achieve even more—I managed to secure a grade of 16 out of 20. This grade, while commendable, came as a result of rigorous evaluation, underscoring the project's complexity and the high expectations placed on my work.

### Acknowledgments

I would like to extend my gratitude to my lecturers and peers at the university who pushed me to explore the boundaries of what I could achieve. This project was not just a learning experience but a milestone that marked the beginning of my journey in computer science.

### License

This project is open-source and available for anyone interested in early graphical programming projects or seeking inspiration for their own work in computer science education.
