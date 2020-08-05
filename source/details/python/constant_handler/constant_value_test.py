class ConstantValue:
  class ConstError(TypeError): pass
  def __setattr__(self, memory_object_name, memory_object_value):
    if self.__dict__.has_key(memory_object_name):
      raise self.ConstError + "Cannot rebind constant values (%s)" % (memory_object_name)
    self.__dict__[memory_object_name] = memory_object_value
    

# setting up the constant class method for const declaration of objects by various code modules
import sys as sys
sys.modules[__name__] = ConstantValue()

constant = ConstantValue()
constant.number = 0
print("before const change> %s" % (constant.number))
constant.number = 1
# testing false usage to execute exception handler