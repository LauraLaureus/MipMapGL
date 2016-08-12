//
//  main.c
//  MipMapGL
//
//  Created by Laura del Pino Díaz on 1/8/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//



int escp = 0;

int main(int argc,  char * argv[]) {

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
