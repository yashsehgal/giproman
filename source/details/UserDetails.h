#ifndef _GIPROMAN_SOURCE__USER_DETAILS___
#define _GIPROMAN_SOURCE__USER_DETAILS___

/** 
 * This code file contains the details of the user which can be used directly by other development modules.
 * It contains user details, online project management details, urls and etc.
 * 
 * TODO: To specify all the details related to user
*/

// const char * username = "yashsehgal";
// const char * firstname = "yash";
// const char * lastname = "sehgal";
// const char * fullname = "yashsehgal";
// const char * github_username = "yashsehgal";
// const char * bitbucket_username = "sehgalyash";
// const char * github_email_address = "yashsehgal.work@gmail.com";
// const char * bitbucket_email_address = "yashsehgal.work@gmail.com";
// const char * github_base_url = "https://www.github.com";
// const char * github_account_url = "https://www.github.com/yashsehgal";
// const char * bitbucket_base_url = "https://www.bitbucket.org";
// const char * bitbucket_account_url = "https://www.bitbucket.org/sehgalyash";
// const char * bitbucket_account_dashboard_url = "https://bitbucket.org/dashboard/overview";
// const char * user_contact_number = "9826544591";
// const char * user_email_addresses[] = {"yashsehgal.work@gmail.com",
//                                        "yashsehgal.study@gmail.com",
//                                        "yashsehgal24insta@gmail.com"};

class UserDetails {
  private:
    const char * username = "yashsehgal";
    const char * firstname = "yash";
    const char * lastname = "sehgal";
    const char * fullname = "yashsehgal";
    const char * github_username = "yashsehgal";
    const char * bitbucket_username = "sehgalyash";
    const char * github_email_address = "yashsehgal.work@gmail.com";
    const char * bitbucket_email_address = "yashsehgal.work@gmail.com";
    const char * github_base_url = "https://www.github.com";
    const char * github_account_url = "https://www.github.com/yashsehgal";
    const char * bitbucket_base_url = "https://www.bitbucket.org";
    const char * bitbucket_account_url = "https://www.bitbucket.org/sehgalyash";
    const char * bitbucket_account_dashboard_url = "https://bitbucket.org/dashboard/overview";
    const char * user_contact_number = "9826544591";
    const char * user_email_addresses[3] = {"yashsehgal.work@gmail.com", "yashsehgal.study@gmail.com", "yashsehgal24insta@gmail.com"};
  public:
  const char * get_username() {return username;}
  const char * get_firstname() {return firstname;}
  const char * get_lastname() {return lastname;}
  const char * get_fullname() {return fullname;}
  const char * get_github_username() {return github_username;}
  const char * get_bitbucket_username() {return bitbucket_username;}
  const char * get_github_email_address() {return github_base_url;}
  const char * get_bitbucket_email_address() {return bitbucket_email_address;}
  const char * get_github_base_url() {return github_base_url;}
  const char * get_github_account_url() {return github_account_url;}
  const char * get_bitbucket_base_url() {return bitbucket_base_url;}
  const char * get_bitbucket_account_url() {return bitbucket_account_url;}
  const char * get_bitbucket_account_dashboard_url() {return bitbucket_account_dashboard_url;}
  const char * get_user_contact_number() {return user_contact_number;}
  const char * get_user_email_addresses() {return *user_email_addresses;}
};

#endif // _GIPROMAN_SOURCE__USER_DETAILS___
