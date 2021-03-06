#include "IndexBuffer.h"

IndexBuffer::IndexBuffer(const unsigned int index[], const unsigned& count)
    : renderer_id_(0), count_(count)
{
    GLCall(glGenBuffers(1, &renderer_id_));
    GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, renderer_id_));
    GLCall(glBufferData(GL_ELEMENT_ARRAY_BUFFER, count * sizeof(unsigned int), index, GL_STATIC_DRAW));
}

IndexBuffer::IndexBuffer(const IndexBuffer& other)
    : renderer_id_(other.renderer_id_), count_(other.count_)
{
}

IndexBuffer::~IndexBuffer()
{
    GLCall(glDeleteBuffers(1, &renderer_id_));
    unbind();
    renderer_id_= 0;
}

void IndexBuffer::bind() const
{
    GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, renderer_id_));
}

void IndexBuffer::unbind() const
{
    GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0));
}
