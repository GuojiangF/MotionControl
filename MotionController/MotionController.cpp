// MotionController.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "MotionController.h"


// 这是导出变量的一个示例
MOTIONCONTROLLER_API int nMotionController=0;

// 这是导出函数的一个示例。
MOTIONCONTROLLER_API int fnMotionController(void)
{
    return 0;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 MotionController.h
CMotionController::CMotionController()
{
    return;
}
