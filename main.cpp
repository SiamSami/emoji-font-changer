#include "emoji_font.h"

#include <DApplication>
DWIDGET_USE_NAMESPACE
DCORE_USE_NAMESPACE
int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();
    DApplication a(argc, argv);
    a.setApplicationName("Universal Emoji Font changer");
    a.setApplicationDisplayName("Universal Emoji Font changer");
    a.setProductName("Universal Emoji Font changer");
    a.setApplicationVersion("1.0");
    a.setApplicationLicense("GNU GPL V3.0");
    a.setApplicationDescription("It's simple program to change the font of emojis");
    a.setApplicationHomePage("https://github.com/SiamSami/emoji-font-changer");
    emoji_font w;
    w.show();
    return a.exec();
}
