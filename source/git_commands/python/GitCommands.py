

class GitCommands:
  def __init__(self):
    self.access_key_command = "git"
    self.check_status_command = "git status"
    self.add_all_files_command = "git add ."
    self.commit_files_command = "git commit -m \"Updates committed.\""
    self.push_files_command = "git push -u origin master"
    self.add_remote_command = "git remote add origin"
    
  def get_access_key_command(self): return self.access_key_command
  def get_check_status_command(self): return self.check_status_command
  def get_add_all_files_command(self): return self.add_all_files_command
  def get_commit_files_command(self): return self.commit_files_command
  def get_push_files_command(self): return self.push_files_command
  def get_add_remote_command(self): return self.add_remote_command
  