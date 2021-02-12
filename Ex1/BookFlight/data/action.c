Action()
{

	web_add_auto_header("Accept", 
		"text/html, application/xhtml+xml, image/jxr, */*");

	web_add_cookie("SRCHUID=V=2&GUID=4EC07A106A1A4765A229727A09910F6C&dmnchg=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MUID=01B2970A243B66E221789864258467C1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MUIDB=01B2970A243B66E221789864258467C1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20200602; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHUID=V=2&GUID=4EC07A106A1A4765A229727A09910F6C&dmnchg=1; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("MUID=01B2970A243B66E221789864258467C1; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("MUIDB=01B2970A243B66E221789864258467C1; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20200602; DOMAIN=ieonline.microsoft.com");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.7,th;q=0.3");

	web_add_auto_header("UA-CPU", 
		"AMD64");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64; Trident/7.0; rv:11.0) like Gecko");

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://c.urs.microsoft.com/l1.dat?v=3&cv=9.11.19041.0&os=10.0.19041.0.0&pg=4A72F430-B40C-4D36-A068-CE33ADA5ADF9", "Referer=", ENDITEM, 
		"Url=https://ieonline.microsoft.com/iedomainsuggestions/ie11/suggestions.th-TH", "Referer=", ENDITEM, 
		"Url=https://ieonline.microsoft.com/ieflipahead/ie10/rules.xml?mkt=th-TH", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("fwlink", 
		"URL=https://go.microsoft.com/fwlink/?LinkID=401135", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("01_login");

	web_add_auto_header("Accept", 
		"text/html, application/xhtml+xml, image/jxr, */*");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.7,th;q=0.3");

	web_add_header("Cache-Control", 
		"no-cache");

	lr_think_time(110);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=130592.732685298zHVHDzDpziHftADAtpVicVcf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=57", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		LAST);

	lr_end_transaction("01_login",LR_AUTO);

	lr_think_time(18);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_auto_header("Cache-Control", 
		"no-cache");

	lr_think_time(14);

	web_submit_form("reservations.pl", 
		"Snapshot=t6.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=02/02/2021", ENDITEM, 
		"Name=arrive", "Value=Frankfurt", ENDITEM, 
		"Name=returnDate", "Value=02/03/2021", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=on", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=55", ENDITEM, 
		"Name=findFlights.y", "Value=11", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t7.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=010;386;02/02/2021", ENDITEM, 
		"Name=returnFlight", "Value=100;386;02/03/2021", ENDITEM, 
		"Name=reserveFlights.x", "Value=47", ENDITEM, 
		"Name=reserveFlights.y", "Value=8", ENDITEM, 
		LAST);

	lr_start_transaction("02_purchase");

	web_revert_auto_header("Cache-Control");

	web_add_header("Cache-Control", 
		"no-cache");

	lr_think_time(45);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t8.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=1234567890", ENDITEM, 
		"Name=expDate", "Value=12", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=54", ENDITEM, 
		"Name=buyFlights.y", "Value=9", ENDITEM, 
		LAST);

	lr_end_transaction("02_purchase",LR_AUTO);

	lr_think_time(5);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Ordinal=1", 
		"Snapshot=t9.inf", 
		LAST);

	return 0;
}