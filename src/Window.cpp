#include "Window.h"

namespace Bomberman {

    Window::Window(int newWidth, int newHeight, QString newWindowTitle, QWidget *parent) :
        QMainWindow{parent},
        m_WindowOpened{true},
        m_WindowWidth{newWidth},
        m_WindowHeight{newHeight},
        m_WindowTitle{std::move(newWindowTitle)}
    {
        setupUi();
    }

    Window::~Window() = default;

    void Window::setupUi() {
        if (objectName().isEmpty())
            setObjectName("Window");
        resize(m_WindowWidth, m_WindowHeight);
        setWindowTitle(tr(qPrintable(m_WindowTitle)));
    }

    void Window::closeEvent(QCloseEvent *) {
        m_WindowOpened = false;
    }

    bool Window::isWindowOpened() const {
        return m_WindowOpened;
    }

}