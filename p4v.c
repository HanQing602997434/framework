
// perforce

/*
P4服务器搭建
    p4配置: /usr/p4config/p4.configfile
    启动服务器: p4d &
    查看服务器和客户端信息: p4 info
    查看用户信息: p4 users
    查看仓库信息: p4 depots
    删除仓库: p4 depot -d name
    删除用户: p4 user -d name

通过Perforce P4V菜单的Tools -> Administration访问服务器

    在创建workspace并且映射到对应的depot之后，出现file(s) not in client view这种问题怎么解决？
        创建玩对应的工作区之后，如果出现上面的问题，就需要在工作区下添加仓库名的文件夹，才能获得
        对应仓库的权限，否则prerforce就认为工作区没有连接到仓库。

    revert其他客户端迁出文件方法
        p4 -c workspace -H HOST -u Owner revert Path\Filename
        p4 -c workspace -H WIM-20211215RMQ -u tangrongqi revert D:\PerforceProject\SecondGeneration\Content\BluePrint\Player\BP_PlayerMain.uasset
        p4 -c workspace -H -u hq revert E:\WORK\UE4Project\SecondDepot\Longevity\Source\Longevity\Longevity.Build.cs
*/
