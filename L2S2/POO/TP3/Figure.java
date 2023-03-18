public class Figure
{
    static double x0=0,y0=0;
    double xO,yO;
    static Point zero = new Point(x0,y0);
    Point origine = new Point(xO,yO);
    Figure()
    {
        xO=0;
        yO=0;
        origine= new Point(xO,yO);
    }
    Figure(Point p)
    {
        xO=p.x;
        yO=p.y;
        origine= new Point(xO,yO);
    }
    abstract Show()
    {
        System.out.println("("+xO+","+yO+")");
    }
}
