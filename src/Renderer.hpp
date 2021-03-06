/*
 * Renderer.hpp
 *
 *  Created on: 13 de dez de 2017
 *      Author: Casa
 */

#ifndef SRC_RENDERER_HPP_
#define SRC_RENDERER_HPP_

#include "VertexArray.hpp"
#include "IndexBuffer.hpp"
#include "VertexBuffer.hpp"
#include "Shader.hpp"
#include <GL/glew.h>
#include <csignal>
#include <string>

using std::string;

#define ASSERT(x) if (!(x)) raise(SIGABRT);  // its the most similar thing to __debugbreak() I could find
#define GLCall(x) GLClearError();\
	x;\
	ASSERT(GLLogCall(#x, __FILE__, __LINE__))



void GLClearError();
bool GLLogCall(const char *function, const char *file, int line);

class Renderer{
public:
	void Clear() const;
	void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const;
};


#endif /* SRC_RENDERER_HPP_ */
