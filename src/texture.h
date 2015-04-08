#ifndef TEXTURE_H
#define TEXTURE_H

#include "hairCommon.h"

class Texture
{
public:
    // Creates a texture containing the given image.
    void create(QImage &image, GLint magFilter, GLint minFilter);

    // Creates a black texture with the given width and height.
    void create(int width, int height, GLint magFilter, GLint minFilter);

    void bind(unsigned int textureUnit);

    void unbind(unsigned int textureUnit);

    GLuint id;

private:
    void create(const GLvoid * data, int width, int height, GLint magFilter, GLint minFilter);

};

#endif // TEXTURE_H