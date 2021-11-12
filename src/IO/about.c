/*
 * File: about.c
 *
 * Copyright (C) 1999-2007 Jorge Arellano Cid <jcid@dillo.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 */

#include <config.h>

/*
 * HTML text for startup screen
 */
const char *const AboutSplash=
"<!DOCTYPE HTML PUBLIC '-//W3C//DTD HTML 4.01 Transitional//EN'>\n"
"<html>\n"
"<head>\n"
"<title>Splash screen for dillo-" VERSION "</title>\n"
"<style>\n"
"	h1 {\n"
"		color: white;\n"
"		margin-left: 1em;\n"
"		text-align: center;\n"
"	}\n"
"	h4 {\n"
"		color: #677FFF;\n"
"		margin-left: 1em;\n"
"		text-align: center;\n"
"	}\n"
"</style>\n"
"</head>\n"
"<body bgcolor='#6980E0' text='#000000' link='#000000' vlink='#000000'>\n"
"\n"
"\n"
"<!--   the head of the page   -->\n"
"\n"
"<table width='100%' border='0' cellspacing='1' cellpadding='5'>\n"
" <tr><td>\n"
"  <table border='0' cellspacing='1' cellpadding='0'>\n"
"   <tr>\n"
"   <td>\n"
"    <table width='100%' border='0'>\n"
"    <tr>\n"
"     <td valign='top' align='left'>\n"
"      <h1>&nbsp;Welcome to Dillo " VERSION "&nbsp;</h1>\n"
"    </table>\n"
"  </table>\n"
"</table>\n"
"\n"
"<br>\n"
"\n"
"\n"
"<!-- the main layout table, definition -->\n"
"\n"
"<table width='100%' border='0' cellspacing='0' cellpadding='0'>\n"
"<tr><td valign='top' width='150' align='center'>\n"
"\n"
"\n"
"<!--   The navigation bar   -->\n"
"\n"
"<table border='0' cellspacing='0' cellpadding='0' width='140' bgcolor='#000000'>\n"
"<tr>\n"
" <td>\n"
"  <table width='100%' border='0' cellspacing='1' cellpadding='3'>\n"
"  <tr>\n"
"   <td colspan='1' bgcolor='#4F4F4F'><h4>Dillo</h4>\n"
"  <tr>\n"
"   <td bgcolor='#FFFFFF'>\n"
"    <table border='0' cellspacing='0' cellpadding='5'><tr><td>\n"
"    <table border='0' cellspacing='0' cellpadding='2'><tr>\n"
"    <td><td><a href='file:/usr/share/doc/dillo/user_help.html'>Help</a>\n"
"     <tr><td><td><a href='http://www.dillo.org/dillo3-help.html'>\n"
"     Online Help</a>\n"
"    <tr>\n"
"    <td>&nbsp;&nbsp;\n"
"    <td>\n"
"     <a href='http://www.dillo.org/'>Dillo Home</a>\n"
"    </table>\n"
"    </table>\n"
"  </table>\n"
"</table>\n"
"\n"
"<br>\n"
"\n"
"<table border='0' width='100%' cellpadding='10' cellspacing='0'><tr><td height='10'></table>\n"
"\n"
"\n"
"<!-- the main layout table, a small vertical spacer -->\n"
"\n"
"<td width='20'><td valign='top'>\n"
"\n"
"\n"
"<!--   Main Part of the page   -->\n"
"\n"
"<table border='0' cellpadding='0' cellspacing='0' align='center' bgcolor='#000000' width='100%'><tr><td>\n"
"<table border='0' cellpadding='5' cellspacing='1' width='100%'>\n"
"<tr>\n"
" <td bgcolor='#4F4F4F'>\n"
"  <h4>Free Software</h4>\n"
"<tr>\n"
" <td bgcolor='#FFFFFF'>\n"
"  <table border='0' cellspacing='0' cellpadding='5'><tr><td>\n"
"  <p>\n"
"  Dillo is a graphical web browser known for its speed and small footprint.  Dillo focuses on accessing lightweight websites.  For more common websites, Dillo limits loading of bload and advertisements.  For both speed and security, Dillo does not support Javascript</p>\n"
" <p>\n"
" <h4>Bookmarks</h4>\n"
" <p>For your convenience, your bookmarks were pre-configured with popular lightweight websites.</p>\n"
"<h4>Searching</h4>\n"
"<p>\n"
"If wanted, there is a search dialog that is available by pressing 's'.  It includes your search engines\n"
"that are defined in your dillorc file\n"
"</p>\n"
" <h5>Quick Searching</h5>\n"
" <p>You can search common sites by typing one of the following key letters, followed by a space and your search term.</p>\n"
" <p>For example, 'd pizza', will search the Duck Duck Go website for the term 'pizza'.</p>\n"
" <ul>\n"
" 	<li>d  - to search Duck Duck Go</li>\n"
" 	<li>w  - to search Wikipedia</li>\n"
" 	<li>f  - to search Free Dictionary</li>\n"
" 	<li>s  - to search Startpage</li>\n"
" 	<li>g  - to search Google</li>\n"
" 	<li>t - to search Twitter</li>\n"
" 	<li>u  - to search Unsplash</li>\n"
" 	<li>v  - to search Deviant Art</li>\n"
" </ul>\n"
" <p>To modify these quick searches, refer to this <a href='file:/usr/share/doc/dillo/user_help.html#search'>link</a>.\n"
"  </table>\n"
"</table>\n"
"</table>\n"
"\n"
"<!--   footnotes   -->\n"
"\n"
"<br><br><center>\n"
"</center>\n"
"</body>\n"
"</html>\n";

