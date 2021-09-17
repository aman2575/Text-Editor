#include "mytexteditor.h"
#include "ui_mytexteditor.h"
#include <QTextCharFormat>

MyTextEditor::MyTextEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyTextEditor)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MyTextEditor::~MyTextEditor()
{
    delete ui;
}

void MyTextEditor::on_actionBold_triggered(bool checked)
{
    checked ? ui->textEdit->setFontWeight(QFont::Bold) :
              ui->textEdit->setFontWeight(QFont::Normal);
}



void MyTextEditor::on_actionSuperScript_triggered()
{
     QTextCharFormat format, format_1;
     format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
     if(ui->textEdit->hasFocus())
        ui->textEdit->mergeCurrentCharFormat(format);
}


void MyTextEditor::on_actionSubScript_triggered()
{
    QTextCharFormat format;
    format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    if(ui->textEdit->hasFocus())
       ui->textEdit->mergeCurrentCharFormat(format);

}


void MyTextEditor::on_actionNormal_triggered()
{
    QTextCharFormat format;
    format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    if(ui->textEdit->hasFocus())
       ui->textEdit->mergeCurrentCharFormat(format);
}

