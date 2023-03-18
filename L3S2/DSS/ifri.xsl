<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:output method="html" />
	<xsl:template match="/">

		<html>
			<body>
				<h1>Bouteille</h1>
				<p>
					<b>La bouteille est :</b>
					<xsl:for-each select="bouteille"/>
					<xsl:value-of select="marque" />
				</p>
				<p>
					<b>La bouteille est :</b>
					<xsl:value-of select="volume" />
				</p>
				<xsl:apply-templates />
			</body>
		</html>
	</xsl:template>

</xsl:stylesheet>