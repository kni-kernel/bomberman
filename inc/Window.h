#pragma once

#include <QtWidgets>

namespace Bomberman {

    class Window : public QMainWindow {

    public:

        void setupUi();
        void closeEvent(QCloseEvent *) override;

        explicit Window( int newWidth,int newHeight, QString newWindowTitle, QWidget *parent = nullptr);

        ~Window() override;

        bool isWindowOpened() const;

    private:

        bool m_WindowOpened;
        int m_WindowHeight;
        int m_WindowWidth;
        QString m_WindowTitle;

    };

}