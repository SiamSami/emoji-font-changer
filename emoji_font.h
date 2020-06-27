#ifndef EMOJI_FONT_H
#define EMOJI_FONT_H

#include <DMainWindow>
DWIDGET_USE_NAMESPACE
DCORE_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui { class emoji_font; }
QT_END_NAMESPACE

class emoji_font : public DMainWindow
{
    Q_OBJECT

public:
    emoji_font(QWidget *parent = nullptr);
    ~emoji_font();

private slots:
    void on_pushButton_clicked();

private:
    Ui::emoji_font *ui;
};
#endif // EMOJI_FONT_H
