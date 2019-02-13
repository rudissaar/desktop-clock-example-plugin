#include "exampleplugin.h"

ExamplePlugin::~ExamplePlugin()
{
    qDebug() << "Destruct";
}

QString ExamplePlugin::getName()
{
    return "ExamplePlugin";
}

void ExamplePlugin::initialize()
{
    qDebug() << "I am an example plugin.";
}
