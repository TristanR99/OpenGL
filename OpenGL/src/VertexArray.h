#pragma once

#include "vertexBuffer.h"
#include "VertexBufferLayout.h"
class VertexArray {
private:
	unsigned int m_RenderedID;

public:
	VertexArray();
	~VertexArray();

	void AddBuffer(const VertexBuffer& vb, const VertexBufferLayout& layout);

	void Bind() const;
	void UnBind() const;
};
