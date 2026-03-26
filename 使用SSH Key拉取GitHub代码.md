# Windows下使用SSH Key拉取GitHub代码实录（隐私信息已屏蔽）

本文记录了在Windows PowerShell下，使用SSH Key配置并拉取GitHub仓库的完整过程。为保护隐私，部分关键信息已做屏蔽处理。

---
## 7. 推送本地更改到GitHub

假设你已经在本地仓库目录下添加或修改了文件，推送操作步骤如下：

```powershell
# 1. 查看当前状态
git status

# 2. 添加所有更改到暂存区
git add .

# 3. 提交更改（填写有意义的提交信息）
git commit -m "你的提交说明"

# 4. 推送到远程仓库
git push origin master   # 或 main（根据你的分支名）
```

> 注意：如果你的主分支叫 main，请将命令中的 master 替换为 main。

---

## 8. 常见问题与建议

- 如果推送时报错，先用 `git pull origin master`（或 main）同步远程更改，再重新 push。
- 每次提交建议写清楚 commit 信息，便于后续追踪。
- 推送成功后，可在 GitHub 网页端刷新仓库查看最新内容。

---

## 1. 生成SSH Key

```powershell
ssh-keygen -t rsa -b 4096 -C "你的邮箱"   //执行这一行
Generating public/private rsa key pair.
Enter file in which to save the key (C:\Users\你的用户名/.ssh/id_rsa): 
C:\Users\你的用户名/.ssh/id_rsa already exists.
Overwrite (y/n)? 
```

> 如果提示已存在，可以选择 `n` 不覆盖，或 `y` 重新生成。

---

## 2. 查看 .ssh 目录内容

```powershell
dir $env:USERPROFILE\.ssh    //输入这一行

    目录: C:\Users\你的用户名\.ssh

Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
-a----         ...            ... config
-a----         ...           ... id_rsa
-a----         ...            ... id_rsa.pub
-a----         ...           ... known_hosts
-a----         ...            ... known_hosts.old
```

---

## 3. 查看公钥内容

```powershell
Get-Content $env:USERPROFILE\.ssh\id_rsa.pub   //输入这一行
ssh-rsa AAAA...（此处省略公钥内容）...== 用户名@主机名
```

> 复制公钥内容，添加到GitHub账号的 SSH and GPG keys。 在右上角的settings -> SSH and GPG keys -> SSH keys->New SSH key

---

## 4. 测试SSH连接

```powershell
ssh -T git@github.com  //输入这一行
The authenticity of host 'github.com (...)' can't be established.
ED25519 key fingerprint is SHA256:...（省略）...
This key is not known by any other names.
Are you sure you want to continue connecting (yes/no/[fingerprint])?
Host key verification failed.
```

> 第一次连接会提示主机验证，输入 `yes` 并回车。

---

## 5. 指定key文件测试（如有多个key）

```powershell
ssh -i $env:USERPROFILE\.ssh\id_rsa -T git@github.com  //输入这一行
ED25519 key fingerprint is SHA256:...（省略）...
This key is not known by any other names.
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes  //输入yes
Warning: Permanently added 'github.com' (ED25519) to the list of known hosts.
Hi 用户名! You've successfully authenticated, but GitHub does not provide shell access.
```

---

## 6. 克隆仓库

```powershell
git clone git@github.com:duwenlong2/cpp_primerplus_tutorial.git   //输入这一行
Cloning into 'cpp_primerplus_tutorial'...
remote: Enumerating objects: ...
remote: Counting objects: 100% (.../...), done.
remote: Compressing objects: 100% (.../...), done.
remote: Total ... (delta ...), reused ... (delta ...), pack-reused ... (from ...)
Receiving objects: 100% (.../...), done.
```

---

## 总结

1. 生成SSH Key时可直接回车使用默认路径。
2. 公钥内容要添加到GitHub账号的SSH keys。
3. 首次连接GitHub输入 `yes` 完成主机验证。
4. 看到 `You've successfully authenticated` 即表示配置成功。
5. 拉取仓库时用SSH地址即可。

如有多账号或多key需求，可进一步配置 `~/.ssh/config` 文件实现自动切换。

---
