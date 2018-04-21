#pragma once

#include "VertexBuffer.h"
#include "VertexBufferLayout.h"

class VertexBuffer;
class VertexBufferLayout;

class VertexArray
{
private:
    unsigned int renderer_id_;

public:
    VertexArray();
    ~VertexArray();

    void add_buffer(const VertexBuffer& vertex_buffer, 
                    const VertexBufferLayout& vertex_buffer_layout) const;

    void bind() const;
    void unbind() const;
};
