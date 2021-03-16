#include "CLR_World3D_Types.hpp"
#include "GLW_GlmHeaders.hpp"
#include <stdexcept>

namespace renderer
{
	namespace controllers
	{
		namespace world3D
		{
			Camera::Camera(glm::vec3 pos)
			{
				Pos = pos;
				up = glm::vec3(0.0, 1.0, 0.0);
				lookAt = glm::vec3(0.0, 0.0, 0.0);
			}

			Camera::Camera()
			{
				Pos = glm::vec3(0.0, 0.0, 0.0);
				up = glm::vec3(0.0, 1.0, 0.0);
				lookAt = glm::vec3(0.0, 0.0, 0.0);
			}

			BlockMesh::BlockMesh(wrapperGL::TextureID& tID) : textureID(tID.id)
			{

			}

			BlockMesh::BlockMesh(wrapperGL::TextureID& tID, unsigned char t) : textureID(tID.id), visible(t) 
			{
			
			}
		}
	}

}
