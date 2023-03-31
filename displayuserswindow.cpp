#include "displayuserswindow.h"
#include "./ui_displayuserswindow.h"

#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QMessageBox>
#include <QDebug>
#include <QFileDialog>
#include <QFileInfo>


DisplayUsersWindow::DisplayUsersWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DisplayUsersWindow)
{
    ui->setupUi(this);

    setLabels();
    setPositionBtn();
    setInputValidators();
    updateUsers(true);
}

DisplayUsersWindow::~DisplayUsersWindow()
{
    delete ui;
}


void DisplayUsersWindow::updateUsers(bool toNextPage)
{

    auto users = m_api.get6Users(toNextPage);

    for (int i  = 0; i < users.size(); ++i ) {
        namesLabels[i]->setText(QString::fromStdString(users[i].getName()));
        positionLabels[i]->setText(QString::fromStdString(users[i].getPosition()));
        emailLabels[i]->setText(QString::fromStdString(users[i].getEmail()));
        phoneLabels[i]->setText(QString::fromStdString(users[i].getPhoneNumber()));
    }

    // on last page we might have less than 6 users
    if (users.size() < 6)
    {
        for (int i  = users.size(); i < 6; ++i ) {
            namesLabels[i]->setText(" - ");
            positionLabels[i]->setText(" - " );
            emailLabels[i]->setText(" - ");
            phoneLabels[i]->setText(" - ");
        }
    }

    if (m_api.isTherePrevPage())
        ui->prev_page_btn_2->setEnabled(true);
    else
        ui->prev_page_btn_2->setEnabled(false);

    if (m_api.isThereNextPage())
        ui->next_page_btn_2->setEnabled(true);
    else
        ui->next_page_btn_2->setEnabled(false);
}

bool DisplayUsersWindow::checkValidators()
{
    QString currentInputToCheck = ui->nameInput->text();
    int pos = 0;
    QValidator::State state = m_usernameValidator->validate(currentInputToCheck, pos);
    if (state != QValidator::Acceptable) {
        QMessageBox::critical(this, "Error", "Invalid NAME input. Please try again.");

        return false;
    }

    currentInputToCheck = ui->emailInput->text();
    pos = 0;
    state = m_emailValidator->validate(currentInputToCheck, pos);
    if (state != QValidator::Acceptable) {
        QMessageBox::critical(this, "Error", "Invalid EMAIL input. Please try again.");
        return false;
    }

    currentInputToCheck = ui->phoneInput->text();
    pos = 0;
    state = m_phoneValidator->validate(currentInputToCheck, pos);
    if (state != QValidator::Acceptable) {
        QMessageBox::critical(this, "Error", "Invalid PHONE NUMBER input. Please try again.");
        return false;
    }

    //chech whether position is chosen
    int posIndex = -1;
    for (int i = 0; i < m_positionsBtns.size(); ++i) {
        if (m_positionsBtns[i]->isChecked())
        {
            posIndex = i+1;
            chosenPositionRadioBtn= posIndex;
            break;
        }
    }
    if (posIndex < 0)
    {
        QMessageBox::critical(this, "Error", "You have not chosen a position. Please try again.");
        return false;
    }

    return true;
}

bool DisplayUsersWindow::checkPhoto()
{
    if(ui->chosenPicture->text().isEmpty())
    {
        QMessageBox::critical(this, "Error", "You have not chosen a photo. Please try again.");
        return false;
    }
    return true;
}

void DisplayUsersWindow::on_prev_page_btn_2_clicked()
{
    updateUsers(false);
}

void DisplayUsersWindow::on_next_page_btn_2_clicked()
{
    updateUsers(true);
}


void DisplayUsersWindow::setLabels()
{
    namesLabels.push_back((ui->nameLabel1_3));
    namesLabels.push_back((ui->nameLabel2_3));
    namesLabels.push_back((ui->nameLabel3_3));
    namesLabels.push_back((ui->nameLabel4_3));
    namesLabels.push_back((ui->nameLabel5_3));
    namesLabels.push_back((ui->nameLabel6_3));

    positionLabels.push_back((ui->positionLabel1_3));
    positionLabels.push_back((ui->positionLabel2_3));
    positionLabels.push_back((ui->positionLabel3_3));
    positionLabels.push_back((ui->positionLabel4_3));
    positionLabels.push_back((ui->positionLabel5_3));
    positionLabels.push_back((ui->positionLabel6_3));

    emailLabels.push_back((ui->emailLabel1_3));
    emailLabels.push_back((ui->emailLabel2_3));
    emailLabels.push_back((ui->emailLabel3_3));
    emailLabels.push_back((ui->emailLabel4_3));
    emailLabels.push_back((ui->emailLabel5_3));
    emailLabels.push_back((ui->emailLabel6_3));

    phoneLabels.push_back((ui->phoneLabel1_3));
    phoneLabels.push_back((ui->phoneLabel2_3));
    phoneLabels.push_back((ui->phoneLabel3_3));
    phoneLabels.push_back((ui->phoneLabel4_3));
    phoneLabels.push_back((ui->phoneLabel5_3));
    phoneLabels.push_back((ui->phoneLabel6_3));
}

void DisplayUsersWindow::setPositionBtn()
{
    QWidget *widget = ui->tab;
    auto words = m_api.getPositions();
    for(int i = 0; i < words.size(); i++){
        QString word = QString::fromStdString(words[i]);
        QRadioButton *radioButton = new QRadioButton(word, widget);
        ui->layoutForRadioBtns->addWidget(radioButton, i, 0);
        m_positionsBtns.push_back(radioButton);
    }
}

void DisplayUsersWindow::setInputValidators()
{
    // Create a regular expression that matches Ukrainian phone numbers
    QRegularExpression phoneRegex("^[\\+]{0,1}380([0-9]{9})$");

    // Create a validator that only allows input matching the phone number regex
    m_phoneValidator = new QRegularExpressionValidator(phoneRegex, this);
    ui->phoneInput->setValidator(m_phoneValidator);

    QRegularExpression emailRegex("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    m_emailValidator = new QRegularExpressionValidator(emailRegex, this);
    ui->emailInput->setValidator(m_emailValidator);


    QRegularExpression usernameRegex("^.{2,60}$");
    m_usernameValidator = new QRegularExpressionValidator(usernameRegex, this);
    ui->nameInput->setValidator(m_usernameValidator);

}



void DisplayUsersWindow::on_addUserBrn_clicked()
{

    //goes inside if all fields are inputed correctly
    if (checkValidators() && checkPhoto())
    {
        CURLcode res;
        std::string response;
        json result;


        m_api.sendForm(res,
                       response,
                       m_api.getToken(),
                       ui->chosenPicture->text().toStdString(),
                       ui->nameInput->text().toStdString(),
                       ui->emailInput->text().toStdString(),
                       ui->phoneInput->text().toStdString(),
                       std::to_string(chosenPositionRadioBtn)
                       );

        qDebug() << QString::fromStdString(response);
        //"{\"success\":false,\"message\":\"Invalid token. Try to get a new one by the method GET api\\/v1\\/token.\"}"
        //"{\"success\":true,\"user_id\":13328,\"message\":\"New user successfully registered\"}"
        //{  "success": false,   "message": "User with this phone or email already exist"}
    }
}

void DisplayUsersWindow::on_choosePictureBtn_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Select Photo"), QDir::homePath(), tr("JPEG Files (*.jpg *.jpeg)"));
    if (!fileName.isEmpty()) {
        QFileInfo fileInfo(fileName);
        if (fileInfo.suffix().toLower() == "jpg" || fileInfo.suffix().toLower() == "jpeg") {
            QImage image(fileName);
            if (!image.isNull() && image.width() >= 70 && image.height() >= 70 && fileInfo.size() <= 5000000) {
                // The photo is suitable
                ui->chosenPicture->setText(fileName);
            } else {
                // The photo is not suitable
                QMessageBox::critical(this, "Error", "Picture resolution should be at least 70x70px and size must not exceed 5MB.");
            }
        } else {
            // The selected file is not a JPEG or JPG image
            QMessageBox::critical(this, "Error", "The selected file is not a JPEG or JPG image.");

        }
    }

}
