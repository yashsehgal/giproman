'''
  This code module will check and validate all the git commands according to their system-availability, command-syntax and 
  more parameters.
  
  # TODO: To create a set of methods and functions which will deal with the command input
  # TODO: Try to write the codebase using OOP methods of development
  # TODO: Design exception handlers to handle internal, external, runtime and other types of error
'''


class GitCommandValidator:
  def __init__(self, command = None):
    self.command = command
    if not self.check_command_availability(): print("The command in empty!")
  
  def check_command_availability(self):
    if self.command != None: return True
    else: return False
  
  def authenticate_command(self):
    pass