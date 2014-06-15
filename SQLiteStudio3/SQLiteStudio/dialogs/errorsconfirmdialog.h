#ifndef ERRORSCONFIRMDIALOG_H
#define ERRORSCONFIRMDIALOG_H

#include <QDialog>

namespace Ui {
    class ErrorsConfirmDialog;
}

class ErrorsConfirmDialog : public QDialog
{
        Q_OBJECT

    public:
        explicit ErrorsConfirmDialog(QWidget *parent = 0);
        ~ErrorsConfirmDialog();

        void setErrors(const QHash<QString, QStringList>& errors);
        void setErrors(const QStringList& errors);
        void setTopLabel(const QString& text);
        void setBottomLabel(const QString& text);

    private:
        Ui::ErrorsConfirmDialog *ui;
};

#endif // ERRORSCONFIRMDIALOG_H