#include <QCoreApplication>
#include <QDir>
#include <QFileInfo>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir dir;

    QFileInfoList list = dir.entryInfoList();
    std::cout << "Byte"<<"\t"<<"Filename"<<std::endl;

    for(int i = 0; i < list.size(); ++i)
    {
        QFileInfo fileInfo = list.at(i);
        std::cout << fileInfo.size() << "\t" << fileInfo.fileName().toStdString().c_str();
        std::cout << std::endl;
    }

    return a.exec();
}
