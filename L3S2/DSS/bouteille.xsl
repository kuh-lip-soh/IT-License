<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

    <xsl:output method="html" />

    <xsl:template match="/">
        <html>
            <title>BOUTEILLES</title>
            <h1>
                <b>LES BOUTEILLES</b>
            </h1>
            <br>
                <body>
                    <ol>
                        <xsl:for-each select="bouteille">
                            <xsl:sort select="marque" order="ascending" />
                            <li>
                                <p>
                                    La marque de bouteille est :
                                    <xsl:value-of select="marque" />
                                </p>
                            </li>
                            La composition de cette bouteille est :
                            <br>
                                <xsl:for-each select="composition/ion" />
                                ** L'ion:
                                <b>
                                    <xsl:value-of select="text()" />
                                </b>
                                est de type :
                                <b>
                                    <xsl:value-of select="@type" />
                                </b>
                                et possède le volume :
                                <b>
                                    <xsl:value-of select="volume" />
                                    <xsl:value-of select="volume/@unite" />
                                </b>
                            </br>
                        </xsl:for-each>

                        <p>
                            La source de cette bouteille est de :
                            <xsl:value-of select="source" />
                        </p>
                        <p>
                            Le ph de cette bouteille est :
                            <xsl:value-of select="ph" />
                        </p>
                        </xsl:for-each>
                    </ol>
                </body>
        </html>
    </xsl:template>

</xsl:stylesheet>