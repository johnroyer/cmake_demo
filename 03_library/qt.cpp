#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv){
   QApplication app(argc, argv);

   QPushButton b;
   b.setText("Quit");
   QObject::connect(&b, SIGNAL(clicked()), &app, SLOT(quit()));
   b.show();

   return app.exec();

}
