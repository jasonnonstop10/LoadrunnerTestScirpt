Action()
{

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("TicketPurchase_01_login");

	lr_save_string(lr_decrypt("60695dd7d85a2803"), "PasswordParameter");

	lr_think_time(19);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131026.137221547zHDQzfzpQDDDDDDDtAtDHpQtVz", ENDITEM, 
		"Name=username", "Value=jason", ENDITEM, 
		"Name=password", "Value={PasswordParameter}", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=72", ENDITEM, 
		"Name=login.y", "Value=13", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_01_login",LR_AUTO);

	lr_think_time(11);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t7.inf", 
		LAST);

	lr_think_time(39);

	lr_start_transaction("TicketPurchase_02_findFlight");

	web_submit_form("reservations.pl", 
		"Snapshot=t8.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Portland", ENDITEM, 
		"Name=departDate", "Value=04/05/2021", ENDITEM, 
		"Name=arrive", "Value=Zurich", ENDITEM, 
		"Name=returnDate", "Value=04/06/2021", ENDITEM, 
		"Name=numPassengers", "Value=20", ENDITEM, 
		"Name=roundtrip", "Value=on", ENDITEM, 
		"Name=seatPref", "Value=Aisle", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=findFlights.x", "Value=56", ENDITEM, 
		"Name=findFlights.y", "Value=7", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_02_findFlight",LR_AUTO);

	lr_think_time(57);

	lr_start_transaction("TicketPurchase_03_selectFlight");

	web_submit_form("reservations.pl_2", 
		"Snapshot=t9.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=590;669;04/05/2021", ENDITEM, 
		"Name=returnFlight", "Value=953;548;04/06/2021", ENDITEM, 
		"Name=reserveFlights.x", "Value=44", ENDITEM, 
		"Name=reserveFlights.y", "Value=6", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_03_selectFlight",LR_AUTO);

	lr_think_time(208);

	lr_start_transaction("TicketPurchase_04_paymentDetails");

	web_submit_form("reservations.pl_3", 
		"Snapshot=t10.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Tianwit", ENDITEM, 
		"Name=lastName", "Value=Moungnoycharoen", ENDITEM, 
		"Name=address1", "Value=nope street ", ENDITEM, 
		"Name=address2", "Value=thai", ENDITEM, 
		"Name=pass1", "Value=Tianwit Moungnoycharoen", ENDITEM, 
		"Name=pass2", "Value=Sioned Roach", ENDITEM, 
		"Name=pass3", "Value=Ridwan Zuniga", ENDITEM, 
		"Name=pass4", "Value=Hywel Erickson", ENDITEM, 
		"Name=pass5", "Value=Dainton Drew", ENDITEM, 
		"Name=pass6", "Value=Ariya Wharton", ENDITEM, 
		"Name=pass7", "Value=Joanne Quintana", ENDITEM, 
		"Name=pass8", "Value=Lucien Legge", ENDITEM, 
		"Name=pass9", "Value=Sabrina Hart", ENDITEM, 
		"Name=pass10", "Value=Darrell Macfarlane", ENDITEM, 
		"Name=pass11", "Value=Shelbie Dejesus", ENDITEM, 
		"Name=pass12", "Value=Viaan Mayo", ENDITEM, 
		"Name=pass13", "Value=Conan Rennie", ENDITEM, 
		"Name=pass14", "Value=Carly Collins", ENDITEM, 
		"Name=pass15", "Value=Alma Wade", ENDITEM, 
		"Name=pass16", "Value=Varun Best", ENDITEM, 
		"Name=pass17", "Value=Gurveer Whittaker", ENDITEM, 
		"Name=pass18", "Value=Huda Wheatley", ENDITEM, 
		"Name=pass19", "Value=Dave Guevara", ENDITEM, 
		"Name=pass20", "Value=Lilith Boyle", ENDITEM, 
		"Name=creditCard", "Value=154545522124", ENDITEM, 
		"Name=expDate", "Value=02/24", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=66", ENDITEM, 
		"Name=buyFlights.y", "Value=7", ENDITEM, 
		LAST);

	lr_end_transaction("TicketPurchase_04_paymentDetails",LR_AUTO);

	lr_think_time(29);

	lr_start_transaction("TicketPurchase_05_logout");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Ordinal=1", 
		"Snapshot=t11.inf", 
		LAST);

	lr_end_transaction("TicketPurchase_05_logout",LR_AUTO);

	return 0;
}