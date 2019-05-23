//C++.sublime-build
//这样子编译时搞了pause，简直完美，感谢大佬https://www.cnblogs.com/huangjiaming/p/7364004.html
//一次ctrl+shif+b选择之后，后面的ctrl+b都是那种选择下的编译选项
//LOCAL选项是-DLOCAL,同理想要define什么编译就用上什么-D什么

//如果要输出中文，要设置文件编码为GBK(下了中文包才有这个)
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
    },//不知为何，上面两种在桌面不生成.exe
    {
      "name": "RunInCommand",
      "cmd": ["cmd", "/c", "g++", "-Wall","${file}", "-o", "${file_path}/${file_base_name}", "&&", "start", "cmd", "/c", "${file_path}/${file_base_name} & echo.&pause"]
    }//没看出作用
  ]
}