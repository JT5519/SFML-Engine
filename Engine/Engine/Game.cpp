#include "Game.hpp"
    
Game::Game() : window("SFML Game Engine")
{

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
    //draw code
    window.EndDraw();
}
bool Game::IsRunning() const
{
    return window.IsOpen();
}