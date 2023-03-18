<?php
	header('content-type: text/html; charset=utf-8');
	
	$nom_bdd = "L2_TP7";
	$server = "localhost"; $user = "root"; $password = "";
	try {
		//Création d'une connexion avec le SGBD
		$connexion = new PDO("mysql:host=$server;dbname=$nom_bdd", $user, $password);
		
		//Création de la table Livres
		$requete_sql = "CREATE TABLE IF NOT EXISTS Livres (
			ref_livre INT(6) UNSIGNED PRIMARY KEY,
			titre VARCHAR(30) NOT NULL,
			auteur VARCHAR(30) NOT NULL,
			exemplaires INT(6) UNSIGNED,
			empruntes INT(6) UNSIGNED
		)";
		
		$connexion->exec($requete_sql);
		echo "Table Livres créée avec succès.<br>";
		
		//Création de la table Emprunts
		$requete_sql = "CREATE TABLE IF NOT EXISTS Emprunts (
			ref_livre INT(6) UNSIGNED,
			num_etudiant INT(6) UNSIGNED,
			nom_complet VARCHAR(30) NOT NULL
		)";
		
		$connexion->exec($requete_sql);
		echo "Table Emprunts créée avec succès.<br>";
		
		
		//Insertion de quelques livres
		$requete_sql = "INSERT INTO Livres (ref_livre, titre, auteur, exemplaires, empruntes) VALUES 
		(1, 'HTML 5', 'Auteur 1', 5, 0), (2, 'CSS 3', 'Auteur 2', 4, 0), (3, 'JavaScript', 'Auteur 3', 3, 0)";
		
		$connexion->exec($requete_sql);
		echo "Insertion réussie au niveau de la table Livres.<br>";
		
		//Clôture de la connexion
		$connexion = null;
	} catch (PDOException $e) {
		echo "Erreur ! " . $e->getMessage() . "<br/>";
	}
?>