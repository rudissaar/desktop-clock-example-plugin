#ifndef EXAMPLEPLUGIN_H
#define EXAMPLEPLUGIN_H

#include <QDebug>
#include <QObject>
#include <QString>
#include <QtPlugin>

#include "plugininterface.h"

using namespace DesktopClock;

class ExamplePlugin :
    public QObject,
    PluginInterface
{
    Q_OBJECT
    Q_INTERFACES(DesktopClock::PluginInterface)
    Q_PLUGIN_METADATA(IID "eu.murda.desktopclock.PluginInterface")

public:
    ~ExamplePlugin();

    QString getName();
    void initialize();
};

#endif // EXAMPLEPLUGIN_H
