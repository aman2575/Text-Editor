#ifndef MYTEXTEDITOR_H
#define MYTEXTEDITOR_H

#include <QMainWindow>

namespace Ui {
class MyTextEditor;
}

class MyTextEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyTextEditor(QWidget *parent = 0);
    ~MyTextEditor();

private slots:
    void on_actionBold_triggered(bool checked);

    void on_actionSuperScript_triggered();

    void on_actionSubScript_triggered();

    void on_actionNormal_triggered();

private:
    Ui::MyTextEditor *ui;
};

#endif // MYTEXTEDITOR_H
