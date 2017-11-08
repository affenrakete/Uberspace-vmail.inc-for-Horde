<?php

# please replace with your Path to the vmail.inc on your uberspace
$backends['mailmgr'] = [
    'disabled' => false,
    'name' => 'VMailMgr Server',
    'driver' => 'Vmailmgr',
    'policy' => [],
    'params' => [
        'vmailinc' => '/var/www/virtual/yourUsername/vmail.inc'
    ],
];
