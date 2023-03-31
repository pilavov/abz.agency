#ifndef DISPLAYUSERSWINDOW_H
#define DISPLAYUSERSWINDOW_H

#include <QMainWindow>
#include <Api.h>
#include <QLabel>
#include <vector>
#include <QValidator>
#include <QRadioButton>

QT_BEGIN_NAMESPACE
namespace Ui { class DisplayUsersWindow; }
QT_END_NAMESPACE

class DisplayUsersWindow : public QMainWindow
{
    Q_OBJECT

public:
    DisplayUsersWindow(QWidget *parent = nullptr);
    ~DisplayUsersWindow();

private slots:
    void on_prev_page_btn_2_clicked();

    void on_next_page_btn_2_clicked();

    void on_addUserBrn_clicked();

    void on_choosePictureBtn_clicked();

private:
    int chosenPositionRadioBtn;
    Ui::DisplayUsersWindow *ui;
    Api m_api;

    std::vector<QLabel*> namesLabels;
    std::vector<QLabel*> positionLabels;
    std::vector<QLabel*> emailLabels;
    std::vector<QLabel*> phoneLabels;

    QValidator* m_phoneValidator;
    QValidator* m_emailValidator;
    QValidator* m_usernameValidator;

    std::vector<QRadioButton *> m_positionsBtns;

    void setLabels();
    void setPositionBtn();
    void setInputValidators();
    void updateUsers(bool toNextPage);

    bool checkValidators();
    bool checkPhoto();
};
#endif // DISPLAYUSERSWINDOW_H
