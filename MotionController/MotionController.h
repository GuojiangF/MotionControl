// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� MOTIONCONTROLLER_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// MOTIONCONTROLLER_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef MOTIONCONTROLLER_EXPORTS
#define MOTIONCONTROLLER_API __declspec(dllexport)
#else
#define MOTIONCONTROLLER_API __declspec(dllimport)
#endif

// �����Ǵ� MotionController.dll ������
class MOTIONCONTROLLER_API CMotionController {
public:
	CMotionController(void);
	// TODO:  �ڴ�������ķ�����
};

extern MOTIONCONTROLLER_API int nMotionController;

MOTIONCONTROLLER_API int fnMotionController(void);
