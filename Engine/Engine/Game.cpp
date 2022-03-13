#include "Game.hpp"
    
Game::Game() : window("SFML Game Engine")
{
    charTexture.loadFromFile(workingDirectory.Get() + "charSprite.png");
    charSprite.setTexture(charTexture);
    deltaTime = frameClock.restart().asSeconds();
}
void Game::Update() 
{
    window.Update();
    const sf::Vector2f& spritePos = charSprite.getPosition();
    const int pixelsToMovePerSec = 100;
    const float frameMovement = pixelsToMovePerSec * deltaTime;
    charSprite.setPosition(spritePos.x + frameMovement, spritePos.y);
}
void Game::LateUpdate() 
{

}
void Game::Draw()
{
    window.BeginDraw();
    window.Draw(charSprite);
    window.EndDraw();
}
bool Game::IsRunning() const
{
    return window.IsOpen();
}

void Game::updateDeltaTime()
{
    deltaTime = frameClock.restart().asSeconds();
}