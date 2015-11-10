<?php

# please replace with your Path to the vmail.inc on your uberspace
$backends['mailmgr'] = array(
    'disabled' => false,
    'name' => 'VMailMgr Server',
    'driver' => 'Vmailmgr',
    'policy' => array(),
    'params' => array(
        'vmailinc' => '/var/www/virtual/yourUsername/vmail.inc'
    ),
);
