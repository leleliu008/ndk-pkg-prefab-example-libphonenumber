#include <string>
#include <iostream>

#include <phonenumbers/phonenumberutil.h>
#include <phonenumbers/phonenumber.pb.h>

using namespace i18n::phonenumbers;

#include"app.h"

extern "C" JNIEXPORT jint JNICALL Java_com_fpliu_android_ndk_pkg_prefab_example_libphonenumber_MainActivity_test(JNIEnv *env, jobject obj) {
    PhoneNumberUtil *phone_util_ = PhoneNumberUtil::GetInstance();
    PhoneNumber test_number;
    string formatted_number;
    test_number.set_country_code(1);
    test_number.set_national_number(6502530000ULL);
    phone_util_->Format(test_number, PhoneNumberUtil::E164, &formatted_number);

    if (formatted_number == "+16502530000") {
        return 1;
    } else {
        return 0;
    }
}
