#ifndef TEST_CLEAR_COLOR_H
#define TEST_CLEAR_COLOR_H

#include "Test.h"

namespace Test
{

    class TestClearColor : public Test
    {

    public:
        TestClearColor();
        ~TestClearColor();

        void OnUpdate() override;
        void OnRender() override;
        void OnImGuiRender() override;

    private:
        float m_ClearColor[4];
    };
}
#endif