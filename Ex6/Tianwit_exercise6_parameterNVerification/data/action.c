Action()
{

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("TicketPurchase_01_LogIn");

	lr_save_string(lr_decrypt("6089719a10d90b8d"), "PasswordParameter");

	lr_think_time(4);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131196.446658566zHtitVHpccftAtQApfADDf", ENDITEM, 
		"Name=username", "Value=jason", ENDITEM, 
		"Name=password", "Value={PasswordParameter}", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=38", ENDITEM, 
		"Name=login.y", "Value=13", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_01_LogIn",LR_AUTO);

	lr_think_time(15);

	lr_start_transaction("TicketPurchase_02_SelectFlightsButton");

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t10.inf", 
		LAST);

	lr_end_transaction("TicketPurchase_02_SelectFlightsButton",LR_AUTO);

	lr_think_time(25);

	lr_start_transaction("TicketPurchase_03_FindFlight");

	web_submit_form("reservations.pl", 
		"Snapshot=t11.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Portland", ENDITEM, 
		"Name=departDate", "Value=04/29/2021", ENDITEM, 
		"Name=arrive", "Value=San Francisco", ENDITEM, 
		"Name=returnDate", "Value=04/30/2021", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=findFlights.x", "Value=33", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_03_FindFlight",LR_AUTO);

	lr_think_time(12);

	lr_start_transaction("TicketPurchase_04_SelectFlight");

	web_submit_form("reservations.pl_2", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=563;90;04/29/2021", ENDITEM, 
		"Name=reserveFlights.x", "Value=29", ENDITEM, 
		"Name=reserveFlights.y", "Value=3", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_04_SelectFlight",LR_AUTO);

	lr_start_transaction("TicketPurchase_05_PaymentDetails");

	web_reg_find("Text=Thank you for booking through Web Tours.", 
		LAST);

	lr_think_time(9);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t13.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Tianwit", ENDITEM, 
		"Name=lastName", "Value=Moungnoycharoen", ENDITEM, 
		"Name=address1", "Value=nope street ", ENDITEM, 
		"Name=address2", "Value=thai", ENDITEM, 
		"Name=pass1", "Value=Tianwit Moungnoycharoen", ENDITEM, 
		"Name=creditCard", "Value=5454545215", ENDITEM, 
		"Name=expDate", "Value=20/24", ENDITEM, 
		"Name=saveCC", "Value=on", ENDITEM, 
		"Name=buyFlights.x", "Value=47", ENDITEM, 
		"Name=buyFlights.y", "Value=13", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_05_PaymentDetails",LR_AUTO);

	lr_think_time(14);

	lr_start_transaction("TicketPurchase_06_SignOff");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Ordinal=1", 
		"Snapshot=t14.inf", 
		LAST);

	lr_end_transaction("TicketPurchase_06_SignOff",LR_AUTO);

	return 0;
}