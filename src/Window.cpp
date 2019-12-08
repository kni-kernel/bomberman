#include "Window.h"

Window::Window(QWidget *parent) :
    QMainWindow(parent)
{
    centralWidget = nullptr;
    verticalLayout = nullptr;
    label = nullptr;
    windowOpened = true;
    setupUi();
    addTestLabel();
}

Window::~Window()
{
    delete label;
    delete verticalLayout;
    delete centralWidget;
}

void Window::setupUi()
{
    if (objectName().isEmpty())
        setObjectName("Window");
    resize(640, 480);
    setWindowTitle(tr("Bomberman Game"));
}

void Window::addTestLabel()
{
    centralWidget = new QWidget(this);                  //documentation says central widget is necessary even if it's just a placeholder
    centralWidget->setObjectName("centralWidget");
    setCentralWidget(centralWidget);

    verticalLayout = new QVBoxLayout(centralWidget);    //layout which keeps widget nicely centered when resizing window
    verticalLayout->setObjectName("verticalLayout");

    label = new QLabel(centralWidget);                  //dummy test label with "Hello Qt World!"
    label->setObjectName("label");
    label->setText(tr("Hello Qt World!"));

    verticalLayout->addWidget(label);                           //places label in a layout
    label->setAlignment(Qt::AlignCenter);
}

void Window::closeEvent(QCloseEvent *)
{
    windowOpened = false;
}