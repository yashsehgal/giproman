#ifndef _GIPROMAN_SOURCE__GIT_COMMANDS__GIT_COMMANDS___
#define _GIPROMAN_SOURCE__GIT_COMMANDS__GIT_COMMANDS___

class GitCommands {
  private:
  const char * access_key_command = "git";
  const char * check_status_command = "git status";
  const char * add_all_files_command = "git add";
  const char * commit_files_command = "git commit -m \"Updates commited.\"";
  const char * push_files_command = "git push -u origin master";
  const char * add_remote_command = "git remote add origin";
  public:
  const char * get_access_key_command() {return access_key_command;}
  const char * get_check_status_command() {return check_status_command;}
  const char * get_add_all_files_command() {return add_all_files_command;}
  const char * get_push_files_command() {return push_files_command;}
  const char * get_add_remote_command() {return add_remote_command;}
};

#endif // _GIPROMAN_SOURCE__GIT_COMMANDS__GIT_COMMANDS___