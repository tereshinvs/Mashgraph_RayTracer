#include "Tracer.h"

void main()
{
  CTracer tracer;
  CScene scene;

  tracer.m_pScene = &scene;
  tracer.RenderImage();
  tracer.SaveImageToFile("Result.png");
}