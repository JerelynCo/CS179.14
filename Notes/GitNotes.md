mkdir = make directory
cd .. = back
cd <name of folder> = go to that folder

. = current directory
*.<file extension> = all files of that file extension

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
		merge <target branch> = merges branch to master *merge in master dapat. You will edit the branch you are in.
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

		Head = points to latest commit you are in
		rev-parse HEAD = shows what is the id of the latest commit
		log --graph = poor attempt to show branching
		log --since last.month --until 5.days.ago or git diff
		--help = whenever we don't know what to do
		log -- [filename] = see the logs for a certain file
		**see git-rev-parse for more information -> look at Specifying revisions**
		prune = to remove the log you don't need anymore
		checkout <commit> = to check the state of the repository without the intention of changing anything.
		fetch = gets a commit from a remote repository without merging it.
		pull = fetch + merge

STEPS 
1. fork
2. clone
3. remote add
3. add
4. commit
5. push
6. pull request (on net)

Public Apology
	Take back a commit that has been published. 
	revert HEAD~5..HEAD~2 (.. refers to "to")

Politician
	to change something that is related to your commit:
		git reset [commit id]
		git commit --ammend 
	Revert vs Reset
		Reset - you change where the head points to.
	3 modes of reset:
		reset --hard = resets everything. Including your current data.
		reset --mixed
		reset --soft = resets the staging area.
	How to reset a reset?
		git reflog

	HEAD@{number} = considers the real time
	HEAD~number = considers the position in the branch





	

