#include <QtWidgets>

int main(int argc, char *argv[])
{
    int variable = 2;
    QApplication app(argc, argv);
    QWidget window;
    window.resize(720, 480);
    variable = 3;

    auto button = new QPushButton("Some text");
    window.show();


    
    
    window.setWindowTitle(
        QApplication::translate("toplevel", "Top-level widget"));
    return app.exec();
}