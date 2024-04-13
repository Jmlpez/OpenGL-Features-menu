#include "TestDepthBuffer.h"
#include "imgui/imgui.h"

namespace Test
{
    TestDepthBuffer::TestDepthBuffer()
    {
        //----------------- BOX -------------------//

        std::vector<MeshVertex> vertices{
            {glm::vec3(-0.5f, -0.5f, -0.5f), glm::vec2(0.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, -0.5f, -0.5f), glm::vec2(1.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, 0.5f, -0.5f), glm::vec2(1.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, 0.5f, -0.5f), glm::vec2(1.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, 0.5f, -0.5f), glm::vec2(0.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, -0.5f, -0.5f), glm::vec2(0.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, -0.5f, 0.5f), glm::vec2(0.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, -0.5f, 0.5f), glm::vec2(1.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, 0.5f, 0.5f), glm::vec2(1.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, 0.5f, 0.5f), glm::vec2(1.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, 0.5f, 0.5f), glm::vec2(0.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, -0.5f, 0.5f), glm::vec2(0.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, 0.5f, 0.5f), glm::vec2(1.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, 0.5f, -0.5f), glm::vec2(1.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, -0.5f, -0.5f), glm::vec2(0.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, -0.5f, -0.5f), glm::vec2(0.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, -0.5f, 0.5f), glm::vec2(0.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, 0.5f, 0.5f), glm::vec2(1.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, 0.5f, 0.5f), glm::vec2(1.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, 0.5f, -0.5f), glm::vec2(1.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, -0.5f, -0.5f), glm::vec2(0.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, -0.5f, -0.5f), glm::vec2(0.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, -0.5f, 0.5f), glm::vec2(0.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, 0.5f, 0.5f), glm::vec2(1.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, -0.5f, -0.5f), glm::vec2(0.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, -0.5f, -0.5f), glm::vec2(1.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, -0.5f, 0.5f), glm::vec2(1.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, -0.5f, 0.5f), glm::vec2(1.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, -0.5f, 0.5f), glm::vec2(0.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, -0.5f, -0.5f), glm::vec2(0.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, 0.5f, -0.5f), glm::vec2(0.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, 0.5f, -0.5f), glm::vec2(1.0f, 1.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, 0.5f, 0.5f), glm::vec2(1.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(0.5f, 0.5f, 0.5f), glm::vec2(1.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, 0.5f, 0.5f), glm::vec2(0.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(-0.5f, 0.5f, -0.5f), glm::vec2(0.0f, 1.0), glm::vec3(0.0f)},
        };

        std::vector<MeshTexture> textures{
            {"res/images/marble.jpg", Texture_Type::DIFFUSE},
        };
        std::vector<unsigned int> indices;

        m_Box = std::make_shared<Mesh>(vertices, indices, textures);
        //----------------- PLANE -------------------//
        vertices = std::vector<MeshVertex>{
            {glm::vec3(5.0f, -0.5f, 5.0f), glm::vec2(2.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(-5.0f, -0.5f, 5.0f), glm::vec2(0.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(-5.0f, -0.5f, -5.0f), glm::vec2(0.0f, 2.0f), glm::vec3(0.0f)},
            {glm::vec3(5.0f, -0.5f, 5.0f), glm::vec2(2.0f, 0.0f), glm::vec3(0.0f)},
            {glm::vec3(-5.0f, -0.5f, -5.0f), glm::vec2(0.0f, 2.0f), glm::vec3(0.0f)},
            {glm::vec3(5.0f, -0.5f, -5.0f), glm::vec2(2.0f, 2.0), glm::vec3(0.0f)},
        };
        std::vector<MeshTexture> texturesFloor{
            {"res/images/metal.png", Texture_Type::DIFFUSE},
        };
        m_Floor = std::make_shared<Mesh>(vertices, indices, texturesFloor);

        m_NormalShader = std::make_shared<Shader>("res/shaders/advanced-opengl/depth-test/basic.vert", "res/shaders/advanced-opengl/depth-test/basic.frag");
        m_SingleColorShader = std::make_shared<Shader>("res/shaders/advanced-opengl/depth-test/basic.vert", "res/shaders/advanced-opengl/depth-test/single-color.frag");

        //----------------- DEPTH TESTING -------------------//
        GLCall(glEnable(GL_DEPTH_TEST));
        GLCall(glDepthFunc(GL_LESS));

        //----------------- STENCIL TEST -------------------//
        GLCall(glEnable(GL_STENCIL_TEST));
    }
    TestDepthBuffer::~TestDepthBuffer()
    {
    }

    void TestDepthBuffer::OnUpdate(float deltaTime, FreeCameraController *cameraController)
    {
        (void)deltaTime;
        m_NormalShader->Bind();
        m_NormalShader->SetBool("uShowDepthValue", showDepthValue);

        glm::mat4 model = glm::mat4(1.0f);
        m_NormalShader->SetMat4("uModel", model);
        cameraController->GetCamera()->SetViewProjMatrix(*m_NormalShader);
        m_NormalShader->Unbind();

        m_SingleColorShader->Bind();
        m_SingleColorShader->SetMat4("uModel", model);
        cameraController->GetCamera()->SetViewProjMatrix(*m_SingleColorShader);
        m_SingleColorShader->Unbind();
    }
    void TestDepthBuffer::OnRender()
    {
        Renderer renderer;
        GLCall(glEnable(GL_DEPTH_TEST));
        GLCall(glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE));

        GLCall(glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT));

        {
            GLCall(glStencilMask(0x00));
            renderer.Draw(m_Floor, *m_NormalShader);
        }
        {
            //----------------- DRAW TWO BOXES NORMALY -------------------//
            GLCall(glStencilFunc(GL_ALWAYS, 1, 0xFF)); // all fragments pass the stencil test
            GLCall(glStencilMask(0xFF));               // enable writing to the stencil buffer

            m_NormalShader->Bind();
            glm::mat4 model = glm::mat4(1.0f);
            model = glm::translate(model, glm::vec3(-1.0f, 0.0f, -1.0f));
            m_NormalShader->SetMat4("uModel", model);
            renderer.Draw(m_Box, *m_NormalShader);

            model = glm::translate(glm::mat4(1.0f), glm::vec3(2.0f, 0.0f, 0.0f));
            m_NormalShader->Bind();
            m_NormalShader->SetMat4("uModel", model);
            renderer.Draw(m_Box, *m_NormalShader);
        }
        {
            GLCall(glStencilFunc(GL_NOTEQUAL, 1, 0xFF));
            GLCall(glStencilMask(0x00));      // disable writing to the stencil buffer
            GLCall(glDisable(GL_DEPTH_TEST)); // is just for the depth-testing to pass

            m_SingleColorShader->Bind();

            glm::vec3 scaleValue = glm::vec3(1.0f) + m_OutlineWidth;

            glm::mat4 model = glm::mat4(1.0f);
            model = glm::translate(glm::mat4(1.0f), glm::vec3(-1.0f, 0.0f, -1.0f));
            model = glm::scale(model, scaleValue);
            m_SingleColorShader->SetMat4("uModel", model);
            renderer.Draw(m_Box, *m_SingleColorShader);

            model = glm::translate(glm::mat4(1.0f), glm::vec3(2.0f, 0.0f, 0.0f));
            model = glm::scale(model, scaleValue);
            m_SingleColorShader->Bind();
            m_SingleColorShader->SetMat4("uModel", model);
            renderer.Draw(m_Box, *m_SingleColorShader);

            // Reset Stencil Buffer state
            GLCall(glStencilFunc(GL_ALWAYS, 1, 0xFF));
            GLCall(glStencilMask(0xFF));
            GLCall(glEnable(GL_DEPTH_TEST));
        }
    }
    void TestDepthBuffer::OnImGuiRender()
    {
        ImGui::Checkbox("Linear z-depth", &showDepthValue);
        ImGui::DragFloat("Outline Width", &m_OutlineWidth, 0.001f, 0.01f, 0.2f);
    }

}