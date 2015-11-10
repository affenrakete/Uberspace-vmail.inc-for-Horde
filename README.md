# Uberspace-vmail.inc-for-Horde
This is a modified and shortened vmail.inc file that provides you with Password Changing abilities in Horde Applications that are deployed on a uberspace (uberspace.de).

This Code is inspiried by the php code of "NICHDU" (https://gist.github.com/nichdu/9047330).

For using this with simply place the vmail.inc from here on your uberspace and modify the backend.local.php of your passwd component like it's shown here.
After that kill php-cgi and try it. Everything should work directly.

This vmail.inc file is ONLY working for Horde Installations on an uberspace and ist ONLY able to change your password. All other functions of a "normal" vmail.inc file are not included! It provides only the vchpass function that is used/needed by horde.
