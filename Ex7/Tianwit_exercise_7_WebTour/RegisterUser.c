RegisterUser()
{
	lr_think_time(10);
	
	lr_start_transaction("RegisterUser_00_FirstPage");
	
	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);
    lr_end_transaction("RegisterUser_00_FirstPage",LR_AUTO);
    
    lr_think_time(10);
    
	lr_start_transaction("RegisterUser_01_ClickSignUpNowLink");

	lr_save_string(lr_decrypt("609bb77ce"), "PasswordParameter");

	web_url("login.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl?username=&password={PasswordParameter}&getInfo=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/home.html", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("RegisterUser_01_ClickSignUpNowLink",LR_AUTO);
	
	lr_think_time(40);

	lr_start_transaction("RegisterUser_02_CustomerProfile");

	lr_save_string(lr_decrypt("609bb77c4b0ecfb8"), "PasswordParameter");


	web_submit_form("login.pl_2",
		"Snapshot=t26.inf",
		ITEMDATA,
		"Name=username", "Value={Username}", ENDITEM,
		"Name=password", "Value={PasswordParameter}", ENDITEM,
		"Name=passwordConfirm", "Value=goon", ENDITEM,
		"Name=firstName", "Value=Tony", ENDITEM,
		"Name=lastName", "Value=Woodsome", ENDITEM,
		"Name=address1", "Value=jing chi long street", ENDITEM,
		"Name=address2", "Value=baihing China 8750", ENDITEM,
		"Name=register.x", "Value=58", ENDITEM,
		"Name=register.y", "Value=12", ENDITEM,
		LAST);

	lr_end_transaction("RegisterUser_02_CustomerProfile",LR_AUTO);

	/*lr_think_time(39);

	lr_start_transaction("RegisterUser_03_SelectContinueButton");

	web_image("button_next.gif", 
		"Src=/WebTours/images/button_next.gif", 
		"Snapshot=t27.inf", 
		LAST);

	lr_end_transaction("RegisterUser_03_SelectContinueButton",LR_AUTO);

	lr_think_time(22);

	lr_start_transaction("RegisterUser_04_SignOff");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t28.inf", 
		LAST);

	lr_end_transaction("RegisterUser_04_SignOff",LR_AUTO);*/

	return 0;
}