#include <cassert>
#include <array>
#include <vector>
#include "Renderer.h"
#include "Pixel.h"

Renderer::~Renderer() {  // destructor
}
// implementation of Renderer::render_art()
void Renderer::render_art(array<size_t, 2> pos, const vector<vector<char>> &art, PixelBuffer &buffer) const {
    int startingRow = pos[1];
    int startingColumn = pos[0];
    for (int i = 0; i < art.size(); ++i) {  // for loop integrating firework art to randomly generated position on canvas
        for (int j = 0; j < art[0].size(); ++j) {
            if ((i + startingRow < 20) && (j + startingColumn < 60)) {  // bounds created to print on canvas
                array<size_t, 2> position {static_cast<unsigned long long>(j + startingColumn), static_cast<unsigned long long>(i + startingRow)};
                buffer.set(position, Pixel(art[i][j], render_color()));
            }
        }
    }
}
// implementation of Renderer::render_trace()
void Renderer::render_trace(array<size_t, 2> pos, const vector<vector<char>> &art, PixelBuffer &buffer) const {
    char slash;
    int traceDirection;
    int startingTraceRow = pos[1] + art.size();
    int startingTraceColumn = pos[0] + (art[0].size() / 2);
    if (startingTraceColumn < 30) {  // condition for trace direction
        slash = '\\';
        traceDirection = 1;
    }
    else if (startingTraceColumn > 30) {
        slash = '/';
        traceDirection = -1;
    }
    else {
        slash = '|';
        traceDirection = 0;
    }
    for (int i = startingTraceRow; i < 20; ++i) {
        if ((i < 20) && (startingTraceColumn < 60)) {
            array<size_t, 2> position {static_cast<unsigned long long>(startingTraceColumn), static_cast<unsigned long long>(i)};
            buffer.set(position, Pixel(slash, render_color()));
            startingTraceColumn += traceDirection;
        }
    }
}

SolidColor::SolidColor(Pixel::Color color) {  // implementation of SolidColor methods
    _color = color;
}

SolidColor::~SolidColor() {
}

Pixel::Color SolidColor::render_color() const {
    return _color;
}

RandomColor::RandomColor() {
}

RandomColor::~RandomColor() {
}

Pixel::Color RandomColor::render_color() const {  // implementation of RandomColor method
    return Pixel::random_color();
}