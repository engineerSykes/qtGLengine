#include <cassert>
#include "MyGLWindow.h"
#include <c:\cppLibs\glew-1.13.0\include\GL\glew.h>


void MyGLWindow::initializeGL()
{
	GLenum errorCode = glewInit();
	assert(errorCode == 0);

	glGenBuffers(1, &vertexBufferID);
	glBindBuffer(GL_ARRAY_BUFFER, vertexBufferID);

	float verts[] = { +0.0f,+0.1f
					,-0.1f,-0.1f
					,+0.1f,-0.1f };

	glBufferData(GL_ARRAY_BUFFER, sizeof(verts), verts, GL_STATIC_DRAW);

}

void MyGLWindow::paintGL()
{

}

void MyGLWindow::myUpdate()
{

}
