<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="html" />
    <xsl:template match="/">
        <html>
            <body>
                <h2>Liste des auteurs:</h2>
                <xsl:for-each select="//auteurs/auteur">
                    <ul>
                        <li>
                            Nom :
                            <xsl:value-of select="@nom" />
                        </li>
                        <li>
                            Prenom :
                            <xsl:value-of select="@prenom" />
                        </li>
                    </ul>
                </xsl:for-each>

                <h2>Paragraphes dans la section 2:</h2>
                <xsl:for-each select="//section[2]/chapitre">
                    <p>
                        <xsl:value-of select="." />
                    </p>
                </xsl:for-each>

                <h2>Liste d'attributs du 2eme auteur</h2>
                    <xsl:for-each select="//auteur[2]/@*">
                        <xsl:value-of select="."/>
			        </xsl:for-each>

                <h2>Titre du chaptire contenant 2 paragraphes</h2>
                <xsl:for-each select="//chapitre[count(paragraphe)=2]">
                        <xsl:value-of select="@titre" />
                </xsl:for-each>

                <h2>Titre du chapitre contenant "deuxieme" dans un paragraphe</h2>
                <xsl:for-each select="//chapitre[paragraphe[contains(.,'deuxieme')]]">
                        <xsl:value-of select="@titre" />
                </xsl:for-each>

                <h2>Liste des attributs de type Titre</h2>
                <xsl:for-each select="*//@titre">
                        <xsl:value-of select="." />
                </xsl:for-each>

                <h2>Les paragraphes dans le chapitre "chap1"</h2>
                <xsl:for-each select="//paragraphe[../@titre='chap1']">
                        <xsl:value-of select="." />
                </xsl:for-each>


            </body>
        </html>
    </xsl:template>

</xsl:stylesheet>