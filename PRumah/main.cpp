#include <winddi.h>
#include <GL/glut.h>
#include <stdlib.h>

int is_depth;


int main(int argc, char** argv){

    glutInit(&argc,argv);;
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(250,80);
    glutCreateWindow("The Dubai Mall");
    Canvas();

    glutDisplayFunc(Tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);

    glutIdleFunc(Tampil);
    glutMainLoop();
    return 0;
}

void Canvas(){

    glClearColor(1,1,1,1);
    glMatrixMode(GL_PROJECTION);

    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(3.0);

}

void Tampil(){

    if(is_depth)
        glclaer(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    else
        glclaer(GL_COLOR_BUFFER_BIT);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SCR_ALPHA, GL_ONE_MINUS_SRC_ALPHA);


}

void keyboard(){



}

void mouse(){



}

void mouseMotion(){



}
