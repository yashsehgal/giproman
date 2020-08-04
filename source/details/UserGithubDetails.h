#ifndef _GIPROMAN_SOURCE__USER_GITHUB_DETAILS___
#define _GIPROMAN_SOURCE__USER_GITHUB_DETAILS___

/** 
 * TODO: To specify all the online details and URLS for external code usage
*/

// const char * service_name = "github";
// const char * github_url = "https://www.github.com";
// const char * github_username = "yashsehgal";
// const char * github_email_address = "yashsehgal.work@gmail.com";
// const char * github_base_url = "https://www.github.com";
// const char * github_account_url = "https://www.github.com/yashsehgal";

class UserGithubDetails {
  private:
    const char * service_name = "github";
    const char * github_url = "https://www.github.com";
    const char * github_username = "yashsehgal";
    const char * github_email_address = "yashsehgal.work@gmail.com";
    const char * github_base_url = "https://www.github.com";
    const char * github_account_url = "https://www.github.com/yashsehgal";
  public:
  const char * get_service_name() {return service_name;}
  const char * get_github_url() {return github_url;}
  const char * get_github_username() {return github_username;}
  const char * get_github_email_address() {return github_email_address;}
  const char * get_github_base_url() {return github_base_url;}
  const char * get_github_account_url() {return github_account_url;}
};

#endif // _GIPROMAN_SOURCE__USER_GITHUB_DETAILS___