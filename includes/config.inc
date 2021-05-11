
    <?php 
    
    $dbtype     = "mysql";
    $dbhost     = "localhost";
    $dbname     = "devil_lock";
    $dbuser     = "devil_lock";
    $dbpass     = "walkwiththedevil!1";
    $conn = new PDO("mysql:host=$dbhost;dbname=$dbname",$dbuser,$dbpass);
    $conn->exec("set names utf8");
    $conn->setAttribute( PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION ); 
    
    ?>
    
