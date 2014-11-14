mkdir = make directory
cd .. = back
cd <name of folder> = go to that folder

. = current directory
*.<file extension> = all files of that status

git + <command>
	CHECKERS
		init = initialize
		status = show working tree status
		log = log of commits
		branch = show existing branches
		diff = shows difference of working directory and staging area	
		remote -v = to see all remotes
		remote show = shows remote branches

	FUNCTIONS
		add = duh add (adds to staging area)
		commit -am "<message>" = "save" or take snapshot (adds to tree)
		checkout -b <name of branch> = creates new branch
		checkout <name branch> = to go to branch
		merge <branch name> = merges branch to master *merge in master dapat
		push <name of repo> <branch> = send data to somewhere from base (can only be done if same ung laman na files)
		pull = get data from somewhere to base
		
		clone <URL> = copy from internet to local
		remote add <name of repo> <URL(in lower right corner of net repo)> = make a pointer of internet repo locally
		commit --amend = amend commit if you haven't pushed it yet
		revert = issues a commit that reverts a commit previously done
		reset = deletes commit (only if not yet pushed)
		reset --merge ORIG_HEAD = before merging
		reset --hard HEAD~<number of commits before ng version na gusto mo balikan> = reset to certain version
		rm = removes files from the working tree and the index

STEPS 
1. fork
2. clone
3. remote add
3. add
4. commit
5. push
6. pull request (on net)