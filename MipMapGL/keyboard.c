//
//  keyboard.c
//  MipMapGL
//
//  Created by Laura del Pino Díaz on 12/8/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include "keyboard.h"

extern struct MipTransform mip;

void Teclas(int key, int x, int y){

    switch (key) {
        case GLUT_KEY_UP:
            //Control para mover hacia arriba
            mip.y += 0.001f;
            break;
            
        case GLUT_KEY_DOWN:
            //Control para mover hacia abajo
            mip.y -= 0.001f;
            break;
            
        case GLUT_KEY_LEFT:
            //Control para mover hacia la izquierda
            mip.x -= 0.001f;
            break;
            
        case GLUT_KEY_RIGHT:
            //Control para mover hacia la derecha
            mip.x += 0.001f;
            break;
            
        default:
            break;
    }
    glutPostRedisplay();
}