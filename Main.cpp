// PanelManager.cpp: 定义应用程序的入口点。
//

#include "PanelManager.h"

using namespace std;

int main()
{
	int Panel;
	int Conmand;
	string Language = "null";
	cout << "Welcome to PanelManager" << endl << "Please select your language." << endl << "1.Chinese Simplified" << endl << "2.English" << endl;
	cin >> Language;
	if (Language == "1")
	{
		cout << "\033c";
		cout << "面板管理工具" << endl << "1.宝塔面板（bt.cn）" << endl << "2.1Panel（1panel.cn）" << endl;
		cin >> Panel;
		if (Panel == 1)
		{
			cout << "\033c";
			cout << "面板管理工具-宝塔面板" << endl << "1.查看工具" << endl << "2.一键安装" << endl << "3.一键卸载" ;
			cin >> Conmand;
			if (Conmand == 1)
			{
				system("bt");
			}
			if (Conmand == 2)
			{
				system("if [ -f /usr/bin/curl ];then curl -sSO https://download.bt.cn/install/install_panel.sh;else wget -O install_panel.sh https://download.bt.cn/install/install_panel.sh;fi;bash install_panel.sh ed8484bec");
			}
			if (Conmand == 3)
			{
				system("wget https://github.com/MeowsSauce/PanelManager/raw/master/src/bt-uninstall.sh");
				system("sudo sh bt-uninstall.sh");
			}
		}
		if (Panel == 2)
		{
			cout << "\033c";
			string onepanel;
			cout << "面板管理工具-1Panel" << endl << "install 一键安装";
			system("sudo 1pctl help");
			cin >> onepanel;
			if (onepanel == "install")
			{
				system("curl -sSL https://resource.fit2cloud.com/1panel/package/quick_start.sh -o quick_start.sh && sh quick_start.sh");
				system("sudo sh quick_start.sh");
			}
		}

	}

	return 0;
}
