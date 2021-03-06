#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "transform.h"
#include "mesh.h"
#include "Shader.h"
#include "texture.h"

class GameObject {
public:
	GameObject(Mesh mesh, Shader shader, Texture texture, Camera cam);
	//virtual ~GameObject();

	//Getter
	Transform* getTransform() { return &transform; }
	//Mesh* getMesh() { return &mesh; }
	Texture* getTexture() { return &texture; }

	void Update(float deltaTime);

private:
	Transform transform;
	Mesh mesh;
	Shader shader;
	Texture texture;
	Camera camera;
};
#endif // !GAMEOBJECT_H
