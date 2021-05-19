Itinerary()
{

/*Correlation comment - Do not change!  Original value='131293.415795869zHfDtAfpAHftAfcAptDAtf' Name ='userSession_1' Type ='ResponseBased'*/
	lr_think_time(10);
	
	lr_start_transaction("Itinerary_00_FirstPage");
	web_reg_save_param_regexp(
		"ParamName=userSession_1",
		"RegExp=name=\"userSession\"\\ value=\"(.*?)\"/>\\\n<table\\ border",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("Itinerary_00_FirstPage",LR_AUTO);
	
	lr_think_time(20);

	lr_start_transaction("Itinerary_01_Login");

	lr_save_string(lr_decrypt("609bb5a98267897c"), "PasswordParameter");

	web_submit_data("login.pl",
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t21.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession_1}", ENDITEM,
		"Name=username", "Value=jason", ENDITEM,
		"Name=password", "Value={PasswordParameter}", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=login.x", "Value=65", ENDITEM,
		"Name=login.y", "Value=8", ENDITEM,
		LAST);

	lr_end_transaction("Itinerary_01_Login",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("Itinerary_02_SelectItineraryButton");

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t22.inf", 
		LAST);

	lr_end_transaction("Itinerary_02_SelectItineraryButton",LR_AUTO);

	lr_think_time(80);

	lr_start_transaction("Itinerary_03_SignOff");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Ordinal=1", 
		"Snapshot=t23.inf", 
		LAST);

	lr_end_transaction("Itinerary_03_SignOff",LR_AUTO);

	return 0;
}