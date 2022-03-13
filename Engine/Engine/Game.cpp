#include "Game.hpp"
    
Game::Game() : window("SFML Game Engine")
{
    charTexture.loadFromFile(workingDirectory.Get() + "charSprite.png");
    charSprite.setTexture(charTexture);
}
void Game::Update() 
{
    window.Update();
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