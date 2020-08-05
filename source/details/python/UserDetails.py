'''
  This code file contains the details of the user which can be used directly by other development modules.
  It contains user details, online project management details, urls and etc.
  # TODO: To specify all the details related to user
'''

class UserDetails:
  def __init__(self):
    self.username = "yashsehgal"
    self.firstname = "yash"
    self.lastname = "sehgal"
    self.fullname = "yashsehgal"
    self.github_username = "yashsehgal"
    self.bitbucket_username = "sehgalyash"
    self.github_email_address = "yashsehgal.work@gmail.com"
    self.bitbucket_email_address = "yashsehgal.work@gmail.com"
    self.github_base_url = "https://www.github.com"
    self.github_account_url = "https://www.github.com/yashsehgal"
    self.bitbucket_base_url = "https://www.bitbucket.org"
    self.bitbucket_account_url = "https://www.bitbucket.org/sehgalyash"
    self.bitbucket_account_dashboard_url = "https://www.bitbucket.org/dashboard/overview"
    self.user_contact_number = "9826544591"
    self.user_email_addresses = ["yashsehgal.work@gmail.com", "yashsehgal.study@gmail.com", "yashsehgal24insta@gmail.com"]
    self.email_address_queue = {
      "work-email-address": self.user_email_addresses[0],
      "study-email-address": self.user_email_addresses[1],
      "general-email-address": self.user_email_addresses[2]
    }
  
  def get_username(self): return self.username
  def get_firstname(self): return self.firstname
  def get_lastname(self): return self.lastname
  def get_fullname(self): return self.fullname
  def get_github_username(self): self.github_username
  def get_bitbucket_username(self): self.bitbucket_username
  def get_bitbucket_email_address(self): self.bitbucket_email_address
  def get_github_email_address(self): self.github_email_address
  def get_github_base_url(self): return self.github_base_url
  def get_github_account_url(self): return self.github_account_url
  def get_bitbucket_base_url(self): return self.bitbucket_base_url
  def get_bitbucket_account_url(self): return self.bitbucket_account_url
  def get_bitbucket_account_dashboard_url(self): return self.bitbucket_account_dashboard_url
  def get_user_contact_number(self): return self.user_contact_number
  def get_user_email_addresses(self): return self.user_email_addresses
  def get_email_address_queue(self): return self.email_address_queue
  