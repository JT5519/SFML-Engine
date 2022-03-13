#ifndef Game_hpp

#define Game_hpp

#include "Window.hpp"
#include "WorkingDirectory.hpp"
class Game
{
    public:
        Game();
        void Update();
        void LateUpdate();
        void Draw();
        bool IsRunning() const;
    private:
        Window window;
        WorkingDirectory workingDirectory;
        sf::Texture charTexture;
        sf::Sprite  charSprite;
};
#endif