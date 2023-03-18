<!DOCTYPE HTML>
<html>
	<head>
		<title>TP 8 - PHP et MySQL</title>
		<meta charset="UTF-8">
	</head>
	<?php
		function afficher_livres()
		{
			$nom_bdd = "L2_TP7";
			$server = "localhost";
			$user = "root";
			$password = "";
			try {
				$connexion = new PDO("mysql:host=$server;dbname=$nom_bdd", $user, $password);
				$requete_sql = "SELECT * from Livres";
				$result = $connexion->query($requete_sql);
				while($tuple = $result->fetch(PDO::FETCH_ASSOC)){
					echo "<tr><td>" . $tuple['ref_livre'] . "</td><td>" . $tuple['titre'] . "</td><td>" . $tuple['auteur'] . "</td><td>" . $tuple['exemplaires'] . "</td><td>" . $tuple['empruntes'] . "</td></tr>";		
					
				}
			} catch (PDOException $e) {
				echo "Erreur ! " . $e->getMessage() . "<br/>";
			}
		}
		
	?>
	
	
	<body>
		<div align="center">
			<div align="center" style="border-style:solid; border-color:black;border-radius:5px; width:900px">
				<h2 align="center">État de la bibliothèque</h2>
				<table id="biblio" style="width:100%; text-align:center">
					<tr style="background-color:#2ECCFA; font-size:18px; color:white;border-radius:50px">
						<th width="10%" style="border-top-left-radius:15px">Référence du livre</th>
						<th width="35%">Titre</th>
						<th width="35%">Auteur</th>
						<th width="10%">Nombre d'exemplaires</th>
						<th width="10%" style="border-top-right-radius:15px">Nombre de prêts</th>
					</tr>
					<?php
						afficher_livres();
					?>
				</table>
			</div>
				<br>
				<form method="POST" action="gestion.PHP" align="center" style="border-style:solid; border-color:black;border-radius:5px; width:900px">
					<h3 align="center" style="background-color:#2ECCFA; color:white;border-radius:50px">Gestion des prêts</h3>
					<table width="100%">
						<tr>
							<td><b>Immatriculation de l'étudiant</b></td><td><input type="text" name="num_etudiant" required></td>
						</tr>
						<tr>
							<td><b>Nom complet de l'étudiant</b></td><td><input type="text" name="nom_complet_etudiant" required></td>
						</tr>
						<tr>
							<td><b>Référence du livre</b></td><td><input type="text" name="ref_livre" required></td>
						</tr>
						<tr>
							<td colspan='2' align='center'>
								<b>Emprunter </b><input type="radio" name="operation" value="E" checked>
								<b>Restituer </b><input type="radio" name="operation" value="R">
							</td>
						</tr>
						<tr>
							<td colspan="2"><input type="submit" value="Valider"></td>
						</tr>
					</table>
				</form>
		</div>
	</body>
</html>