#include <windows.h>
#include <gl/gl.h>

int main(int argc, char *argv[])
{
        QApplication app(argc, argv);
        Form1 window(0, 0);
        return window.exec();
}
