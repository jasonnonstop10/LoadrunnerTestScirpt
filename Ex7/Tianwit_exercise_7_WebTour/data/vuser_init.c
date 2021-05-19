/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 1096
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_add_cookie("SRCHUID=V=2&GUID=3B03B1234532460A8C9CA6A8F33AF9A8&dmnchg=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MUID=3E85F56007C860A03B08E567067761F1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20210327; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANGV2=en; DOMAIN=c.urs.microsoft.com");

	web_url("l1.dat", 
		"URL=https://c.urs.microsoft.com/l1.dat?cw=637564127402077038&v=3&cv=9.11.19041.0&os=10.0.19042.0.0&pg=4A72F430-B40C-4D36-A068-CE33ADA5ADF9", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t29.inf", 
		LAST);

	return 0;
}