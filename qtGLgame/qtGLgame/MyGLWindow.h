#pragma once
#include <QtOpenGL\qgl.h>
#include <QtCore\qtimer.h>


class MyGLWindow : QGLWidget
{
	Q_OBJECT;

	QTimer myTimer;
	GLuint vertexBufferID;
protected:
	void initializeGL();
	void paintGL();

private slots:
	void myUpdate();

};

