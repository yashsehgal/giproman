'''
  This code module has a set of features and methods which will be dealing with the shell and help other programs to
  write git related commands.
  
  # TODO: To implement features for handling commands
  # TODO: To write conditional functions for executing git related commands
'''

import os as os

class GitCommandWriter:
  def __init__(self, filename, command, message):
    self.filename = filename
    self.command = command
    self.message = message
    
    os.system("git add %s" % (filename))
    os.system("git commit -m %s" % (message))
    os.system("git push -u origin master")

driver = GitCommandWriter(filename=".", command="", message="Updates.")
    # self.check_command_validity()
    
  # '''
  #   This function will check the validity of the command that the user has entered.
  #   @params: self - class scope
    
  #   method-name: check_command_validity() 
  # '''
  # def check_command_validity(self):
  #   # this function will check the command validity in git command set
  #   # if the command will be valid, it will be sent for further computation and execution processes.
  #   for words in self.command:
  #     if words == "git": self.validity = True
  #     else: self.validity = False
  