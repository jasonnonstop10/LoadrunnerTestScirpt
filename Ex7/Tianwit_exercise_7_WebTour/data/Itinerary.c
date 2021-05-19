Itinerary()
{

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Itinerary_01_Login");

	lr_save_string(lr_decrypt("609bb5a98267897c"), "PasswordParameter");

	lr_think_time(7);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131293.415795869zHfDtAfpAHftAfcAptDAtf", ENDITEM, 
		"Name=username", "Value=jason", ENDITEM, 
		"Name=password", "Value={PasswordParameter}", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=65", ENDITEM, 
		"Name=login.y", "Value=8", ENDITEM, 
		LAST);

	lr_end_transaction("Itinerary_01_Login",LR_AUTO);

	lr_think_time(33);

	lr_start_transaction("Itinerary_02_SelectItineraryButton");

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t22.inf", 
		LAST);

	lr_end_transaction("Itinerary_02_SelectItineraryButton",LR_AUTO);

	lr_think_time(36);

	lr_start_transaction("Itinerary_03_SignOff");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Ordinal=1", 
		"Snapshot=t23.inf", 
		LAST);

	lr_end_transaction("Itinerary_03_SignOff",LR_AUTO);

	return 0;
}