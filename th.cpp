//C++.sublime-build
//�����ӱ���ʱ����pause����ֱ��������л����https://www.cnblogs.com/huangjiaming/p/7364004.html
//һ��ctrl+shif+bѡ��֮�󣬺����ctrl+b��������ѡ���µı���ѡ��
//LOCALѡ����-DLOCAL,ͬ����Ҫdefineʲô���������ʲô-Dʲô

//���Ҫ������ģ�Ҫ�����ļ�����ΪGBK(�������İ��������)
{
  // "encoding": "utf-8",
  "encoding": "GBK",
  "working_dir": "$file_path",
  "shell_cmd": "g++ -std=c++11 -Wall \"$file_name\" -o \"$file_base_name\"",
  "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
  "selector": "source.c,source.c++",
  "variants":
  [
  	{
    	"name": "Run",
    	"shell_cmd": "g++ -std=c++11 -Wall -fexec-charset=GBK \"$file\" -o \"$file_base_name\" && start cmd /c \"\"${file_path}/${file_base_name}\" & pause\""
    },
  	{
    	"name":"Run local",
    	"shell_cmd": "g++ -std=c++11 -Wall -DLOCAL  \"$file\" -o \"$file_base_name\" && start cmd /c \"\"${file_path}/${file_base_name}\" & pause\""
    },//��֪Ϊ�Σ��������������治����.exe
    {
      "name": "RunInCommand",
      "cmd": ["cmd", "/c", "g++", "-Wall","${file}", "-o", "${file_path}/${file_base_name}", "&&", "start", "cmd", "/c", "${file_path}/${file_base_name} & echo.&pause"]
    }//û��������
  ]
}