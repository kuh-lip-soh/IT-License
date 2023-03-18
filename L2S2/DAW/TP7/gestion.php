<?php
	header('content-type: text/html; charset=utf-8');
	
	$ref_livre = $_POST["ref_livre"];
	$num_etudiant = ...;
	$nom_complet = ...;
	$type_operation = ...;
	
	if(.....)
		Emprunter($ref_livre, $num_etudiant, $nom_complet);
	else
		Restituer($ref_livre, $num_etudiant, $nom_complet);
?>

<?php
	function Emprunter($ref_livre, $num_etudiant, $nom_complet){
		echo "La fonction <b>EMPRUNTER</b> n'est pas encore implémentée<br>";
	}
	
	function Restituer($ref_livre, $num_etudiant, $nom_complet){
		echo "La fonction <b>RESTITUER</b> n'est pas encore implémentée<br>";
	}
?>