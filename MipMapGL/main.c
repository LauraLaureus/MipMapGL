//
//  main.c
//  MipMapGL
//
//  Created by Laura del Pino Díaz on 1/8/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include "main.h"

int escp = 0;
struct MipTransform mip;

int main(int argc,  char * argv[]) {
    mip.x = 0;
    mip.y = 0;
    
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(1280, 720);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    
    glutCreateWindow("MipMap");
    InitGL();
    glutDisplayFunc(Display); 
    glutSpecialFunc(Teclas);
    
    while(!escp){
        glutCheckLoop();
        //comunicamos con Mip.
    }
    return 0;
}
