#pragma once
#include <cassert>
#include <array>
#include <vector>
#include "Pixel.h"

class Renderer {
    public:
    // method is the core of the Template Method
    // design pattern
    void render(const vector<vector<char>> &art, PixelBuffer &buffer) const {
        // position of the upper left corner of the firework art in the buffer
        array<size_t, 2> pos = buffer.random_pos();
        render_art(pos, art, buffer);
        render_trace(pos, art, buffer);
    }
    // implementing below method in Renderer.cpp
    virtual ~Renderer();

    protected:
    virtual Pixel::Color render_color() const = 0;
    //implementing below method in Renderer.cpp
    void render_art(array<size_t, 2> pos, const vector<vector<char>> &art, PixelBuffer &buffer) const;
    // implmenting below method in Renderer.cpp
    void render_trace(array<size_t, 2> pos, const vector<vector<char>> &art, PixelBuffer &buffer) const;
};

class SolidColor : public Renderer {
    public:
    // implementing below method in Renderer.cpp
    SolidColor(Pixel::Color color);
    // implenting below method in Renderer.cpp
    ~SolidColor();
    protected:
    // implementing below method in Renderer.cpp
    Pixel::Color render_color() const;
    private:
    Pixel::Color _color = Pixel::Color::BLACK;
};

class RandomColor : public Renderer {
    public: 
    // implementing below method in Renderer.cpp
    RandomColor();
    // implementing below method in Renderer.cpp
    ~RandomColor();
    protected:
    // implementing below method in Rendere.cpp
    Pixel::Color render_color() const;
};