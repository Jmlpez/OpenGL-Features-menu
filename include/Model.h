#ifndef MODEL_H
#define MODEL_H

#include <memory>
#include <vector>
#include <string>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include "Mesh.h"

class Model
{
public:
    Model(const std::string &path);
    ~Model();

private:
    std::vector<std::shared_ptr<Mesh>> m_Meshes;
    std::string m_FullPath, m_DirPath;

    // an optimization to avoid load some previously loaded texture
    std::vector<MeshTexture> m_LoadedTextures;

    void LoadModel(const std::string &path);
    void ProcessNode(aiNode *node, const aiScene *scene);
    std::shared_ptr<Mesh> ProcessMesh(aiMesh *mesh, const aiScene *scene);

    std::vector<MeshTexture> LoadMaterialTextures(aiMaterial *mat, aiTextureType type);

    std::vector<MeshVertex> ProcessVertices(aiMesh *mesh);
    std::vector<unsigned int> ProcessIndices(aiMesh *mesh);
    std::vector<MeshTexture> ProcessTextures(aiMesh *mesh, const aiScene *scene);

    static TEXTURE_TYPE GetTextureType(aiTextureType type);
};

#endif