Action()
{

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	/* 01_Login */

	lr_start_transaction("TicketPurchase_01_Login");

	lr_save_string(lr_decrypt("6071110c5241ac5e"), "PasswordParameter");

	lr_think_time(13);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131067.019036047zHtVHfQpHQVzzzzHtAtfApffiHf", ENDITEM, 
		"Name=username", "Value=jason", ENDITEM, 
		"Name=password", "Value={PasswordParameter}", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=31", ENDITEM, 
		"Name=login.y", "Value=0", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_01_Login",LR_AUTO);

	/* 02_searchFlightsButton */

	lr_think_time(27);

	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	/* 03_FindFlight */

	lr_think_time(57);

	lr_start_transaction("TicketPurchase_02_FindFlight");

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Los Angeles", ENDITEM, 
		"Name=departDate", "Value=04/11/2021", ENDITEM, 
		"Name=arrive", "Value=Zurich", ENDITEM, 
		"Name=returnDate", "Value=04/12/2021", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=58", ENDITEM, 
		"Name=findFlights.y", "Value=17", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_02_FindFlight",LR_AUTO);

	/* 04_SelectFlight */

	lr_think_time(42);

	lr_start_transaction("TicketPurchase_03_SelectFlight");

	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=391;357;04/11/2021", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=64", ENDITEM, 
		"Name=reserveFlights.y", "Value=8", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_03_SelectFlight",LR_AUTO);

	/* 05_paymentDetails */

	lr_think_time(76);

	lr_start_transaction("TicketPurchase_04_paymentDetails");

	web_submit_data("reservations.pl_3", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Tianwit", ENDITEM, 
		"Name=lastName", "Value=Moungnoycharoen", ENDITEM, 
		"Name=address1", "Value=nope street ", ENDITEM, 
		"Name=address2", "Value=thai", ENDITEM, 
		"Name=pass1", "Value=Tianwit Moungnoycharoen", ENDITEM, 
		"Name=creditCard", "Value=451445", ENDITEM, 
		"Name=expDate", "Value=24/52", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value=391;357;04/11/2021", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=42", ENDITEM, 
		"Name=buyFlights.y", "Value=4", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_04_paymentDetails",LR_AUTO);

	/* 06_Logout */

	lr_think_time(47);

	lr_start_transaction("TicketPurchase_05_logout");

	web_url("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("TicketPurchase_05_logout",LR_AUTO);

	/* endTest */

	return 0;
}