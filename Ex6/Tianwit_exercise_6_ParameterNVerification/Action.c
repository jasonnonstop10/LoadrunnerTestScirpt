Action()
{

/*Correlation comment - Do not change!  Original value='131106.445605508zHtDHiHpHQfiDDDDtAtzcpHczHHf' Name ='userSession' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=userSession",
		"RegExp=name=\"userSession\"\\ value=\"(.*?)\"/>\\\n<table\\ border",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("TicketPurchase_01_logIn");

	lr_save_string(lr_decrypt("60787d8fc88c53a2"), "PasswordParameter");

	lr_think_time(6);

	web_submit_data("login.pl",
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=body",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t9.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value=jason", ENDITEM,
		"Name=password", "Value={PasswordParameter}", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=login.x", "Value=55", ENDITEM,
		"Name=login.y", "Value=18", ENDITEM,
		LAST);

	lr_end_transaction("TicketPurchase_01_logIn",LR_AUTO);

	lr_think_time(18);

	lr_start_transaction("TicketPurchase_02_selectFlightPage");

	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("TicketPurchase_02_selectFlightPage",LR_AUTO);

	lr_think_time(19);

	lr_start_transaction("TicketPurchase_03_findFlight");

	web_submit_data("reservations.pl",
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome",
		"Snapshot=t11.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=depart", "Value={Departure}", ENDITEM,
		"Name=departDate", "Value={Departure_date}", ENDITEM,
		"Name=arrive", "Value={Arrival}", ENDITEM,
		"Name=returnDate", "Value={Arrival_date}", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=seatPref", "Value=Window", ENDITEM,
		"Name=seatType", "Value=Coach", ENDITEM,
		"Name=.cgifields", "Value=roundtrip", ENDITEM,
		"Name=.cgifields", "Value=seatType", ENDITEM,
		"Name=.cgifields", "Value=seatPref", ENDITEM,
		"Name=findFlights.x", "Value=54", ENDITEM,
		"Name=findFlights.y", "Value=1", ENDITEM,
		LAST);

	lr_end_transaction("TicketPurchase_03_findFlight",LR_AUTO);

	lr_think_time(14);

	lr_start_transaction("TicketPurchase_04_selectFlight");

	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=260;586;04/17/2021", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=14", ENDITEM, 
		"Name=reserveFlights.y", "Value=6", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_04_selectFlight",LR_AUTO);

	lr_start_transaction("TicketPurchase_05_paymentDetails");

	web_reg_find("Text=Thank you for booking through Web Tours.", 
		LAST);


	lr_think_time(14);

	web_submit_data("reservations.pl_3", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Tianwit", ENDITEM, 
		"Name=lastName", "Value=Moungnoycharoen", ENDITEM, 
		"Name=address1", "Value=nope street ", ENDITEM, 
		"Name=address2", "Value=thai", ENDITEM, 
		"Name=pass1", "Value=Tianwit Moungnoycharoen", ENDITEM, 
		"Name=creditCard", "Value=5454545215", ENDITEM, 
		"Name=expDate", "Value=20/24", ENDITEM, 
		"Name=saveCC", "Value=on", ENDITEM, 
		"Name=oldCCOption", "Value=on", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=260;586;04/17/2021", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=52", ENDITEM, 
		"Name=buyFlights.y", "Value=4", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_05_paymentDetails",LR_AUTO);

	lr_think_time(24);

	lr_start_transaction("TicketPurchase_06_signOff");

	web_url("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("TicketPurchase_06_signOff",LR_AUTO);

	return 0;
}