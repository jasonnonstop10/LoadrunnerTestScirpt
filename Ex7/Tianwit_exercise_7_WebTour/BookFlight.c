BookFlight()
{

/*Correlation comment - Do not change!  Original value='131293.383232078zHfDtADpttAfcAptcAt' Name ='userSession' Type ='ResponseBased'*/
	lr_think_time(10);
	
	lr_start_transaction("BookFlight_00_FirstPage");
	
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
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("BookFlight_00_FirstPage",LR_AUTO);
	
	lr_think_time(20);

	lr_start_transaction("BookFlight_01_LogIn");

	lr_save_string(lr_decrypt("609bb43190377578"), "PasswordParameter");

	web_submit_data("login.pl",
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t13.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value=jason", ENDITEM,
		"Name=password", "Value={PasswordParameter}", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=login.x", "Value=38", ENDITEM,
		"Name=login.y", "Value=11", ENDITEM,
		LAST);

	lr_end_transaction("BookFlight_01_LogIn",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("BookFlight_02_SelectFlightsButton");

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t14.inf", 
		LAST);

	lr_end_transaction("BookFlight_02_SelectFlightsButton",LR_AUTO);

	lr_think_time(30);

	lr_start_transaction("BookFlight_03_FindFlight");

/*Correlation comment - Do not change!  Original value='620;586;05/13/2021' Name ='outboundFlight' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=outboundFlight",
		"RegExp=name=\"outboundFlight\"\\ value=\"(.*?)\"\\ checked",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_form("reservations.pl",
		"Snapshot=t15.inf",
		ITEMDATA,
		"Name=depart", "Value={Depart}", ENDITEM,
		"Name=departDate", "Value={DepartDate}", ENDITEM,
		"Name=arrive", "Value={Arrive}", ENDITEM,
		"Name=returnDate", "Value={ArriveDate}", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=roundtrip", "Value=<OFF>", ENDITEM,
		"Name=seatPref", "Value=None", ENDITEM,
		"Name=seatType", "Value=Coach", ENDITEM,
		"Name=findFlights.x", "Value=37", ENDITEM,
		"Name=findFlights.y", "Value=5", ENDITEM,
		LAST);

	lr_end_transaction("BookFlight_03_FindFlight",LR_AUTO);

	lr_think_time(30);

	lr_start_transaction("BookFlight_04_SelectFlight");

	web_submit_form("reservations.pl_2",
		"Snapshot=t16.inf",
		ITEMDATA,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=reserveFlights.x", "Value=58", ENDITEM,
		"Name=reserveFlights.y", "Value=0", ENDITEM,
		LAST);

	lr_end_transaction("BookFlight_04_SelectFlight",LR_AUTO);

	lr_think_time(30);

	lr_start_transaction("BookFlight_05_PaymentDetails");

	web_submit_form("reservations.pl_3", 
		"Snapshot=t17.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Tianwit", ENDITEM, 
		"Name=lastName", "Value=Moungnoycharoen", ENDITEM, 
		"Name=address1", "Value=nope street ", ENDITEM, 
		"Name=address2", "Value=thai", ENDITEM, 
		"Name=pass1", "Value=Tianwit Moungnoycharoen", ENDITEM, 
		"Name=creditCard", "Value=5454545215", ENDITEM, 
		"Name=expDate", "Value=20/24", ENDITEM, 
		"Name=saveCC", "Value=on", ENDITEM, 
		"Name=buyFlights.x", "Value=44", ENDITEM, 
		"Name=buyFlights.y", "Value=1", ENDITEM, 
		LAST);

	lr_end_transaction("BookFlight_05_PaymentDetails",LR_AUTO);

	lr_think_time(110);

	lr_start_transaction("BookFlight_06_SignOff");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Ordinal=1", 
		"Snapshot=t18.inf", 
		LAST);

	lr_end_transaction("BookFlight_06_SignOff",LR_AUTO);

	return 0;
}