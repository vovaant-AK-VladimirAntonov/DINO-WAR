#include <iostream>
#include <cassert>
#include <SFML/Graphics/Texture.hpp>
#include "AssetManager.hpp"

AssetManager* AssetManager::sInstance = nullptr;

AssetManager::AssetManager()
{
    // Разрешить существование только одного AssetManager
    // В противном случае сгенерировать исключение

    sInstance = this;
}
sf::Texture& AssetManager::GetTexture(std::string const& filename)
{
    auto& texMap = sInstance->m_Textures;

    auto pairFound = texMap.find(filename);

    if (pairFound != texMap.end())
    {
        return pairFound->second;
    }
    else
    {
        auto& texture = texMap[filename];
        texture.loadFromFile(filename);
        return texture;
    }

}
