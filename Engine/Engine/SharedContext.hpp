#ifndef SharedContext_hpp
#define SharedContext_hpp

#include "Input.hpp"
#include "WorkingDirectory.hpp"
#include "ResourceAllocator.hpp"
#include "Window.hpp"

class ObjectCollection;
class Raycast;
class Quadtree;

struct SharedContext
{
    Input* input;
    ObjectCollection* objects;
    WorkingDirectory* workingDir;
    ResourceAllocator<sf::Texture>* textureAllocator;
    Window* window;
    Raycast* raycast;
    ResourceAllocator<sf::Font>* fontAllocator;
    Quadtree* collisionTree;
};

#endif /* SharedContext_hpp */