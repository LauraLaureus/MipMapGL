//
//  view.c
//  MipMapGL
//
//  Created by Laura del Pino Díaz on 8/8/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include "view.h"

void InitGL(){
    
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glOrtho(0.5, 0.5, 0.5, 0.5, 0, 1);
}

void Display(){
    //glutSolidSphere(2, 20, 20);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glTranslatef(0.2, 0, 0);
    glColor3f(1.0, 0, 0);
    glutSolidSphere(0.1, 20, 20);
    glutSwapBuffers();
}