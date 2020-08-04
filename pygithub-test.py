from github import Github

git_account = Github("yashsehgal", "gitcode24")

repositories = git_account.search_repositories(query="language:c++")

# printing all the repositories
for repo in git_account.get_user().get_repos():
  print(repo.name)