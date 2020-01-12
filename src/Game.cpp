#include "Bomb.h"
#include "Game.h"
#include "Object.h"
#include "Window.h"

#include <QGraphicsRectItem>

namespace Bomberman {

    Game::Game() :
        m_MainWindow{new Window(640, 480, "Bomberman Game")}
    {
        if(m_MainWindow) {
            //m_Scene = new QGraphicsScene(0,0,640,480);
            //m_View = new QGraphicsView(m_Scene);
            m_MainWindow->show();
            //m_View->show();
        }
        else {
            qInfo() << "Cannot open the main window, exiting.";
            exit(EXIT_FAILURE);
        }
    }

    Game::~Game() {
        delete m_MainWindow;
    }

    void Game::gameLoop() {
        addBomb();
        while (m_MainWindow->isWindowOpened()) {
            /*QCoreApplication::processEvents();
            QLabel *lab;
            lab = new QLabel;
            lab->setText("abc");
            m_MainWindow->addWidget(lab);
            UnDestroyableBlock* wall = new UnDestroyableBlock(std::pair <double, double> (1.0,0.0),"nazwa");
            elements.push_back(wall);
            */


                for (Object* element : m_Elements)
                {
                    element->update();
                    element->draw();
                }
                QCoreApplication::processEvents();
        }
    }

    void Game::addBomb() {
        m_Scene = new QGraphicsScene(m_MainWindow);
        //QGraphicsRectItem *rect = new QGraphicsRectItem();
        //rect->setRect(0,0,100,100);
        //scene->addItem(rect);
        Bomb *newBomb = new Bomb({0,0}, "abc",1000000,3,this,nullptr);
        m_Elements.push_back(newBomb);
        //scene->addItem(newBomb);
        QGraphicsView *view = new QGraphicsView(m_Scene);
        view->show();
    }

    QGraphicsScene *Game::getScene() {
        return m_Scene;
    }

}