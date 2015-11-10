<?php

function vchpass($domain, $password, $username, $newpass){
if ($domain=="") return array(1, "Empty domain");
if ($password=="") return array(1, "Empty domain password");
if ($username=="") return array(1, "Empty username");
if ($newpass=="") return array(1, "Empty new password");
$mbox = imap_open("{localhost:993/imap/ssl/novalidate-cert}", $username.'@'.$domain, $password);
		if($mbox != false) {
			//login working, change password
			$descriptorspec = array(
                            0 => array("pipe", "r")
                        );
                        $strPassword = utf8_decode($newpass);
                        $strCommand = 'vpasswd ' . $username;
			$process = proc_open($strCommand, $descriptorspec, $pipes, NULL, NULL);

                        if(is_resource($process)) {
                            fwrite($pipes[0], $strPassword);
                            fclose($pipes[0]);
                            $return_value = proc_close($process);
                            if($return_value == 0) {
                                //successfull, return empty array
                                return array();	
                            }
                        }
                }
                //not successfull, return array with something in it (horde won't care what content)
                return array(1, 2);


}
?>
