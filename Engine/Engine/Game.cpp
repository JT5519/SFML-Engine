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
    const int moveSpeed = 100;
    
    int xMove = 0;
    if (input.IsKeyPressed(Input::Key::Left))
    {
        xMove = -moveSpeed;
    }
    else if (input.IsKeyPressed(Input::Key::Right))
    {
        xMove = moveSpeed;
    }
    
    int yMove = 0;
    if (input.IsKeyPressed(Input::Key::Up))
    {
        yMove = -moveSpeed;
    }
    else if (input.IsKeyPressed(Input::Key::Down))
    {
        yMove = moveSpeed;
    }
    
    float xFrameMove = xMove * deltaTime;
    float yFrameMove = yMove * deltaTime;
    charSprite.setPosition(spritePos.x + xFrameMove, spritePos.y + yFrameMove);
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

void Game::CaptureInput()
{
    input.Update();
}