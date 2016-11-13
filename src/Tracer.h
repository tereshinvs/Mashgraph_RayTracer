#pragma once

#include "glm/glm.hpp"
#include "Types.h"
#include "Scene.h"

#include "string"

class CTracer
{
public:
  SRay MakeRay(glm::uvec2 pixelPos);  // Create ray for specified pixel
  glm::vec3 TraceRay(SRay ray); // Trace ray, compute its color
  void RenderImage();
  void SaveImageToFile(std::string fileName);

public:
  SCamera m_camera;
  CScene* m_pScene;
};