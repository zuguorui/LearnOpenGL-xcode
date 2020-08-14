//
//  DrawPractice.hpp
//  LearnOpenGL-xcode
//
//  Created by zhiyun on 2020/8/14.
//  Copyright © 2020 zu. All rights reserved.
//

#ifndef DrawPractice_hpp
#define DrawPractice_hpp

#include <iostream>
#include <stdio.h>
#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

using namespace std;

static GLFWwindow *window = NULL;

bool initWindow();
void destroyWindow();

void drawTriangle();

void drawRectangle();

#endif /* DrawPractice_hpp */
