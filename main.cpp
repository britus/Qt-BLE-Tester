#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    /* runtime */
    setenv("QTWEBENGINE_DISABLE_SANDBOX", "1", 0);
    setenv("QT_QPA_GENERIC_PLUGINS", "Evdevtouch:Evdevmouse:Evdevkeyboard", 0);
    /* rotate QPA EGLFS panel display and touch screen */
    setenv("QT_QPA_EGLFS_ROTATION", "-90", 0);
    setenv("QT_QPA_EVDEV_TOUCHSCREEN_PARAMETERS", ":invertx=1:inverty=1:rotate=270", 0);
    /* display options */
    setenv("QT_QPA_EGLFS_PHYSICAL_WIDTH", "230", 0);
    setenv("QT_QPA_EGLFS_PHYSICAL_HEIGHT", "148", 0);
    setenv("QT_AUTO_SCREEN_SCALE_FACTOR", "0", 0);
    setenv("QT_SCALE_FACTOR_ROUNDING_POLICY", "2", 0);
    setenv("QT_ENABLE_HIGHDPI_SCALING", "1", 0);
    setenv("QT_SCREEN_SCALE_FACTORS", "1.0", 0);
    setenv("QT_QPA_FB_DRM", "1", 0);
    /* style */
    setenv("QT_QPA_PLATFORMTHEME", "qt5ct", 0);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
