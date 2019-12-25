#pragma once

namespace Bomberman {

    class Window;

    class Game {

    public:

        Game();

        ~Game();

        void gameLoop();

    private:

        Window *m_MainWindow;

    };
}