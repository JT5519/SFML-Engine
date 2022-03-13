#ifndef Game_hpp

#define Game_hpp

#include "Window.hpp"
#include "WorkingDirectory.hpp"
#include "Input.hpp"

class Game
{
    public:
        Game();
        void Update();
        void LateUpdate();
        void Draw();
        bool IsRunning() const;
        void updateDeltaTime();
        void CaptureInput();
    private:
        Window window;
        WorkingDirectory workingDirectory;
        sf::Texture charTexture;
        sf::Sprite  charSprite;
        sf::Clock frameClock;
        float deltaTime;
        Input input;
};
#endif