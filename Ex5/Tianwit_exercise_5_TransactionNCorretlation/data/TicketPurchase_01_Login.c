TicketPurchase_01_Login()
{

	lr_start_transaction("TicketPurchase_01_Login");

	web_add_cookie("SRCHUID=V=2&GUID=3B03B1234532460A8C9CA6A8F33AF9A8&dmnchg=1; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("MUID=3E85F56007C860A03B08E567067761F1; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20210327; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANGV2=th; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("MUIDB=3E85F56007C860A03B08E567067761F1; DOMAIN=ieonline.microsoft.com");

	web_url("rules.xml", 
		"URL=https://ieonline.microsoft.com/ieflipahead/ie10/rules.xml?mkt=en-US", 
		"Resource=1", 
		"RecContentType=application/xml", 
		"Referer=", 
		"Snapshot=t13.inf", 
		LAST);

	return 0;
}