'''
  This user details and URL used in the codebase should not be changed throughout the program execution.
  Also Python does not have any Constant Built-in feature, thus it is needed to one by our own.
  
  This file will be used by all the code modules which will be using Constant Methods
  # TODO: To design a constant datatype method.
  # TODO: To apply exception handlers to handle runtime and execution time error.
'''

class ConstantValue:
  class ConstError(TypeError): pass
  def __setattr__(self, memory_object_name, memory_object_value):
    if self.__dict__.has_key(memory_object_name):
      raise self.ConstError + "Cannot rebind constant values (%s)" % (memory_object_name)
    self.__dict__[memory_object_name] = memory_object_value
    

# setting up the constant class method for const declaration of objects by various code modules
import sys as sys
sys.modules[__name__] = ConstantValue()
