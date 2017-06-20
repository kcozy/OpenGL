#include <iostream>
#include <OpenGL/OpenGL.h>
#include <GLUT/GLUT.h>


void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

int main(int argc, char * argv[]) {
    // 実行時のオプションを受け取る
    glutInit(&argc, argv);

    // 画面モードを指定
    glutInitDisplayMode(GLUT_RGBA);

    // Windowを生成
    glutCreateWindow("Hello OpenGL!");

    // 表示コールバック関数を登録
    glutDisplayFunc(display);
    
    glClearColor(1.0, 1.0, 1.0, 1.0);

    // イベント処理ループ
    glutMainLoop();
    
    return 0;
}