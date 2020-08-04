#ifndef _GIPROMAN_SOURCE__USER_BITBUCKET_DETAILS___
#define _GIPROMAN_SOURCE__USER_BITBUCKET_DETAILS___

/** 
 * TODO: To specify all the online details and URLS for external code usage
*/

// const char * service_name = "bitbucket";
// const char * bitbucket_url = "https://www.bitbucket.org";
// const char * bitbucket_username = "sehgalyash";
// const char * bitbucket_email_address = "yashsehgal.work@gmail.com";
// const char * bitbucket_base_url = "https://www.bitbucket.org";
// const char * bitbucket_account_url = "https://www.bitbucket.org/sehgalyash";
// const char * bitbucket_account_dashboard_url = "https://bitbucket.org/dashboard/overview";

class UserBitBucketDetails {
  private:
    const char * service_name = "bitbucket";
    const char * bitbucket_url = "https://www.bitbucket.org";
    const char * bitbucket_username = "sehgalyash";
    const char * bitbucket_email_address = "yashsehgal.work@gmail.com";
    const char * bitbucket_base_url = "https://www.bitbucket.org";
    const char * bitbucket_account_url = "https://www.bitbucket.org/sehgalyash";
    const char * bitbucket_account_dashboard_url = "https://bitbucket.org/dashboard/overview";
  public:
  const char * get_service_name() {return service_name;}
  const char * get_bitbucket_url() {return bitbucket_url;}
  const char * get_bitbucket_username() {return bitbucket_username;}
  const char * get_bitbucket_email_address() {return bitbucket_email_address;}
  const char * get_bitbucket_base_url() {return bitbucket_base_url;}
  const char * get_bitbucket_account_url() {return bitbucket_account_url;}
  const char * get_bitbucket_account_dashboard_url() {return bitbucket_account_dashboard_url;}
};

#endif // _GIPROMAN_SOURCE__USER_BITBUCKET_DETAILS___