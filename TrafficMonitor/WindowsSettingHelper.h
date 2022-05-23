#pragma once
class CWindowsSettingHelper
{
public:
    static bool IsWindows10LightTheme();				//判断Windows是否为浅色主题
    static void CheckWindows10LightTheme();
    static bool IsDotNetFramework4Point5Installed();	//判断是否安装了.Net Framework 4.5 (https://docs.microsoft.com/zh-cn/dotnet/framework/migration-guide/how-to-determine-which-versions-are-installed)

    //Windows11相关设置
    static bool IsTaskbarSearchBtnShown();              //任务栏是否显示了“搜索”按钮
    static bool IsTaskbarTaskViewBtnShown();            //任务栏是否显示了“任务视图”按钮
    static bool IsTaskbarWidgetsBtnShown();             //任务栏是否显示了“小组件”按钮
    static bool IsTaskbarChartBtnShown();               //任务栏是否显示了“聊天”按钮
    static bool IsTaskbarCenterAlign();                  //任务栏是否居中

private:
    static LONG GetDWORDRegKeyData(HKEY hKey, const wstring& strValueName, DWORD& dwValueData);
    static bool GetDWORDRegKeyData(HKEY keyParent, const wstring& strKeyName, const wstring& strValueName, DWORD& dwValueData);

private:
    static 	bool m_light_theme;
};

