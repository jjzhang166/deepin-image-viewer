/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DIVDBusController -p divdbuscontroller com.deepin.ImageViewer.xml
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DIVDBUSCONTROLLER_H
#define DIVDBUSCONTROLLER_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.DeepinImageViewer
 */
class DIVDBusController: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceService()
    { return "com.deepin.DeepinImageViewer"; }
    static inline const char *staticInterfacePath()
    { return "/com/deepin/DeepinImageViewer"; }
    static inline const char *staticInterfaceName()
    { return "com.deepin.DeepinImageViewer"; }
public:
    DIVDBusController(QObject *parent = 0);

    ~DIVDBusController();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> activeWindow()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("activeWindow"), argumentList);
    }

    inline QDBusPendingReply<> backToMainWindow()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("backToMainWindow"), argumentList);
    }

    inline QDBusPendingReply<> editImage(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("editImage"), argumentList);
    }

    inline QDBusPendingReply<> enterAlbum(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("enterAlbum"), argumentList);
    }

    inline QDBusPendingReply<> searchImage(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("searchImage"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace com {
  namespace deepin {
    typedef ::DIVDBusController DeepinImageViewer;
  }
}
#endif
