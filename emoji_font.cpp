#include "emoji_font.h"
#include "ui_emoji_font.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
emoji_font::emoji_font(QWidget *parent)
    : DMainWindow(parent)
    , ui(new Ui::emoji_font)
{
    ui->setupUi(this);
}

emoji_font::~emoji_font()
{
    delete ui;
}


void emoji_font::on_pushButton_clicked()
{
    std::string home = getenv("HOME");
    ui->label_2->setText("Please wait...");
    QString text = ui->lineEdit->text();
    std::ofstream file(home+"/.config/fontconfig/conf.d/01-emoji.conf");
    file << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
         << "<!DOCTYPE fontconfig SYSTEM \"fonts.dtd\">\n"
         << "<fontconfig>\n"
         << "  <alias>\n"
         << "   <family>serif</family>\n"
         << "   <prefer>\n"
         << "      <family>" << text.toStdString() <<"</family>\n"
         << "   </prefer>\n"
         << "  </alias>\n"
         << " <alias>\n"
         << "   <family>sans-serif</family>\n"
         << "    <prefer>\n"
         << "   <family>" << text.toStdString() << "</family>\n"
         << "    </prefer>\n"
         << " </alias>\n"
         << " <alias>\n"
         << "   <family>monospace</family>\n"
         << "  <prefer>\n"
         << "    <family>" << text.toStdString() << "</family>\n"
         << "  </prefer>\n"
         << "  </alias>\n"
         << "</fontconfig>";
    file.close();
    system("fc-cache -v -f");
    ui->label_2->setText("Done");
}
