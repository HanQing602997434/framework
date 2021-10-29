
// 分布式版本控制git
/*
    git：
        git是分布式管理工具，离线状态可工作
        1.版本管理有一个仓库
        2.本地也有一个仓库
        3.本地仓库之间可以相互连接，协同开发

    svn：
        svn是集中式管理工具，必须联网才能工作
        1.版本管理有一个中央服务器，可以保存所有代码，文档
        2.每一次的修改都可以提交到版本库，修改有记录，可追踪
        3.不害怕某个同事离职了，代码没有入库
        4.本地的代码流失后，可以从版本库检出
        5.多人协作，每个同事完成的工作提交到版本库，方便进行集成
        6.当我们要开发需求或者修复PR时，可以从版本库上拉出分支管理
        7.在大的企业，每次提交都可能触发一次构建，实时检查代码的质量
        8.如果构建失败了，可以自动revert掉某次提交

    命令：
        git init --bare：初始化一个裸仓库，没有代码，只有版本信息，通常远端的中央服务器使用的是裸仓库
        git init：初始化一个普通仓库，类似本地仓库，可是看见代码
        git clone 用户名@ip:/path/to：从仓库克隆代码
        ssh-keygen：如果不想输入密码，通过ssh-keygen -t rsa生成公钥，将公钥拷贝到仓库的authorized_keys文件中，就不用再输入密码了
                    ssh采用的非对称加密，（md5采用的是对称加密，两端通过同一个盐值进行加密解密）
        git pull：将代码从远端拉到工作区
        git clone：将代码从远程拉到本地仓库
        git fetch：将代码从远端拉到本地仓库
        git checkout：将代码从本地仓库拉到工作区
        git add：将代码从工作区推到暂存区
        git commit：将代码从暂存区推到本地仓库
                    git commit hello.c -m "first commit"，将hello.c提交到本地仓库并添加注释
        git push：将代码从本地仓库推到远程
        git status：查看当前目录文件状态
        git log：查询日志
                例子：commit 69d91340fcd4ba23e5e65e48eae6feb829309e17 (HEAD -> master)
                      Author: hanqing <602997434@qq.com> 提交用户信息 user <email>
                      Date:   Fri Oct 29 14:29:07 2021 +0800 提交时间
                 69d91340fcd4ba23e5e65e48eae6feb829309e17是通过提交文件 + sha1哈希算法生成的哈希值，代表某次提交
                 HEAD当前最新提交的指针，mater代表分支
        git branch：查询分支
        git config -l：查询配置信息
        git config user.name aa：修改用户名
        git config user.email bb@qq.com 修改邮箱
        git config --local l：查询本地配置信息
        git config --global user.name aa：修改全局用户名
        origin：远端仓库地址的默认别名就是origin
        git restore -S hello.c：将暂存区的提交退回工作区
        git reflog：查看简短的提交记录，并提示回退版本数
        git reset head~1：回退一个版本，相当于下面的mixed
        git reset --mixed head~1：退到工作区
        git reset --soft head~1：退到暂存区
        git reset --hard head~1：直接删除修改
        git commit --amend：修理提交，比如修改注释，将本次提交添加到上一次提交
        git rebase -i c2e9318 2fd3cd9 ：(]区间，整理本地仓库，合并多条提交记录
        git branch develop：创建分支
        git checkout develop：切换分支
*/