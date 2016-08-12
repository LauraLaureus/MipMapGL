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